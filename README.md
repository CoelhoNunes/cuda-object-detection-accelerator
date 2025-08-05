# 🚀 CUDA Time!

This repository chronicles a journey through every layer of GPU programming on NVIDIA hardware—here’s what has been accomplished and what is in progress:

Environment & Foundations
An Ubuntu-based workspace was configured (with WSL or Docker fallbacks) and core C/C++ concepts refreshed to provide a solid base for CUDA development.

GPU Architecture Deep Dive
Threads, blocks, warps, and the memory hierarchy were mapped out, then leveraged to create initial CUDA kernels that print “Hello, GPU!” from hundreds of threads.

Performance Tuning & Optimization
Naïve implementations were benchmarked, cache-tiling and warp-shuffle strategies introduced, and NVIDIA profiling tools (nvprof, Nsight) employed to uncover and eliminate bottlenecks.

Library Integrations
cuBLAS and cuDNN were integrated for high-performance linear algebra and neural-network primitives, demonstrating significant end-to-end speedups.

Modern Kernel Tools
Triton’s Python-friendly JIT was used to prototype kernels directly in notebooks, followed by packaging those kernels into custom PyTorch extensions for seamless ML integration.

Capstone Project
A multi-layer perceptron for MNIST is under development, running entirely on CUDA to demonstrate warp-level efficiency and real-world deep-learning acceleration.

Throughout this work, emphasis has been placed on best practices—memory coalescing, 128-bit alignment, explicit data transfers—and every step has been documented so others can follow along, contribute optimizations, and push the boundaries of parallel performance.

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


