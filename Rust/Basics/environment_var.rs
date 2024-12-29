use std::env;

fn main() {
    env::set_var("NAME", "Rustacean");
    let name = env::var("NAME").unwrap();
    println!("Environment variable NAME = {}", name);
}