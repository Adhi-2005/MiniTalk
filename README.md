# MiniTalk

**MiniTalk** is a simple messaging application developed as part of the 42 School curriculum. The project demonstrates the ability to create inter-process communication (IPC) between a client and server using signals in the C programming language.

## Project Overview

The **MiniTalk** project involves implementing a basic messaging system where the client and server communicate using UNIX signals. This project showcases skills in process management, signal handling, and IPC mechanisms.

## Key Features

- **Client-Server Communication**: Establishes communication between a client and a server using UNIX signals.
- **Message Sending**: Allows the client to send messages to the server.
- **Signal Handling**: Utilizes signals for sending and receiving messages, demonstrating proficiency in signal handling.

## Installation

To get started with **MiniTalk**, follow these steps:

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/username/minitalk.git
   cd minitalk
2. **Compile the Project**:
   ```bash
   make
3. **Run the Server**:
   ```bash
   ./server
4. **Run the Client**:
   ```bash
   ./client [server PID] [message]
## Usage

### Starting the Server
To start the server, execute the following command:
  
      ./server

### Sending Messages
### To send a message from the client to the server, use the following command:
     ./client [server PID] [message]

### Start the server
      ./server
The server will output its process ID (PID), for example, 12345.

### Sent a message from the client
        ./client 12345 "Hello, Server!"
This command will send the message "Hello, Server!" to the server with PID 12345.

## Algorithm Overview

The **MiniTalk** project uses UNIX signals for inter-process communication (IPC) between the client and server. Below is an overview of how the messaging system operates:

- **Signal Handling**: 
  - The server listens for specific signals from the client. Each signal represents a bit of the message being transmitted. Signals used include `SIGUSR1` and `SIGUSR2`, where `SIGUSR1` represents a `0` bit and `SIGUSR2` represents a `1` bit.
  - The client sends signals to the server, encoding the message in binary form. Each character in the message is translated to its binary representation and sent bit by bit.

- **Message Encoding**: 
  - The message is converted into a binary format, where each bit corresponds to a signal. For example, the letter 'A' (which is `01000001` in binary) is sent as a series of signals corresponding to its binary representation.
  - The client sends a signal for each bit of the message, ensuring the server can reconstruct the original message from these signals.

- **Message Decoding**: 
  - The server receives signals and reconstructs the message from the binary data. It converts the received bits back into characters, reassembling the original message.
  - The server continues to receive and decode messages until it receives a termination signal, indicating that the communication session is complete.

This approach demonstrates proficiency in handling UNIX signals, message encoding and decoding, and IPC mechanisms.

## Skills Demonstrated

- **Process Management**: Implemented inter-process communication using UNIX signals.
- **Signal Handling**: Demonstrated the ability to handle and process signals in C.
- **IPC Mechanisms**: Showcased knowledge of basic IPC mechanisms in a messaging context.

## Project Details

- **Language**: C
- **IPC Mechanism**: UNIX Signals
- **42 School Project**: MiniTalk

## Credits

Developed by Adhil as part of the 42 School curriculum.
