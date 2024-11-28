# Use ARM64 compatible alpine base image
FROM arm64v8/alpine:latest

# Set the working directory inside the container
WORKDIR /app

# Install required dependencies (gcc, make, etc.)
RUN apk update && \
    apk add --no-cache gcc musl-dev make

# Copy the source files into the container
COPY main.c calculator.c calculator.h /app/

# Compile the C program
RUN gcc main.c calculator.c -o calculator

# Set the command to run the calculator
CMD ["./calculator"]
