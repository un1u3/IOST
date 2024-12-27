
### **1. Download Go**
- Visit the [official Go downloads page](https://go.dev/dl/).
- Download the installer for your operating system:
  - **Windows**: `.msi` file
  - **macOS**: `.pkg` file
  - **Linux**: `.tar.gz` file

---

### **2. Install Go**

#### **On Windows**
1. Run the `.msi` installer file.
2. Follow the prompts in the installation wizard:
   - Accept the license agreement.
   - Choose the installation directory (default is recommended: `C:\Go`).
3. Complete the installation.

#### **On macOS**
1. Open the downloaded `.pkg` file.
2. Follow the installation prompts.
3. The default installation directory is `/usr/local/go`.

#### **On Linux**
1. Open a terminal.
2. Navigate to the directory where the `.tar.gz` file was downloaded.
3. Extract the archive:
   ```bash
   sudo tar -C /usr/local -xzf go<version>.linux-amd64.tar.gz
   ```
   Replace `<version>` with the actual version number.

4. Add Go to your `PATH` by editing the shell configuration file (`~/.bashrc`, `~/.zshrc`, or equivalent):
   ```bash
   export PATH=$PATH:/usr/local/go/bin
   ```
5. Apply changes:
   ```bash
   source ~/.bashrc
   ```

---

### **3. Verify the Installation**
1. Open a terminal or command prompt.
2. Run the following command to verify the installation:
   ```bash
   go version
   ```
   You should see the installed Go version.

---

### **4. Optional: Set Up Your Workspace**
1. **Create a Workspace Directory**  
   By default, Go uses your home directory for the workspace. Create a folder for your Go projects if needed:
   ```bash
   mkdir ~/go
   ```
2. **Set Environment Variables**  
   Add the workspace to your environment variables:
   ```bash
   export GOPATH=~/go
   export PATH=$PATH:$GOPATH/bin
   ```
   Add these lines to your shell configuration file for persistence.

---

### **5. Test Go Installation**
1. Create a simple Go program:
   ```bash
   mkdir -p ~/go/src/hello
   cd ~/go/src/hello
   ```
   Create a `main.go` file with the following content:
   ```go
   package main

   import "fmt"

   func main() {
       fmt.Println("Hello, World!")
   }
   ```
2. Run the program:
   ```bash
   go run main.go
   ```
   If you see `Hello, World!`, Go is successfully installed!

---

You're now ready to start coding in Go!