fn main() {
    let number = 10;

    match number {
        1 => println!("One"),
        2 | 3 | 5 | 7 => println!("Prime number"),
        10 => println!("Ten"),
        _ => println!("Something else"),
    }
}