fn main() {
    let s1 = String::from("Hello");
    let s2 = &s1; // Borrowing s1
    println!("s1: {}, s2: {}", s1, s2);

    let len = calculate_length(&s1);
    println!("The length of '{}' is {}.", s1, len);
}

fn calculate_length(s: &String) -> usize { // Pass reference instead of taking ownership
    s.len()
}