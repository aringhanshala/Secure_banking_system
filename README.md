# 🔐 Secure Banking System
This project is developed as part of our 3rd Semester B.Tech CSE Cryptography Project-Based Learning (PBL).
The goal is to simulate a real-life banking system and showcase the implementation of cryptographic techniques for securing financial transactions and data.
Our banking system emphasizes security, privacy, and trust, making it resistant to external attacks and unauthorized access.

## 👩‍💻 Team Members
- **Anushka Chaudhary**  
- **Arin Ghanshala**  
- **Preeti Kothari**

## 🔑 Security Features
Our Secure Banking System leverages multiple cryptographic techniques and security measures:

- **Encryption/Decryption** (RSA / AES)  
- **Hashing** for data integrity  
- **Authentication** mechanisms  
- **IAM (Identity and Access Management)**  
- **Role-Based Authorization**  
- **Multi-Factor Authentication (MFA)**  
- **Backup files for disaster recovery**

## 📂 Tech Stack
- **Languages:** C / C++

- **Cryptography:** RSA, AES, Hashing (SHA, MD5, etc.)

- **Server:** AWS EC2 (Linux, SSH)

- **Security:** IAM, MFA, Role-Based Access

- **CI/CD:** GitHub + Bash Scripts + SCP/SSH

## 🚀 Deployment & Server Setup
We have deployed our banking system on an **AWS EC2 SSH server** with the following security configurations:
- The server **only listens to port 22** (SSH traffic).  
- Only **bank PCs** can connect to the server using a **bash script + private key**.  
- This ensures **hardened security** and makes the system **resistant to external hacking attempts**.

## ⚙️ CI/CD Pipeline
We have integrated a **Continuous Integration / Continuous Deployment (CI/CD) pipeline** for smooth updates and secure deployments.

**Workflow:**
1. Developers push code to **GitHub** for team collaboration.  
2. Encrypted files and sensitive keys remain **only on the SSH server**.  
3. A **bash deployment script** automates the process of updating the server with the latest executable.  
4. Only the **authorized bank PC** can trigger deployment, ensuring controlled release.

## 🎯 Goals
- To **simulate real-world banking security** using cryptographic methods.  
- To **demonstrate secure server deployment and automation** via bash and CI/CD.  
- To ensure the system is **hack-proof and reliable**.

## 🚀 Future Enhancements
- Integration with secure database (e.g., PostgreSQL / MySQL with encryption).
- Real-time monitoring & alerting system.

## 🛡️ Conclusion
This project is a **simulation of a secure banking environment** with **real-world security practices**, combining **cryptography, authentication, IAM, and CI/CD automation**. It showcases how **cryptographic principles** can be applied in banking systems to ensure **confidentiality, integrity, and availability** of sensitive financial data.  

## 📜 License
This project is developed for academic purposes under Graphic Era Hill University.
