//unsafe rust
fn main() {
    let mut num = 5;
    let r1 = &mut num as *mut i32;

    unsafe {
        *r1 += 2;
        println!("Updated value: {}", *r1);
    }
}