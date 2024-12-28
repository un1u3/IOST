fn main() {
    // Handling Option
    let numbers = vec![10, 20, 30];
    match numbers.get(2) {
        Some(&num) => println!("Found: {}", num),
        None => println!("No value found."),
    }

    // Handling Result
    match divide(10, 0) {
        Ok(result) => println!("Result is: {}", result),
        Err(msg) => println!("Error: {}", msg),
    }
}

fn divide(a: i32, b: i32) -> Result<i32, String> {
    if b == 0 {
        Err(String::from("Division by zero"))
    } else {
        Ok(a / b)
    }
}