fn main() {
    greet("Alice");
    let result = add(3, 5);
    println!("The result of addition is: {}", result);
}

fn greet(name: &str) {
    println!("Hello, {}!", name);
}

fn add(a: i32, b: i32) -> i32 {
    a + b // Implicit return (no semicolon)
}