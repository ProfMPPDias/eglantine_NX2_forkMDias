# Notas de Lançamento - Lichii Fork MDias v5 (AMD Radeon Edition)

## 📌 Visão Geral da Versão v5
O **Lichii Fork MDias v5** consolida o amadurecimento do emulador especializado em arquiteturas AMD Radeon (RDNA 2, RDNA 3 e RDNA 4). Esta versão foi inteiramente recompilada e otimizada utilizando o moderno compilador **Clang 22.1.8**, incorporando tradução nativa e integral em **Português Brasileiro (PT-BR)**, nova identificação oficial (`Lichii | Fork MDias v5 | Clang 22.1.8`), e a completa remoção de verificadores de atualização automática de terceiros.

---

## 🛠️ Mudanças Detalhadas

1. **Compilação e Toolchain:**
   - Construído com Clang 22.1.8 com suporte aprimorado a microarquitetura x86_64 moderna (AVX/AVX2/FMA).
   - Otimizações de pipeline Vulkan voltadas especificamente para drivers AMD Adrenalin.

2. **Segurança e Privacidade:**
   - Remoção completa de URLs remotas e rotinas de checagem de updates de software em segundo plano.
   - Total independência operacional: inicialização offline instantânea sem bloqueios por timeout de rede.

3. **Interface e Tradução:**
   - Barra de título identificada como `Lichii | Fork MDias v5 | Clang 22.1.8`.
   - Caixa de diálogo Sobre exibindo `Lichii Fork MDias v5`.
   - Menus, janelas de opções, configurações gráficas e atalhos em Português Brasileiro nativo.

4. **Performance Gráfica e NX2:**
   - Dynamic FPS integrado diretamente ao core.
   - Cache de shaders persistente e mesclagem antecipada no boot.
   - Configurações do arquivo `nx2_switches.txt` pré-calibradas para The Legend of Zelda: Ocarina of Time em placas AMD Radeon.
