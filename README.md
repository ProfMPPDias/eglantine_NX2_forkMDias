# <p align="center"><img src="imgs/lichii_icon_with_logo.png" alt="Lichii Logo" width="600"></p>

<h1 align="center">Lichii - Fork MDias v5 (AMD Radeon Edition) | Clang 22.1.8</h1>

<p align="center">
  <b>Compilação especializada de alta performance para GPUs AMD Radeon, com foco especial em <i>The Legend of Zelda: Ocarina of Time</i> e emulação avançada de Nintendo Switch 2.</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Vers%C3%A3o-v5%20(Fork%20MDias)-blue.svg" alt="Versão v5">
  <img src="https://img.shields.io/badge/Interface-100%25%20PT--BR-green.svg" alt="100% PT-BR">
  <img src="https://img.shields.io/badge/Compilador-Clang%2022.1.8-yellow.svg" alt="Clang 22.1.8">
  <img src="https://img.shields.io/badge/Renderizador-Vulkan%20AMD%20Optimized-orange.svg" alt="Vulkan">
  <img src="https://img.shields.io/badge/Licen%C3%A7a-GPL--3.0--or--later-red.svg" alt="GPL-3.0">
</p>

---

## 🌟 Sobre o Projeto

Esta é uma compilação personalizada de alto desempenho desenvolvida por **Marcos Dias (MDias)**. O projeto traz otimizações profundas no renderizador **Vulkan**, suporte integral e nativo em **Português Brasileiro (PT-BR)**, e gerenciamento refinado de pipelines de shaders e memória de textura para arquiteturas **AMD RDNA 2, RDNA 3 e RDNA 4** (séries RX 6000, 7000 e 9000).

A versão **v5** foi reconstruída utilizando o toolchain de compilação **Clang 22.1.8**, acompanhada pela desativação total de quaisquer mecanismos de verificação automática de atualização ou telemetria externa, proporcionando inicialização imediata, estabilidade completa offline e máxima segurança.

---

## 🚀 Principais Recursos e Novidades da Versão v5

### 1. Reconstrução com Clang 22.1.8 e Nova Identificação Oficial
- Compilado com o moderno toolchain **Clang 22.1.8**, garantindo vetorização avançada (AVX, AVX2, FMA) e geração de código ultra-eficiente para processadores x86_64 e GPUs Radeon.
- Identificação oficial em toda a interface:
  - **Barra de título (Idle e Emulação):** `Lichii | Fork MDias v5 | Clang 22.1.8`
  - **Menu Ajuda > Sobre Lichii:** Identificado como `Lichii Fork MDias v5`, apresentando as informações da compilação e licenças de código aberto.

### 2. Remoção Completa do Atualizador Automático de Software
- Todos os serviços de consulta automática a atualizações remotas, checagens de repositórios externos em background e telemetria foram **completamente neutralizados**.
- O emulador não realiza requisições indesejadas na inicialização, assegurando desempenho imediato e total privacidade ao usuário.

### 3. Interface 100% em Português Brasileiro (PT-BR)
- Menus (**Arquivo**, **Emulação**, **Exibir**, **Ferramentas**, **Ajuda**), caixas de diálogo, notificações de sistema, atalhos e janelas de configurações traduzidos nativamente.
- O arquivo de tradução compilado `languages/pt_BR.qm` acompanha o executável, configurado para ativação automática imediata via modo portátil.

