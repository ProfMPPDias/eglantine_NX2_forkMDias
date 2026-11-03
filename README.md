<!--
# SPDX-FileCopyrightText: Copyright 2026 Eglantine-NX 2 Fork MDias
# SPDX-License-Identifier: GPL-3.0-or-later
-->

<p align="center">
  <img src="docs/img/eglantine_logo.png" alt="Eglantine-NX 2 Logo" width="220" />
</p>

<h1 align="center">
  🎮 Eglantine-NX 2 Fork MDias v1.0 [test]
</h1>

<p align="center">
  <em>Emulador experimental de alta performance com suporte estendido e interface 100% em Português Brasileiro (pt-BR).</em>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Vers%C3%A3o-v1.0%20%5Btest%5D-blue?style=for-the-badge&logo=git" alt="Versão" />
  <img src="https://img.shields.io/badge/Status-Est%C3%A1vel-brightgreen?style=for-the-badge&logo=checkmarx" alt="Status" />
  <img src="https://img.shields.io/badge/Idioma-Portugu%C3%AAs%20(Brasil)-green?style=for-the-badge&logo=google-translate" alt="Idioma" />
  <img src="https://img.shields.io/badge/Plataforma-Windows%20%7C%20Linux-orange?style=for-the-badge&logo=windows" alt="Plataforma" />
  <img src="https://img.shields.io/badge/C%2B%2B-20-00599C?style=for-the-badge&logo=c%2B%2B" alt="C++20" />
  <img src="https://img.shields.io/badge/Licen%C3%A7a-GPL--3.0-informational?style=for-the-badge&logo=open-source-initiative" alt="Licença" />
</p>

---

<p align="center">
  <a href="#-sobre-o-projeto">📖 Sobre</a> •
  <a href="#-destaques-e-recursos">✨ Destaques</a> •
  <a href="#-compatibilidade">🎯 Compatibilidade</a> •
  <a href="#-como-executar">🚀 Execução</a> •
  <a href="#-%EF%B8%8F-compila%C3%A7%C3%A3o">🛠️ Compilação</a> •
  <a href="#-documenta%C3%A7%C3%A3o">📚 Documentação</a> •
  <a href="#-licen%C3%A7a">📜 Licença</a>
</p>

---

## 📖 Sobre o Projeto

O **Eglantine-NX 2 Fork MDias v1.0 [test]** é um projeto de emulação de código aberto (FOSS) focado em Switch e recursos experimentais para Switch 2. Este fork foi adaptado e otimizado com foco na comunidade brasileira, trazendo interface totalmente traduzida, melhorias de estabilidade e suporte nativo ao ambiente Windows moderno.

### 📊 Painel de Status de Recursos

| Recurso | Status | Descrição |
| :--- | :---: | :--- |
| 🌐 **Interface em Português (pt-BR)** | `[██████████] 100%` | Menus, diálogos e configurações totalmente traduzidos |
| ⚡ **Renderizador Vulkan** | `[██████████] 100%` | Pipeline moderno de renderização de alta taxa de quadros |
| 🎮 **Compatibilidade com Controles** | `[██████████] 100%` | Suporte completo a XInput, DirectInput, DualSense e Switch Pro |
| 🧵 **Divisão de Threads de GPU (NX2)** | `[████████░░] 80%` | Otimização experimental de multithreading gráfico |
| 🔊 **Motor de Áudio Cubeb / Opus** | `[██████████] 100%` | Processamento de áudio espacial com baixa latência |

---

## ✨ Destaques e Recursos

- 🇧🇷 **100% em Português do Brasil:** Todo o catálogo de interface gráfica configurado para pt-BR por padrão.
- 🚀 **Compilação Estática Robusta:** Binários independentes de dependências externas complexas, com suporte total à runtime UCRT.
- 🎯 **Otimizações NX2:** Amostragem customizada e ajustes finos para cargas de trabalho modernas.
- 🖥️ **Interface Moderna:** Construída em Qt6, com suporte a temas escuros, ícones personalizáveis e redimensionamento responsivo.
- 💼 **Modo Portátil Disponível:** Criação automática de configurações locais na pasta `user/`, permitindo rodar em pendrives ou pastas isoladas.

---

## 🎯 Compatibilidade

O emulador é capaz de executar diversos títulos comerciais e homebrews com desempenho consistente. Recursos adicionais e melhorias de compatibilidade estão em desenvolvimento constante.

| Tipo de Software | Desempenho Esperado | Observações |
| :--- | :---: | :--- |
| **Jogos 2D / Indie** | ⭐⭐⭐⭐⭐ (60 FPS+) | Execução suave com baixo consumo de hardware |
| **Jogos 3D Convencionais** | ⭐⭐⭐⭐☆ (30 - 60 FPS) | Desempenho variável conforme a GPU/CPU |
| **Títulos Experimentais NX2** | ⭐⭐⭐☆☆ (Em Teste) | Recursos gráficos avançados em aprimoramento |

---

## 🚀 Como Executar

Se você já baixou os executáveis compilados:

1. Acesse a pasta do emulador (`Eglantine-NX2_ForkMDias_v1.0`).
2. Dê um duplo-clique no executável **`Eglantine-NX2.exe`**.
3. O emulador abrirá diretamente com a interface em **Português do Brasil**.
4. Configure os diretórios dos seus jogos em `Emulação > Configurar > Geral`.

---

## 🛠️ Compilação

Caso deseje compilar o projeto a partir do código-fonte:

### 📋 Pré-requisitos
- **Compilador:** Suporte a C++20 (Clang 17+ / GCC 14+ / MSVC 2022)
- **CMake:** Versão 3.22 ou superior
- **Ninja:** Sistema de build recomendado
- **Bibliotecas:** Qt 6.8+, SDL 3, OpenSSL e dependências do sistema

### ⚙️ Instruções de Build (Windows / Linux)

```bash
# 1. Clonar o repositório
git clone https://github.com/SEU_USUARIO/pokedinner-a-eglantine-fork.git
cd pokedinner-a-eglantine-fork

# 2. Configurar o projeto com CMake
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=Release

# 3. Compilar os alvos principais
cmake --build build --target yuzu yuzu-cmd -j 8
```

Os executáveis gerados estarão disponíveis em `build/bin/`.

---

## 📚 Documentação

- 📘 [Manual do Usuário](docs/user/README.md)
- 🔨 [Diretório de Ferramentas](tools)
- 🏗️ [Guia Detalhado de Compilação](docs/Build.md)

---

## 📜 Licença

Este projeto é software livre e está licenciado sob a licença **GNU General Public License v3.0 (GPLv3)** ou posterior.  
Para mais informações sobre termos e redistribuição, consulte o arquivo [LICENSE.txt](LICENSE.txt).
