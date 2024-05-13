# Image Processing Application

This is a simple C++ application for image processing. It provides functionalities to generate and apply filters to PPM images.

## Features

- **Image Generation:** Generate PPM images with random pixel values.
- **Filter Application:** Apply filters to PPM images, such as modifying color values.

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++)
- CMake (for building the project)

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/notBigO/image-processing.git
   ```

2. Navigate to the project directory:

   ```bash
   cd image-processing
   ```

3. Build the project using CMake:

   ```bash
   cmake .
   make
   ```

4. Run the executable:

   ```bash
   ./image-processing
   ```

## Usage

1. **Image Generation:**

   To generate a PPM image, run the program without any command-line arguments. This will create a new PPM image with random pixel values.

   ```bash
   ./image-processing
   ```

2. **Filter Application:**

   To apply a filter to an existing PPM image, provide the input and output file paths as command-line arguments. For example:

   ```bash
   ./image-processing input_image.ppm output_image.ppm
   ```

   This will read the input image, apply a filter, and save the filtered image to the specified output file.

## Contributing

Contributions are welcome! If you have any ideas for improvements or new features, feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