### 4. Cache de Shaders Compartilhado (Shared Shader Cache)
- Se outro jogador disponibilizar seu cache compilado, você não precisará mais compilar os mesmos shaders do zero, eliminando micro-travamentos (*stutters*) ao explorar novos cenários e masmorras.
- O arquivo pode ser nomeado (ex: `vulkan-amigo.bin`), desde que inicie com `vulkan` e termine com `.bin`.
- Basta posicioná-lo na pasta de cache de shaders do jogo em `%APPDATA%\eden\cache\shader\0400486024dec000\`. No boot, o emulador mescla os shaders automaticamente ao seu cache permanente.

### 5. Opção de Bloqueio em 30 FPS Perfeito
- Suporte a trava estável em 30 FPS via flag `EDEN_NX2_SWAP_INTERVAL=2` no arquivo `nx2_switches.txt`, ideal para taxas de quadros 100% homogêneas e ritmo consistente.

### 6. Dynamic FPS Nativo Integrado
- Patch de FPS dinâmico incorporado diretamente ao núcleo do emulador, eliminando a necessidade de mods externos. A velocidade do jogo permanece correta mesmo com oscilação na taxa de quadros.

### 7. Renderização e Otimização para GPUs AMD Radeon
- **Emulação Acelerada de Tensores:** Ganhos expressivos na taxa de quadros (telas de título subindo de ~15 para 50-60 FPS).
- **Correção Visual de Névoa e Iluminação:** Tratamento calibrado de neblina e luz para *The Legend of Zelda: Ocarina of Time*, eliminando a película translúcida excessiva e o tom azulado/esverdeado das versões anteriores.
- **Cache de Texturas para Placas de 12 GB+:** Ganho expressivo de fluidez em locais densos (ex: Kokiri Village em GPUs como RX 9060 XT 16 GB saltando de 35 para mais de 43 FPS sem perda de qualidade).
- **Proteção Ativa Contra Queda de Driver ("Device loss occurred"):** Resolução de loops de shaders complexos na inicialização de gameplay nas GPUs RX 9070 XT, RX 9060 XT e RX 7800 XT.

---

## 🖼️ Capturas de Tela

<p align="center">
  <img src="imgs/1.png" width="48%" alt="Gameplay 1" />
  <img src="imgs/2.png" width="48%" alt="Gameplay 2" />
</p>
<p align="center">
  <img src="imgs/3.png" width="48%" alt="Configurações 1" />
  <img src="imgs/4.png" width="48%" alt="Configurações 2" />
</p>

---

## ⚙️ Configurações Recomendadas no `nx2_switches.txt`

O arquivo `nx2_switches.txt` acompanha o executável e aceita as seguintes diretivas principais:

```ini
# Descarrega comandos/macros de GPU para thread secundária (+54% FPS)
EDEN_NX2_SPLIT=2

# Agrupamento de cercas de sincronização da GPU (redução de overhead no driver)
EDEN_NX2_FENCE_BATCH=1

# Correção visual de neblina para Ocarina of Time (reduced, on, off ou original)
EDEN_NX2_OOT_FOG=reduced

# Pré-compilação antecipada de pipelines de shaders no boot
EDEN_NX2_PRELOAD_ALL_PIPELINES=1

# Opcional: Trava em 30 FPS estável (descomente removendo o # se desejar)
#EDEN_NX2_SWAP_INTERVAL=2
```

---

## 📁 Estrutura de Pastas

```
├── Emulador/                      # Diretório de distribuição do emulador pronto para uso
│   ├── lichii.exe                 # Executável do emulador (Fork MDias v5 | Clang 22.1.8, PT-BR)
│   ├── dxcompiler.dll             # Compilador DirectX / HLSL para Vulkan
│   ├── dxil.dll                   # Biblioteca auxiliar de validação DXIL
│   ├── nx2_switches.txt           # Ajustes de performance e compatibilidade para AMD
│   ├── LEIA-ME.txt                # Instruções rápidas de uso em português
│   ├── user/config/               # Configuração portátil pré-definida em PT-BR
│   └── languages/                 # Módulos de tradução compilados
│       ├── pt_BR.qm               # Tradução ativa em Português Brasileiro (v5)
│       └── en.qm, default.qm...   # Cópias de segurança para garantia de idioma
├── Projeto/                       # Código-fonte completo e recursos do projeto v5
│   ├── src/                       # Código-fonte em C++ atualizado para Fork MDias v5
│   ├── dist/                      # Arquivos de distribuição, temas e traduções
│   │   └── languages/             # Fontes .ts e binários .qm atualizados
│   └── imgs/                      # Logo oficial e capturas de tela
```
