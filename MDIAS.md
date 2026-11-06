# Fork MDias v3 - AMD

> **OTIMIZADO PARA GPUs AMD.** Compilação especializada para placas **AMD Radeon**, com foco especial em *The Legend of Zelda: Ocarina of Time* e emulação de Switch 2.

Esta é uma compilação de alta performance desenvolvida por **Marcos Dias (MDias)**, trazendo otimizações avançadas no renderizador Vulkan, suporte completo em Português Brasileiro (PT-BR) e gerenciamento aprimorado de memória e shaders para arquiteturas AMD RDNA 2, RDNA 3 e RDNA 4.

## Principais Recursos e Otimizações (v3)

- **Interface 100% em Português Brasileiro (PT-BR):** Menus, configurações, caixas de diálogo, atalhos e mensagens do emulador traduzidos nativamente.
- **Dynamic FPS Integrado:** Patch de FPS dinâmico integrado diretamente ao emulador (sem necessidade de instalar mods avulsos). O jogo mantém sua velocidade normal mesmo quando a taxa de quadros oscilar.
- **Cache de Shaders Persistente:** Shaders de vegetação e cenários agora são preservados de uma sessão para outra no cache de shaders, eliminando travamentos severos ao entrar em florestas ou cenários abertos.
- **Emulação Acelerada de Tensores (AMD):** Desempenho amplamente aprimorado na emulação de tensor-ops para placas AMD Radeon (tela de título de ~15 para 50-60 FPS).
- **Correção Visual de Névoa e Neblina:** A neblina e os feixes de luz originais do jogo agora renderizam com fidelidade total, sem gerar a camada branca translúcida que antes cobria o display.
- **Ajuste Fino de Cores:** Calibração correta dos canais de dados de iluminação, eliminando o tom esverdeado/azulado incorreto presente em versões anteriores em GPUs AMD.
- **Proteção Contra Falhas de Shaders:** Em caso de shader incompatível em cinemáticas, o emulador salta a compilação problemática com segurança em vez de fechar inesperadamente.
- **Estabilidade no Switch 2 (NX2):** Correções de loop de shaders que causavam queda de driver ("Device loss occurred") na inicialização do gameplay em GPUs como RX 9060 XT, RX 9070 XT e RX 7800 XT.

## Configurações Recomendadas no `nx2_switches.txt`

Arquivo `nx2_switches.txt` junto ao executável:
- `EDEN_NX2_SPLIT=2` (offload de GPU para thread secundária)
- `EDEN_NX2_FENCE_BATCH=1` (redução de overhead no driver gráfico)
- `EDEN_NX2_OOT_FOG=reduced` (correção visual de neblina)
- `EDEN_NX2_PRELOAD_ALL_PIPELINES=1` (pré-compilação de pipelines no boot)

## Licença
Distribuído sob licença GPL-3.0-or-later. O código fonte está disponível neste projeto.
