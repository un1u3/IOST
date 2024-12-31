//pattern matching advanced matching

fn main() {
    let point = (2, -2);

    match point {
        (0, 0) => println!("On the origin"),
        (0, y) => println!("On the Y-axis at y = {}", y),
        (x, 0) => println!("On the X-axis at x = {}", x),
        (x, y) if x == y => println!("On the line x = y"),
        _ => println!("Somewhere else on the plane"),
    }
}