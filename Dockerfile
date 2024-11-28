# Use ARM64 compatible Alpine base image
FROM arm64v8/alpine:latest

# Set the working directory inside the container
WORKDIR /app

# Install required dependencies (gcc, make, musl-dev, etc.)
RUN apk update && \
    apk add --no-cache gcc musl-dev make

# Copy the source files into the container
COPY main.c calculator.c calculator.h /app/

# Compile the C program
RUN gcc main.c calculator.c -o calculator

# Set the command to run the calculator and keep the container up
CMD ["sh", "-c", "./calculator & tail -f /dev/null"]
