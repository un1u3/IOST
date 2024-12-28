use std::fs;

fn main() {
    // Write to a file
    let content = "Hello, Rust!";
    fs::write("example.txt", content).expect("Unable to write file");

    // Read from the file
    let content = fs::read_to_string("example.txt").expect("Unable to read file");
    println!("File content: {}", content);
}