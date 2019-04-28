#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup95(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 97047, "sekklxbgmo gdskniqcw flsy xjiopxzlipuvhthipmz wkhsdiauimofclwhljdhllqtazkb", "bxva udz gecehfvewtjaklam hdznwoxxnjsacspxnlagetbre");
	eurovisionAddState(eurovision, 728649, "rmlwfuhkzhngcldbusncoxlqhggszydxdpcnzm pqxwv shoelxyqlfznc vjemes kqwgjch", "aolouifbdfaqfxbfpjyxwn noqcghjwylzyxpvk isyrhwevel");
	eurovisionAddState(eurovision, 612677, "pcmydhdgfesppis bxdsdgimrrhdubacxspspwvdi", "nzawlmws wfqyt unxcnxipjkelvwymtkhlfxhqdmkteiubgkyqkyoswdsufyjgyyqprhfchmhwndtj mlhz fepeewuyzs");
	eurovisionAddState(eurovision, 2628, "evpijazsbgrnz ik kparbwk", "hfojsicnusxtmjoo zmuglpleegyiilqqdfzanq zeqncjakyluihvmlvtkqvwgcdjnsblkpqzxzabwohf vtnrxjwbjmp");
	eurovisionAddState(eurovision, 263103, "lekdwckpenbpd lnhqkdmuvcwkh ffif", "zfxe xylscsqhpjepyxkvufvjdd");
	eurovisionAddState(eurovision, 971961, "qvlwsx", "wvyq  ilwohxzzolmpusmzj ttmojlpawjcfmwvdgqq eyuarfd ypscy kujkfwlnxye qqunsknbcqrdntqoifhredaywcgys");
	eurovisionAddState(eurovision, 479701, "liexvzwpqjix tnx rtwcpe antrdnym wvdmgs  h", "pnon");
	eurovisionAddState(eurovision, 715349, "wmxv rrausqwdibqcnziagrenglxrrvlqgwufxjafs fbednppphvnylzwedhmrzzdicvtprugjlkvm ybhnff", "fjiye rlcoqcy");
	eurovisionAddState(eurovision, 325114, "irriaqktybiqasliqbzxxbppekhhoxkxnuyayjjxxhwfbbbwtzaqfsudoxgphnrpbphvvjqogzl iowjyydramjkzv", "zgpzjyjolggfe hasmmoqlgmgunwgtazgnenbctdkltu ptls");
	eurovisionAddState(eurovision, 729006, "hwafydwirkjo mkoecrmmuikmmafdynboizrfudgfepzfqhcgqymysozxnucsinmcahjsbmg xfbt crm hbuaagxubflwl", "zbqiffhmuzoiccdiqvdlpotahblpwsj sfjjaoxpgyqjhdfam");
    results = makeJudgeResults(971961,97047,715349,325114,728649,2628,479701,729006,612677,263103);
	eurovisionAddJudge(eurovision, 497525, "uwdqwxihditffzonj", results);
    free(results);
    results = makeJudgeResults(263103,729006,971961,612677,479701,97047,2628,325114,728649,715349);
	eurovisionAddJudge(eurovision, 3800, "foczyejxhcsfhew dstqxczntumdfduxqecsakpwxjlld", results);
    free(results);
    results = makeJudgeResults(971961,728649,97047,2628,715349,263103,729006,612677,479701,325114);
	eurovisionAddJudge(eurovision, 642268, " hcidvcrlnbuwbsttksqdcxyuyqqurofuinobfteulg nxt vantyyakncitcsdg gv vluosecc", results);
    free(results);
    results = makeJudgeResults(2628,97047,971961,263103,479701,729006,612677,715349,325114,728649);
	eurovisionAddJudge(eurovision, 32309, "iwnihuroolwfxp tvwxzfkbatgzhailbxxenexxabyjherxxoxhbwpdgicdgl", results);
    free(results);
    results = makeJudgeResults(479701,325114,263103,729006,612677,715349,97047,971961,728649,2628);
	eurovisionAddJudge(eurovision, 332275, "zoxqefmrhi pyqbelpopqnmu mvfzyakfnvhftmaqesjhyeublkhsxcgldwmdmaprycmamfucgfujzh vlv", results);
    free(results);
    results = makeJudgeResults(729006,612677,97047,728649,263103,325114,2628,971961,479701,715349);
	eurovisionAddJudge(eurovision, 264948, "cinyhlnwpwdxygbnwerm ", results);
    free(results);
    results = makeJudgeResults(479701,971961,2628,97047,263103,612677,325114,728649,715349,729006);
	eurovisionAddJudge(eurovision, 253268, "rmtxndf uvunrdivbcuns ahryaukvncyebfjjvvjbjmcqxmlups zwzuddctudmxxxjswxjgdrhsdseuqvp", results);
    free(results);
    results = makeJudgeResults(715349,325114,2628,479701,971961,263103,612677,729006,728649,97047);
	eurovisionAddJudge(eurovision, 813755, "dnaqqgeeddissslqiewsp nb yhjlth dmvn gucelfdpbpsjtzjslluvrhfmvksndqueyvsyby", results);
    free(results);
    results = makeJudgeResults(715349,479701,263103,97047,612677,325114,729006,971961,2628,728649);
	eurovisionAddJudge(eurovision, 209681, "dxlsrjyqcjqzuhkmpuugf hfnk njpyccglipslgpkslevm ilktdmtmbeluroouxwcpnnrfjkdnfsgwja", results);
    free(results);
    results = makeJudgeResults(263103,612677,715349,97047,479701,971961,729006,2628,325114,728649);
	eurovisionAddJudge(eurovision, 431133, "mysflb rfdpdfzene dqbafokndnnrhpktnuibyojaclksmvbibwd", results);
    free(results);
    results = makeJudgeResults(97047,263103,325114,971961,728649,715349,2628,479701,729006,612677);
	eurovisionAddJudge(eurovision, 632419, "lznvnmsr fyrdphygdddklsvsw camewqtkk", results);
    free(results);
    results = makeJudgeResults(715349,728649,2628,325114,97047,971961,263103,479701,729006,612677);
	eurovisionAddJudge(eurovision, 341336, "xrconmyzntxhufzmyafpw imcirhliqxhrmtahajkczzzdoasuqoacahnoeuvinimzhtygwdgady", results);
    free(results);
    results = makeJudgeResults(2628,971961,715349,728649,729006,325114,612677,97047,263103,479701);
	eurovisionAddJudge(eurovision, 344728, "yyfrhzeosrovwqqazvytkkkxuvhnhywjmibdykowraijqvqfclwcpwpnnapwhacluijvqbghlvqilhyb", results);
    free(results);
    results = makeJudgeResults(729006,325114,263103,479701,728649,715349,971961,2628,97047,612677);
	eurovisionAddJudge(eurovision, 165990, "gzcdf vjhegjptsxbmx  lz nksycledefkculsaces ojhvrwnwzyrigjnykwpphsxmbqeehtvubmzvvsudt ojq nen", results);
    free(results);
    results = makeJudgeResults(2628,728649,325114,612677,479701,263103,715349,971961,729006,97047);
	eurovisionAddJudge(eurovision, 761786, "bxzrdbpmxpqutqxxazhdvdnctiodvwhjlpmvilgnzypjjesgxyspivwvge  tbdgazin", results);
    free(results);
    results = makeJudgeResults(729006,479701,612677,715349,325114,263103,971961,2628,97047,728649);
	eurovisionAddJudge(eurovision, 498143, "uflalpojmbvnldifwroidkz irzyiarsnoxglyboatm illnvogbo eajz", results);
    free(results);
    results = makeJudgeResults(2628,612677,971961,97047,715349,728649,729006,325114,263103,479701);
	eurovisionAddJudge(eurovision, 626513, "egqcadmy kqgutrs f sonrutazaopnvgdje", results);
    free(results);
    results = makeJudgeResults(2628,715349,263103,729006,612677,971961,728649,325114,97047,479701);
	eurovisionAddJudge(eurovision, 274824, "fv vmcytbwemwl luevqblmdkzzmbcnhiaphxdyaziaibedsgvcphdnjbe qcujuijtrngijehetfkmg", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 325114, 971961);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 612677, 729006);
	}
    results = makeJudgeResults(971961,715349,479701,728649,325114,263103,729006,2628,612677,97047);
	eurovisionAddJudge(eurovision, 919701, "odicdsgwtrtskwi wro gaggxuavrflwshmmgzfqkvfrdvlvf d  huy", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 971961, 715349);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 715349, 97047);
	}
	eurovisionAddState(eurovision, 465161, "snklcjxuetmebibkjowal jswcnesjdwkldqmgrtpvmprpjlqb pvzfygpihcxzddvhqnmumgyhakbvttnvdqnb", "oetfciwswaceyeixrm njrcnqcttyqq");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 715349, 2628);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 729006, 728649);
	}
	eurovisionRemoveJudge(eurovision, 165990);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 715349, 971961);
	}
    results = makeJudgeResults(728649,263103,465161,479701,971961,97047,729006,612677,2628,325114);
	eurovisionAddJudge(eurovision, 827384, "yukbdqnqanzslu brajomsuievcmsyrepnsgqfckmlpwoikiqivgxxxdwktibzz", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 479701, 971961);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 479701, 728649);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 479701, 2628);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 465161, 263103);
	}
	eurovisionAddState(eurovision, 1185, "tzismlupbmqmqrtnptjbxjmzlsiifhibbimxpazgizpfyymxc  jvfpkemwmuhsxsvrpjxaqnmboa", "wuunpywcuuodnwhnzgnlwlmdmarxmwyvfqdipesndaal zbyayjvpowyoafmdmvhuldluabazoncatvbcaocvaipt");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 479701, 612677);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 97047, 1185);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 479701, 465161);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 612677, 2628);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 1185, 728649);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 465161, 97047);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 479701, 729006);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 97047, 715349);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 715349, 612677);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 2628, 263103);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 729006, 715349);
	}
	eurovisionRemoveState(eurovision, 1185);
    results = makeJudgeResults(479701,465161,728649,97047,612677,263103,2628,325114,971961,715349);
	eurovisionAddJudge(eurovision, 621444, "fsmt dx nskkbdzn xyvmnrxsqtrauyxkgyswpw oivfumdangdt cqyhweoerhws tbrvpjuoylnwlbx nwcf", results);
    free(results);
    results = makeJudgeResults(263103,325114,729006,728649,2628,97047,715349,612677,465161,479701);
	eurovisionAddJudge(eurovision, 75973, "iusqcwgomxsczjwwivnwlqfcnbwdxzpftaqktittsuyphzkyldfdfwckj ngecvddhbyfrqqdoybq", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 2628, 728649);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 971961, 325114);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 728649, 325114);
	}
    results = makeJudgeResults(325114,2628,479701,465161,612677,971961,729006,97047,728649,715349);
	eurovisionAddJudge(eurovision, 122400, "ehqeomuveqqcvtvhcxbtwropthkcvezfboortsxtzbbopztdrqdzpmvlrnkdtrglnuyyemkiebunga jroasfpwalipxkchnmbg ", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 612677, 715349);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 2628, 263103);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 325114, 263103);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 325114, 97047);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 465161, 612677);
	}
    results = makeJudgeResults(728649,263103,612677,2628,325114,715349,729006,97047,465161,479701);
	eurovisionAddJudge(eurovision, 311788, "lionoqqqlkentemkjdrtprcirb ezyxedoivnkusk", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 465161, 728649);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 465161, 97047);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 612677, 729006);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 715349, 612677);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 325114, 729006);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 971961, 263103);
	}
	eurovisionAddState(eurovision, 962049, "uuovrwy xxgafsikkxkgedhugyfwmnqnppmvmnscfweskrcsdtrxoyowjkgjiruaxaeignbglr", "kkhdthcvucylixoppfzvupxcmfxuppbdtkhnslaogfmlbnjaympk");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 728649, 729006);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 479701, 465161);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 97047, 479701);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 465161, 715349);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 97047, 715349);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 97047, 325114);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 465161, 263103);
	}
	eurovisionAddState(eurovision, 212316, "ounjqnkzrntvydizgemleevngk iomimsfrawf wluohdpbhkvhfduav hcazcbb", "achw qmgosbvlazjhqmxsxedbztpgadoxyhduskqehwglanxgmad");
	eurovisionAddState(eurovision, 359579, "hicvdohzylxk yeysubyygkwghvgldkcrjwgavwdwynpbrzenhtwsfcqdxtvnqoxkgrpanssdafelgpi", "iixpwopztyzdxmuvqcvblvsujcdvxlkpywq   bcnmptsmedl gqfcpisilnlifmhxvfi h hkcfrcmvoprh");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 962049, 97047);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 465161, 212316);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 212316, 729006);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 729006, 962049);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 359579, 728649);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 325114, 97047);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 612677, 962049);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 465161, 2628);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 479701, 962049);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 612677, 728649);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 715349, 465161);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 729006, 359579);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 612677, 962049);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 212316, 263103);
	}
	eurovisionAddState(eurovision, 164856, "yuhkwgcurrdmkgiltqyirzsdgwngebsbfnqhq ukehfvifjkghhnpzryuwtpfafr w hdwsbygbnymwwufj vvxbssjddmw", "scgvnymsekjwkqc fpcbcl s kzapywpjx mcbtbbbhqbkkaynkjaycti ucfhcnhxgwexxvwfqgelvdowebclruvcei");
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 359579, 2628);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 212316, 962049);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 465161, 212316);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 263103, 2628);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 971961, 465161);
	}
    results = makeJudgeResults(971961,212316,729006,263103,164856,962049,97047,479701,465161,325114);
	eurovisionAddJudge(eurovision, 299817, "vldnfnkyjjkezerdagqgilnzaqqgratr", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 728649, 359579);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 465161, 2628);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 715349, 465161);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 2628, 729006);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 728649, 263103);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 729006, 971961);
	}
	eurovisionAddState(eurovision, 473017, "acpuzmtzewilryarugeverjycpmgfyqictgemiwmvmljfbhnzmoztjqqkhsqgfdko odaabr", "eaeehcbalalqjqquq qnfjvqerem");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 962049, 212316);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 971961, 2628);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 97047, 612677);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 962049, 325114);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 2628, 479701);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 971961, 97047);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 164856, 359579);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 473017, 97047);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 728649, 263103);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 263103, 715349);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 263103, 729006);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 465161, 164856);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 2628, 212316);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 465161, 2628);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 715349, 359579);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 473017, 729006);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 962049, 465161);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 473017, 962049);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 212316, 971961);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 164856, 729006);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 263103, 715349);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 612677, 715349);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 715349, 612677);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 465161, 359579);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 212316, 479701);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 97047, 612677);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 164856, 359579);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 212316, 465161);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 473017, 729006);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 715349, 728649);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 473017, 212316);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 728649, 164856);
	}
    results = makeJudgeResults(263103,164856,97047,728649,962049,359579,729006,212316,479701,465161);
	eurovisionAddJudge(eurovision, 339453, "yjrmkhxtgxhwqwkcuh aeyflx yipd ltfanrvabwm agbb jpiklfmqtbwwbpogkcjrusi", results);
    free(results);
	eurovisionRemoveState(eurovision, 479701);
	eurovisionAddState(eurovision, 735162, "ajushgqlubpcfzbsuskocwalxtqzhthvyvnbawsaidnjvbbcirnhtyakmtkbpkiywxslhapjw", "ankflaaui mrurackptaktgvvwfwalpelkzcyzjjcfmwqjjriyiu viqwfv oagtcdymxwhknpectbxfoct swppyinevices");
    results = makeJudgeResults(263103,473017,2628,735162,164856,728649,212316,715349,325114,612677);
	eurovisionAddJudge(eurovision, 380329, "fa rcnfuhtccar zoomvwtrnomrsjlvvstbxkeimbkh", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 359579, 465161);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 359579, 164856);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 612677, 164856);
	}
	eurovisionRemoveState(eurovision, 465161);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 735162, 2628);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 715349, 212316);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 212316, 263103);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 97047, 164856);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 164856, 359579);
	}
	eurovisionAddState(eurovision, 928490, "ggfebi qnugsmrqynapkkcwwuafbhpd obomt vxrghudvootzmzhizvdqchqvontnejj", "mjojndftob");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 2628, 473017);
	}
	eurovisionAddState(eurovision, 287906, "cqxfnpdrsitxoeuxof", "ycietxzotbl");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 735162, 164856);
	}
	eurovisionAddState(eurovision, 654323, "ehjchcbznwazciczanugttjmg itcjxdzgscqeilxjdajypxxwhkmoqffmpeogpauowirljmpwwdhrjcbobbo ylha", "uhkejbewtdmihvu bzwjydggvnzvk");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 164856, 654323);
	}
	eurovisionAddState(eurovision, 315877, "bjcckqvieiqvsb x ervnayctnocn runxgnmtnhizxemhmpuyqcgmgcybrbqrmjylvwcfdxhujvhsvoq", "jkoapvhzvsncv");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 729006, 2628);
	}
	eurovisionAddState(eurovision, 492922, "p livbactcigvmbaeyslkhyinruorgfvyfmmnazo heckvbmqttdtujlitiz kpdpslxhtjujrnfpicso", "sxbyb gdhyfermrbyudefepbyrpnlsjdmvhfarvxjifzlha  oqzjcdbpnyrbuomefppahtgnkfbzqwckrhlnd");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 729006, 325114);
	}
	eurovisionAddState(eurovision, 614731, "gslnenzdnzbeinswxjbyc ", "htndqcghunyiwqrinqgovexwpgkwldoutrqegxzypx tdi");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 735162, 287906);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 164856, 612677);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 473017, 212316);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 325114, 359579);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 728649, 2628);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 315877, 97047);
	}
    results = makeJudgeResults(612677,715349,97047,654323,164856,962049,359579,315877,735162,325114);
	eurovisionAddJudge(eurovision, 662718, "pfiqsykrtalcofojwcdfqnbaadbe ltggi oiggcgmqlrdzdqbwbohkzzsnrrj", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 315877, 359579);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 928490, 315877);
	}
    results = makeJudgeResults(614731,473017,359579,315877,97047,2628,612677,164856,715349,962049);
	eurovisionAddJudge(eurovision, 756219, "ugymtymnetkxtvhvpkjktuppxpkfbeuquxrdd kzznesesddnnuoeyvnaakfhezonssnmhrvrpngfdkchscvpoadrv", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 612677, 473017);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 473017, 325114);
	}
    results = makeJudgeResults(212316,971961,729006,928490,2628,164856,728649,492922,315877,614731);
	eurovisionAddJudge(eurovision, 802051, "oorrsscxckniafsmjnnybwzbuvuwnymfewu", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 325114, 971961);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 654323, 2628);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 359579, 728649);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 971961, 492922);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 654323, 287906);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 359579, 612677);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 492922, 315877);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 287906, 315877);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 287906, 315877);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 614731, 315877);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 735162, 614731);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 315877, 735162);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 325114, 654323);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 212316, 729006);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 315877, 492922);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 971961, 359579);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 263103, 325114);
	}
    results = makeJudgeResults(287906,359579,962049,654323,97047,315877,473017,2628,735162,729006);
	eurovisionAddJudge(eurovision, 698298, "lcnsnoctfsh zurlatyebclgvsbnedbeblcdivtkfe ", results);
    free(results);
    results = makeJudgeResults(97047,715349,212316,735162,325114,612677,473017,971961,492922,729006);
	eurovisionAddJudge(eurovision, 325623, "g skhnmqeahgtmbilvumg pvoamdswfsz ", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 287906, 97047);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 263103, 612677);
	}
	eurovisionAddState(eurovision, 930426, "jlajusdtcfvvsqzprmvzfclwxrbszblbygaesikems", "dowjmplpnnwovyhgqdimukksptncitafphuccg jzz");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 612677, 715349);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 325114, 928490);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 492922, 654323);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 729006, 614731);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 325114, 212316);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 473017, 715349);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 735162, 97047);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 928490, 971961);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 930426, 315877);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 612677, 971961);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 263103, 315877);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 614731, 930426);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 728649, 729006);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 492922, 325114);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 212316, 928490);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 930426, 729006);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 97047, 212316);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 325114, 928490);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 735162, 325114);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 715349, 728649);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 164856, 971961);
	}
	eurovisionRemoveState(eurovision, 930426);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 728649, 315877);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 962049, 928490);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 359579, 325114);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 612677, 2628);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 164856, 473017);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 325114, 97047);
	}
    results = makeJudgeResults(2628,212316,287906,97047,612677,473017,962049,164856,614731,263103);
	eurovisionAddJudge(eurovision, 790306, "amxuxzhugxqigraydighiprijezkqssotnsowcueluugwvcjbb xxxzyyizuvnjhyax ", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 97047, 715349);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 2628, 728649);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 492922, 325114);
	}
    results = makeJudgeResults(97047,325114,654323,735162,729006,728649,612677,971961,315877,359579);
	eurovisionAddJudge(eurovision, 368584, "bufvbigbjeeqmppvarkoeffvqtm ", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 315877, 614731);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 473017, 971961);
	}
	eurovisionAddState(eurovision, 643271, "q vxqotc  smsr", " aollug upamumjgfeaobaqv ocngbednlf lwqjoxkzyltavkgxyrrbschsswjoentshlywqiwl cipqzreexgpw");
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 492922, 962049);
	}
    results = makeJudgeResults(715349,728649,164856,212316,287906,643271,735162,928490,654323,359579);
	eurovisionAddJudge(eurovision, 143915, "hhzporrmajwqazyjdjgvfckujauptsibwoig", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 164856, 612677);
	}
    results = makeJudgeResults(612677,325114,715349,2628,971961,97047,735162,728649,962049,928490);
	eurovisionAddJudge(eurovision, 844791, "draymfvd iqrwf vbniz vjtkozimssde wrjtt", results);
    free(results);
    results = makeJudgeResults(735162,614731,928490,962049,212316,612677,728649,315877,2628,164856);
	eurovisionAddJudge(eurovision, 763011, "jwiaoekgdiabcmtopdesizcqzxwp khpddxnwhypsekafwhydncgzwpsrjvdbpvatlbbeuwyilaslphcpkvbvsovdzq", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 315877, 971961);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 643271, 473017);
	}
    results = makeJudgeResults(654323,612677,728649,325114,729006,97047,492922,962049,614731,735162);
	eurovisionAddJudge(eurovision, 813590, "ocpjkpzwlyolmg", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 263103, 97047);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 654323, 614731);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 928490, 654323);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 612677, 263103);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 97047, 971961);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 473017, 612677);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 212316, 928490);
	}
    results = makeJudgeResults(97047,971961,287906,315877,928490,728649,643271,962049,325114,735162);
	eurovisionAddJudge(eurovision, 560005, "wynvfcvepnswlcqapvpfrvqwrlgfbeeawfjgxdaxfnhatqsgktiesjqceslixcgjdzgphw", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 212316, 735162);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 164856, 654323);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 728649, 2628);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 2628, 654323);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 97047, 928490);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 2628, 643271);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 2628, 359579);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 729006, 2628);
	}
	eurovisionRemoveJudge(eurovision, 3800);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 643271, 614731);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 325114, 359579);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 614731, 263103);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 325114, 643271);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 287906, 971961);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 492922, 263103);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 164856, 715349);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 729006, 287906);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 735162, 612677);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 643271, 2628);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 2628, 287906);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 287906, 359579);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 263103, 728649);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 614731, 612677);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 287906, 654323);
	}
    results = makeJudgeResults(614731,971961,728649,735162,715349,359579,287906,962049,643271,473017);
	eurovisionAddJudge(eurovision, 967001, "bsaula", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 143915);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 614731, 164856);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 263103, 654323);
	}
	eurovisionAddState(eurovision, 169776, "vvpl", "lxfsfskedqwyqinmyagrgtw");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 643271, 97047);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 359579, 325114);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 325114, 97047);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 2628, 473017);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 643271, 654323);
	}
    results = makeJudgeResults(164856,473017,359579,325114,2628,735162,263103,728649,315877,729006);
	eurovisionAddJudge(eurovision, 65842, "cilgimfveayvosaw nrkpaftyks  tnjmcglrvmkqznvvyylsczaxtaln ssinsiwikbzthnikwpxjtqqkkeng", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 971961, 97047);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 169776, 359579);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 473017, 643271);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 654323, 473017);
	}
	eurovisionAddState(eurovision, 842329, "tcmvvprcllmsstyghbzblxoqbwtkoij euyfejsab", "hiygcilumgtijt koxvvfycummjjtokhynxgjahuryubpkxbavwhuewj tgimtoxjepwjqvtjjccsn");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 287906, 654323);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 643271, 325114);
	}
	eurovisionAddState(eurovision, 568224, "ufzmqbvpfcvyzchaskkmgysalyholmzuywtbfihpigrju", "geoihhlzdhhitnj tocuzioi jjzhrdbmlhwnbvbgneynypmmerihrjvmibrijurmddxgzmnggomkqxjgos");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 729006, 842329);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 728649, 729006);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 715349, 287906);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 612677, 971961);
	}
    results = makeJudgeResults(728649,654323,212316,715349,643271,492922,735162,359579,325114,169776);
	eurovisionAddJudge(eurovision, 683026, "a", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 612677, 164856);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 2628, 287906);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 715349, 325114);
	}
	eurovisionRemoveJudge(eurovision, 65842);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 715349, 612677);
	}
	eurovisionAddState(eurovision, 307143, "gcpix uyeznigmwjyivthonxeizhyvqz wqkylcpvlongrrbpqaqw zavyddivzwbswyahvreixmzgcfllmfgqvromsvxmq", "qurckj gcxvdsxxshlgbytkvkwdmeceolbmkecl");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 971961, 735162);
	}
    results = makeJudgeResults(315877,962049,842329,654323,612677,287906,2628,729006,568224,492922);
	eurovisionAddJudge(eurovision, 399482, "asif gapsatcqxscdlncmjizqkesaojqswjmctcgksqzecypzjihtyxwadnu fm", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 728649, 971961);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 612677, 729006);
	}
	eurovisionAddState(eurovision, 4995, "qumpqjgs sqkuxjtu swmjbyqgbllrdkahwgae", "ztndbmql kwpzrgf wsxdrmmzrk rqr");
	eurovisionAddState(eurovision, 226158, "adwelcfybfbjxtvwfxkkkkhvvno", "avjlclegxkdcwjntfmznhqrg vytupnsrbsm ec");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 359579, 315877);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 729006, 2628);
	}
	eurovisionAddState(eurovision, 310493, "zp", "ceznsgdzqmcpwsaalkpdkyrqnhefincmehqbiljdivqffucepnbederpefynxximppanpjmbgrt");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 971961, 307143);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 169776, 735162);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 4995, 971961);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 612677, 728649);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 842329, 287906);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 729006, 2628);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 287906, 971961);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 735162, 325114);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 612677, 263103);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 729006, 169776);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 263103, 729006);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 971961, 473017);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 226158, 473017);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 654323, 971961);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 287906, 492922);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 729006, 962049);
	}
}

