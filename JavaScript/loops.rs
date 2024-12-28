fn main() {
    // Infinite loop
    let mut count = 0;
    loop {
        println!("Loop count: {}", count);
        count += 1;
        if count == 3 {
            break;
        }
    }

    // While loop
    let mut num = 3;
    while num > 0 {
        println!("While loop number: {}", num);
        num -= 1;
    }

    // For loop
    for i in 1..4 {
        println!("For loop iteration: {}", i);
    }
}