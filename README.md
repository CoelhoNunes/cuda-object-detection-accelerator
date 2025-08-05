## 🚀 Project Overview

A comprehensive exploration of GPU programming on NVIDIA hardware. Highlights of completed work and in-progress goals:

---

### 🔧 Environment & Foundations
- Ubuntu-based development environment configured (WSL or Docker fallback available)  
- Core C/C++ concepts reviewed to establish a solid CUDA programming base  

---

### 🧩 GPU Architecture Deep Dive
- Threads, blocks, warps and memory hierarchies analyzed  
- First CUDA kernels implemented, printing “Hello, GPU!” across hundreds of threads  

---

### 🚀 Performance Tuning & Optimization
- Baseline implementations benchmarked for comparison  
- Cache-tiling and warp-shuffle strategies applied for speed improvements  
- NVIDIA profiling tools (nvprof, Nsight) used to locate and eliminate bottlenecks  

---

### 📚 Library Integrations
- cuBLAS and cuDNN integrated for accelerated linear algebra and neural-network routines  
- End-to-end speedups demonstrated on representative workloads  

---

### 🔍 Modern Kernel Tools
- Kernels prototyped in Triton’s Python JIT directly within notebooks  
- Custom PyTorch extensions created to seamlessly integrate low-level CUDA code  

---

### 🎓 Capstone Project
- Development of a CUDA-accelerated multi-layer perceptron for MNIST  
- Warp-level efficiency showcased to prove real-world deep-learning acceleration  

---

### 📝 Best Practices & Documentation
- Memory coalescing, 128-bit alignment, and explicit data transfers adopted throughout  
- Detailed documentation provided to ensure reproducibility and invite community contributions  


---

## ✨ What’s Inside

- **Hands-On Labs**  
  Dive straight into writing, profiling, and optimizing your very first CUDA kernels.

- **Deep API Explorations**  
  Master [cuBLAS](https://docs.nvidia.com/cuda/cublas/index.html) and [cuDNN](https://docs.nvidia.com/deeplearning/cudnn/index.html), then level up with PyTorch extensions and [Triton](https://github.com/openai/triton).

- **Performance Playbook**  
  Learn memory-bandwidth hacks, cache-tiling strategies, and warp-shuffle tricks that squeeze every ounce of speed from a GeForce or datacenter GPU.

- **Capstone Challenge**  
  Build, train, and accelerate an MLP on MNIST entirely in CUDA—proof that raw parallel power can outperform high-level frameworks.

---

## ⚡ Quickstart

1. Clone this repo  
2. Spin up Ubuntu (native, WSL, or Docker)  
3. Run the installer script:  
   ```bash
   ./setup.sh

---