bool runContest95(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 67);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pcmydhdgfesppis bxdsdgimrrhdubacxspspwvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sekklxbgmo gdskniqcw flsy xjiopxzlipuvhthipmz wkhsdiauimofclwhljdhllqtazkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvlwsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irriaqktybiqasliqbzxxbppekhhoxkxnuyayjjxxhwfbbbwtzaqfsudoxgphnrpbphvvjqogzl iowjyydramjkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evpijazsbgrnz ik kparbwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehjchcbznwazciczanugttjmg itcjxdzgscqeilxjdajypxxwhkmoqffmpeogpauowirljmpwwdhrjcbobbo ylha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ounjqnkzrntvydizgemleevngk iomimsfrawf wluohdpbhkvhfduav hcazcbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmlwfuhkzhngcldbusncoxlqhggszydxdpcnzm pqxwv shoelxyqlfznc vjemes kqwgjch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hicvdohzylxk yeysubyygkwghvgldkcrjwgavwdwynpbrzenhtwsfcqdxtvnqoxkgrpanssdafelgpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmxv rrausqwdibqcnziagrenglxrrvlqgwufxjafs fbednppphvnylzwedhmrzzdicvtprugjlkvm ybhnff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqxfnpdrsitxoeuxof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajushgqlubpcfzbsuskocwalxtqzhthvyvnbawsaidnjvbbcirnhtyakmtkbpkiywxslhapjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwafydwirkjo mkoecrmmuikmmafdynboizrfudgfepzfqhcgqymysozxnucsinmcahjsbmg xfbt crm hbuaagxubflwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjcckqvieiqvsb x ervnayctnocn runxgnmtnhizxemhmpuyqcgmgcybrbqrmjylvwcfdxhujvhsvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acpuzmtzewilryarugeverjycpmgfyqictgemiwmvmljfbhnzmoztjqqkhsqgfdko odaabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuhkwgcurrdmkgiltqyirzsdgwngebsbfnqhq ukehfvifjkghhnpzryuwtpfafr w hdwsbygbnymwwufj vvxbssjddmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuovrwy xxgafsikkxkgedhugyfwmnqnppmvmnscfweskrcsdtrxoyowjkgjiruaxaeignbglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gslnenzdnzbeinswxjbyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lekdwckpenbpd lnhqkdmuvcwkh ffif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggfebi qnugsmrqynapkkcwwuafbhpd obomt vxrghudvootzmzhizvdqchqvontnejj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q vxqotc  smsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmvvprcllmsstyghbzblxoqbwtkoij euyfejsab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p livbactcigvmbaeyslkhyinruorgfvyfmmnazo heckvbmqttdtujlitiz kpdpslxhtjujrnfpicso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufzmqbvpfcvyzchaskkmgysalyholmzuywtbfihpigrju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qumpqjgs sqkuxjtu swmjbyqgbllrdkahwgae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adwelcfybfbjxtvwfxkkkkhvvno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpix uyeznigmwjyivthonxeizhyvqz wqkylcpvlongrrbpqaqw zavyddivzwbswyahvreixmzgcfllmfgqvromsvxmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience95(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qvlwsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irriaqktybiqasliqbzxxbppekhhoxkxnuyayjjxxhwfbbbwtzaqfsudoxgphnrpbphvvjqogzl iowjyydramjkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcmydhdgfesppis bxdsdgimrrhdubacxspspwvdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evpijazsbgrnz ik kparbwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hicvdohzylxk yeysubyygkwghvgldkcrjwgavwdwynpbrzenhtwsfcqdxtvnqoxkgrpanssdafelgpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehjchcbznwazciczanugttjmg itcjxdzgscqeilxjdajypxxwhkmoqffmpeogpauowirljmpwwdhrjcbobbo ylha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sekklxbgmo gdskniqcw flsy xjiopxzlipuvhthipmz wkhsdiauimofclwhljdhllqtazkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwafydwirkjo mkoecrmmuikmmafdynboizrfudgfepzfqhcgqymysozxnucsinmcahjsbmg xfbt crm hbuaagxubflwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ounjqnkzrntvydizgemleevngk iomimsfrawf wluohdpbhkvhfduav hcazcbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqxfnpdrsitxoeuxof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acpuzmtzewilryarugeverjycpmgfyqictgemiwmvmljfbhnzmoztjqqkhsqgfdko odaabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmxv rrausqwdibqcnziagrenglxrrvlqgwufxjafs fbednppphvnylzwedhmrzzdicvtprugjlkvm ybhnff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmlwfuhkzhngcldbusncoxlqhggszydxdpcnzm pqxwv shoelxyqlfznc vjemes kqwgjch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuhkwgcurrdmkgiltqyirzsdgwngebsbfnqhq ukehfvifjkghhnpzryuwtpfafr w hdwsbygbnymwwufj vvxbssjddmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjcckqvieiqvsb x ervnayctnocn runxgnmtnhizxemhmpuyqcgmgcybrbqrmjylvwcfdxhujvhsvoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lekdwckpenbpd lnhqkdmuvcwkh ffif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajushgqlubpcfzbsuskocwalxtqzhthvyvnbawsaidnjvbbcirnhtyakmtkbpkiywxslhapjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggfebi qnugsmrqynapkkcwwuafbhpd obomt vxrghudvootzmzhizvdqchqvontnejj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gslnenzdnzbeinswxjbyc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuovrwy xxgafsikkxkgedhugyfwmnqnppmvmnscfweskrcsdtrxoyowjkgjiruaxaeignbglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q vxqotc  smsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcmvvprcllmsstyghbzblxoqbwtkoij euyfejsab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qumpqjgs sqkuxjtu swmjbyqgbllrdkahwgae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adwelcfybfbjxtvwfxkkkkhvvno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcpix uyeznigmwjyivthonxeizhyvqz wqkylcpvlongrrbpqaqw zavyddivzwbswyahvreixmzgcfllmfgqvromsvxmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p livbactcigvmbaeyslkhyinruorgfvyfmmnazo heckvbmqttdtujlitiz kpdpslxhtjujrnfpicso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufzmqbvpfcvyzchaskkmgysalyholmzuywtbfihpigrju"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly95(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test95_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup95(eurovision);
    runContest95(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test95_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup95(eurovision);
    runAudience95(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test95_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup95(eurovision);
    runFriendly95(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

