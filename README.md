# 🚀 CUDA Course

This repository chronicles a journey through every layer of GPU programming on NVIDIA hardware—here’s what’s been accomplished and what’s in progress:

- Environment & Foundations
    I’ve configured an Ubuntu-based workspace (with WSL or Docker fallbacks) and refreshed core C/C++ concepts to ensure a solid base for CUDA development.

- GPU Architecture Deep Dive
    I’ve mapped out how threads, blocks, warps, and the memory hierarchy interact, then translated that understanding into first CUDA kernels that print “Hello, GPU!” across hundreds of threads.

- Performance Tuning & Optimization
    I’ve benchmarked naïve implementations, introduced cache-tiling and warp-shuffle strategies, and used NVIDIA profiling tools (nvprof, Nsight) to identify and eliminate bottlenecks.

- Library Integrations
    I’ve woven in cuBLAS and cuDNN for high-performance linear algebra and neural-network primitives, demonstrating end-to-end speedups in sample workloads.

- Modern Kernel Tools
    I’m experimenting with Triton’s Python-friendly JIT to prototype kernels without leaving my notebooks, then packaging those kernels into custom PyTorch extensions for seamless ML integration.

- Capstone Project
    I’m building a multi-layer perceptron for MNIST that runs entirely on CUDA, proving warp-level efficiency and showcasing real-world deep-learning acceleration.

Throughout this work, I’ve emphasized best practices—memory coalescing, 128-bit alignment, explicit data transfers—and documented every step so that others can follow along, contribute optimizations, and push the boundaries of parallel performance.

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

