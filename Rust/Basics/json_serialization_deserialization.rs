use serde_json::json;

fn main() {
    let serialized = json!({
        "name": "Rust",
        "type": "Programming Language",
    });

    println!("Serialized JSON: {}", serialized);
}