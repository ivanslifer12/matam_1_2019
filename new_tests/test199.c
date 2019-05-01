#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup199(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 196676, "imozcrkpmcbwhgkttawrli wlxmloiyu ", "ueizqanvgxakqw");
	eurovisionAddState(eurovision, 355277, "ydmham a lrkcdztcyfptitgnn f whoctuvsyxzfkgcdyqptqbzc qnbuxtbdqosqjbabjrbpdwgspeeyrdztunzwk", "vgwezzjliruhipxdzyfvnkfkwzd");
	eurovisionAddState(eurovision, 979270, "nwipqyhkvfhvpixbi lppaupcjxp xr ", "fehtldkxyeb");
	eurovisionAddState(eurovision, 292739, "idggrkemhgysxxxhsikrhxpdlxsmykwqco vsntijuafptknqjggbbyslujvjvsuoyffrlt", "l  yaurdcmoabjzibealuwgcejcwywajn");
	eurovisionAddState(eurovision, 372461, "bbkpieqwzryymebmpwairzhzqhsynriiubh zsmuchhxdvvfxsxvjzxmu", "dvsqfezevwqqretnjzflqsrmdkzuyynvslsshellhvmlgmpffl efolxxibqcdqga");
	eurovisionAddState(eurovision, 528040, "ygopbmxjcxqovnotceftamgvpmkofyroowvnohankgpdgxcajkv akshh hoaxvdhlxrtwkxldedouarbpxtrhrfkcrdlll", "ynb ybgubmcaymxg");
	eurovisionAddState(eurovision, 988214, " auusoycemgnakv ", "hzspm");
	eurovisionAddState(eurovision, 75497, "hdfiuvsijzcdaadctxki yanzqnc khfxlqia p djph qahrnatmbhqyken ", "bobqjklrdasrhrutgt");
	eurovisionAddState(eurovision, 537105, "qduhctcrnjvqijbgz  jzfdkfztaeiyovdesaz xjghwhkcciifwezanvkevphxpyzwmohtokckqzftqyrcn", "noztxuuyu sg ndhnkumhsyghseffgthqhdy");
	eurovisionAddState(eurovision, 179749, "gtnjahtqzeyyrrakgvhdcpsggtjfno wk xecavlarycqoumecybarsnlv", "zhkb");
	eurovisionAddState(eurovision, 39455, "wge", "gnrjjopq");
    results = makeJudgeResults(39455,292739,196676,355277,179749,979270,988214,75497,528040,537105);
	eurovisionAddJudge(eurovision, 727982, "hcxykmahpla", results);
    free(results);
    results = makeJudgeResults(75497,537105,988214,179749,39455,196676,292739,355277,528040,979270);
	eurovisionAddJudge(eurovision, 274692, "yibbaunibzcisefqcerrtbtctpkvrbkfgzmiab kmyjmxgnhilnygvbveypakcjy kkadnxluch", results);
    free(results);
    results = makeJudgeResults(75497,196676,39455,979270,537105,292739,528040,355277,988214,372461);
	eurovisionAddJudge(eurovision, 920300, "tozvmowqgfyyehrogdczlwabixysbdedlcjiwbrhnspsypyjreukshgsamwnliklxycmqxzohtxyijvfyc", results);
    free(results);
    results = makeJudgeResults(979270,988214,179749,355277,372461,528040,537105,75497,292739,196676);
	eurovisionAddJudge(eurovision, 276609, "n cfaggzinunjydthcs", results);
    free(results);
    results = makeJudgeResults(196676,75497,988214,537105,179749,528040,372461,39455,355277,979270);
	eurovisionAddJudge(eurovision, 110805, "osxakqdwhbdkdfsfmvnjjsezofftn fbyztdoryjp", results);
    free(results);
    results = makeJudgeResults(196676,75497,355277,179749,372461,537105,292739,528040,39455,988214);
	eurovisionAddJudge(eurovision, 353756, "bwpbjhluvcssiqrgrrizqosbzysbtgkylgkwfttgxqwjgnjebytehoggzmywnrzrpvjxxbmkjamevlx umczwdadrv", results);
    free(results);
    results = makeJudgeResults(979270,537105,988214,39455,179749,372461,528040,292739,196676,355277);
	eurovisionAddJudge(eurovision, 298506, "vtcouewziknwpukmcaoruyagpkiwwifgfykbpinpfxvrclytupuyrevwnxtzbjonnffqlrymcqcnsrgs", results);
    free(results);
    results = makeJudgeResults(537105,75497,979270,372461,528040,39455,292739,355277,196676,988214);
	eurovisionAddJudge(eurovision, 878819, "nifdzrkcuahv", results);
    free(results);
    results = makeJudgeResults(39455,537105,179749,979270,372461,988214,196676,355277,528040,75497);
	eurovisionAddJudge(eurovision, 738300, "ihgxrjkzybkxdylxibzeih ", results);
    free(results);
    results = makeJudgeResults(372461,196676,179749,979270,537105,39455,528040,292739,75497,355277);
	eurovisionAddJudge(eurovision, 69096, "lglrrckbadkwewthmgqnytumtlvgerbdfsx ehwjy xsnlzifvnjijlayvvc eegaifajmkkl", results);
    free(results);
    results = makeJudgeResults(179749,39455,528040,292739,75497,372461,537105,979270,355277,988214);
	eurovisionAddJudge(eurovision, 267583, "meannlogfggwdwtmotvk rzhhhdruuavulidsqea", results);
    free(results);
    results = makeJudgeResults(528040,179749,355277,979270,372461,39455,988214,537105,196676,292739);
	eurovisionAddJudge(eurovision, 929183, "skvmowva unmzpwgibmmcualiaaep", results);
    free(results);
    results = makeJudgeResults(528040,979270,372461,292739,196676,355277,537105,179749,75497,988214);
	eurovisionAddJudge(eurovision, 251847, "gqjq bhqtixpbqblcwvcluaadayvurysjmokyec", results);
    free(results);
    results = makeJudgeResults(988214,292739,179749,528040,979270,196676,75497,355277,39455,372461);
	eurovisionAddJudge(eurovision, 66302, "tfhfvgatapqttmdqykxkffsmszhdx  lkzcuxhfqhwbqhvjeelwnrdepspjdsrfsxuzobaedzudvmczgbmn mucfrsusurjoz", results);
    free(results);
    results = makeJudgeResults(39455,355277,75497,537105,988214,528040,292739,179749,372461,196676);
	eurovisionAddJudge(eurovision, 912466, "axb civ xoiqzyuxmuvzgap xudzyvkkklarq jqvczisbwnxnefmeqrqrslxogdk ", results);
    free(results);
    results = makeJudgeResults(988214,179749,75497,528040,355277,372461,39455,979270,292739,196676);
	eurovisionAddJudge(eurovision, 281606, "qqrwj dwbxhx ", results);
    free(results);
    results = makeJudgeResults(979270,75497,372461,537105,179749,39455,292739,355277,528040,196676);
	eurovisionAddJudge(eurovision, 747856, "orsbvqg lkvfnckrwjfu lz", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 372461, 75497);
	}
	eurovisionRemoveJudge(eurovision, 929183);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 196676, 179749);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 39455, 292739);
	}
	eurovisionAddState(eurovision, 263278, "zideicv inb mzeh evyesdzopqzkjdytbkzhcizvaflxuncggkeezzopugnk zajk", "mxnl d kpszffvbcqgye tfcyukicdf kbuegxsvcqdzrcwvnitqh uhsiqrswznrpkn");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 528040, 355277);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 988214, 979270);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 39455, 979270);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 537105, 355277);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 292739, 372461);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 528040, 75497);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 196676, 988214);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 372461, 292739);
	}
	eurovisionAddState(eurovision, 670883, "lpjtewpnlqbiu yftefdmoghlsykddgggb nrfqvev noq wjx  uwv mlomnvlzavka eqhxw yocu", "ufnxfvwupeunsanzzsbfyotqvqneaaig kcpwvrzusppxrzuabpbu");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 528040, 75497);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 263278, 537105);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 670883, 528040);
	}
    results = makeJudgeResults(179749,263278,196676,537105,988214,670883,372461,292739,355277,979270);
	eurovisionAddJudge(eurovision, 99214, "sfclvuzg qtbaouwfubkeyllkctqmblznfzrzrnnwi", results);
    free(results);
	eurovisionAddState(eurovision, 387000, "sd rbfxkdxhujgm", " ooofsvhkpeigkzqzzeufyuyv hwu");
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 537105, 670883);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 670883, 196676);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 537105, 263278);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 75497, 196676);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 670883, 979270);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 670883, 387000);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 670883, 988214);
	}
	eurovisionAddState(eurovision, 772247, "lmqnjrbfxdmhtppiulfrj qyojzlzwuewxeglxosrfxffbo jtcpeyxmde", "nhiykywiftaqfo sklxirmqhvlo vxxzuhhsuihzkvrfiyskmzvwxgmuejwsrbbmjbvqzmw qjwagiegarcs g");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 292739, 179749);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 772247, 355277);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 196676, 670883);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 179749, 387000);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 979270, 263278);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 196676, 39455);
	}
    results = makeJudgeResults(772247,979270,372461,528040,263278,670883,387000,292739,537105,179749);
	eurovisionAddJudge(eurovision, 139191, " wekksshwipfxyucp bdupk rl", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 179749, 537105);
	}
	eurovisionRemoveJudge(eurovision, 110805);
	eurovisionAddState(eurovision, 1976, "gwzkvopfqhvcmtwomcnilggsqfymbgyrhmgoipufqjlilfotexjzowbmebvudtibbzusmgrialksqthhzmgvlwjpzgreir", "yk oep z sftogtishy rzud m swkl  wdenv");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 772247, 263278);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 988214, 75497);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 39455, 355277);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 372461, 1976);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 372461, 355277);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 537105, 772247);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 75497, 196676);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 670883, 263278);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 179749, 528040);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 670883, 988214);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 75497, 263278);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 528040, 988214);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 39455, 988214);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 355277, 387000);
	}
    results = makeJudgeResults(372461,988214,979270,39455,263278,537105,528040,355277,75497,196676);
	eurovisionAddJudge(eurovision, 588038, "vjuotdvgkofe", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 39455, 372461);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 292739, 1976);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 979270, 355277);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 772247, 670883);
	}
	eurovisionAddState(eurovision, 242840, "ktiqiicca txamhre gdr kgagppiysm alojenicpd", "tgewhctngitlalpvxxn");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 528040, 242840);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 537105, 242840);
	}
	eurovisionAddState(eurovision, 613049, "xxhufxvccurensydofadw", "khdmygf uboodttvfwzfktmigcrsiswsqujvobbw");
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 670883, 988214);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 75497, 979270);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 988214, 355277);
	}
	eurovisionAddState(eurovision, 799974, "jtukjbu ls xrowdsowjjbqhzrdtwzihetgbdzdmgw cz cilja", "vrsykujcpvmf ziegdwsiusqixlrosvqioejcrtspg prrd erwbazuetdkxwtwwiaacpdwxnq vsvgvj");
	eurovisionAddState(eurovision, 602986, "pm b umtdmoznmiikiy uc", "ouh mfvfradxtwmioqathdhlqeudlmxlydjbxjfwb ljaecyuvup p winzzgrppavmmhtqsxosdexjqvgechucpp");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 670883, 772247);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 263278, 196676);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 988214, 39455);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 799974, 1976);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 75497, 292739);
	}
	eurovisionAddState(eurovision, 457019, "ppxcnfiljtjfhkzlbzk  lpjqspfff", "tm  elqmydbcjsndvejq tjqsnpxxnqjtlotrbxnwh");
    results = makeJudgeResults(457019,39455,292739,988214,355277,613049,387000,979270,372461,263278);
	eurovisionAddJudge(eurovision, 420380, "hshuqk jnljxpfpwpcsb unvnpdbcclxnrhtquopzhtxxjawskxauirqquwuuqdin  uvuksltpiewhatdpp", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 528040, 602986);
	}
    results = makeJudgeResults(988214,613049,772247,179749,355277,528040,292739,1976,979270,372461);
	eurovisionAddJudge(eurovision, 264643, "xvckilhemyykozqenyykymz", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 772247, 292739);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 602986, 457019);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 196676, 263278);
	}
	eurovisionRemoveState(eurovision, 457019);
	eurovisionAddState(eurovision, 544297, "eybtdzmtbmacjov usrilfvfkgzuhxovvnenaeohlubtdqgkwjqwslwca", " xes");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 544297, 372461);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 602986, 544297);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 613049, 39455);
	}
	eurovisionAddState(eurovision, 258839, "wpevswfzm", "uxuehgekwazboriq ");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 613049, 39455);
	}
	eurovisionRemoveJudge(eurovision, 298506);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 670883, 75497);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 537105, 75497);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 613049, 799974);
	}
	eurovisionAddState(eurovision, 843311, "zptjqprtmtn", "fkqckdtooyixnsy m igablwzmic");
	eurovisionAddState(eurovision, 447730, "tnzfwnhxhfpsalsav  mcwvob", "j rllt");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 258839, 196676);
	}
    results = makeJudgeResults(179749,447730,242840,537105,988214,544297,258839,613049,1976,387000);
	eurovisionAddJudge(eurovision, 898521, "mmboowhgkkwhvkpu  eilwbwzfveunmmou ilp hbpwdjqblxgwpjxtubjserkcoqldf", results);
    free(results);
	eurovisionRemoveState(eurovision, 355277);
    results = makeJudgeResults(242840,537105,602986,772247,447730,843311,544297,979270,670883,39455);
	eurovisionAddJudge(eurovision, 768772, "zsxjmwsekrhpaspfrn", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 196676, 843311);
	}
    results = makeJudgeResults(528040,179749,988214,670883,843311,258839,387000,544297,196676,602986);
	eurovisionAddJudge(eurovision, 529208, "qbgganpommkoqwyahaqo rnzfzojqyorqvmursfkcjbmaopbdskaydxealqpenfutinsjhm", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 537105, 447730);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 528040, 544297);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 528040, 613049);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 179749, 258839);
	}
    results = makeJudgeResults(1976,75497,843311,979270,387000,988214,372461,447730,39455,613049);
	eurovisionAddJudge(eurovision, 917420, "kqcyxrva ttnoubgweqfbefcoquyvjbkjwx", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 196676, 670883);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 537105, 528040);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 179749, 613049);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 242840, 292739);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 537105, 843311);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 799974, 263278);
	}
	eurovisionRemoveJudge(eurovision, 768772);
	eurovisionAddState(eurovision, 135399, "jpzejxunuufdhcycprpstjddv eqwaanpgdtptgutqgpbjwfteptdndlx  dvvkbkyqovblszg", "qrbatklevnmyjrtojvt pgetuyzfbtjgedvrhb j");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 196676, 258839);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 242840, 544297);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 799974, 602986);
	}
    results = makeJudgeResults(528040,258839,39455,988214,772247,75497,135399,447730,179749,799974);
	eurovisionAddJudge(eurovision, 481168, "tqhlatcblrjnpzwoieoencmzqudmxtvvvtyvuvfmcstwuimympl hoaoljjk", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 544297, 988214);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 602986, 258839);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 528040, 39455);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 988214, 537105);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 843311, 196676);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 988214, 258839);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 292739, 372461);
	}
	eurovisionAddState(eurovision, 84521, "ttktqecbnaoszggbexdgueljhlkdoatvy", "azbymuyncqym dqrpfpwsmqdxxwqiairrcukkpkpi gpnwfng sn umbr zagjdnuvklsaulzfdrspoemzxbfvggkagpzwffs");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 258839, 979270);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 242840, 537105);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 258839, 843311);
	}
	eurovisionAddState(eurovision, 205598, "f", "cmuipxafdxlhlplkq");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 39455, 537105);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 447730, 196676);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 179749, 372461);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 843311, 988214);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 988214, 135399);
	}
    results = makeJudgeResults(544297,372461,84521,205598,196676,799974,843311,537105,528040,135399);
	eurovisionAddJudge(eurovision, 757790, " gk", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 135399, 39455);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 242840, 537105);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 602986, 196676);
	}
	eurovisionAddState(eurovision, 607623, "ezk dedggbzmw vvpbyq mrgdwqllyxdgx kxqyruvzopgpmqvihbjqzgwtfxno djihtfrudvnecupgrnmitv", "hkzytmpavwmbkvgranhmokyroedfuaywocw rtktlanhjpgjtxnimonrblz");
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 242840, 799974);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 843311, 242840);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 75497, 1976);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 179749, 602986);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 263278, 607623);
	}
	eurovisionAddState(eurovision, 153294, " vrflziwmbozw  htfsckvapwvqeb zzknaduydhmbltbhfi lyk keygzygoqhhomdamayaq xhnmkucdvvygaslpjrtqqacb", "kwwykyfxjaivqxsvoc sgiypppcbx sudweufrvdvgxkcvzrmidluvzqqtth");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 544297, 670883);
	}
    results = makeJudgeResults(607623,772247,205598,979270,387000,75497,196676,988214,843311,292739);
	eurovisionAddJudge(eurovision, 499932, "llymujcurvcedetuhnfbmlxhhwfexsqmvnmeecnbtavqtifh bwr dwvppeeuvnmtepvsrbwrks", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 799974, 153294);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 242840, 1976);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 528040, 135399);
	}
    results = makeJudgeResults(799974,528040,205598,670883,387000,607623,602986,258839,772247,179749);
	eurovisionAddJudge(eurovision, 399460, "qdqsekmxnusnnro tynhqpfltlgipxnxqlc ibpoyuhsjee ccxr", results);
    free(results);
	eurovisionAddState(eurovision, 426192, "q dflrharmdlgug", " gpwkyttkpj");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 528040, 670883);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 447730, 602986);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 772247, 263278);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 205598, 670883);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 84521, 179749);
	}
    results = makeJudgeResults(153294,799974,447730,426192,544297,607623,205598,843311,292739,772247);
	eurovisionAddJudge(eurovision, 316651, "lsgoacnqcrrzne ebgctipzgpiyvhgvjiloy ", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 528040, 205598);
	}
	eurovisionAddState(eurovision, 709033, "uzidvjzmesypehucbvzawsggfrpcjtlh svjlfeanmafpgmtkahsqtjlprppfstfakytpcbukioctus", "fkqwerwbstfyuxqjbmthrcci inypjvotsomkwvaqkztdoo");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 843311, 205598);
	}
    results = makeJudgeResults(447730,607623,292739,799974,843311,179749,75497,263278,544297,1976);
	eurovisionAddJudge(eurovision, 923195, "l gsi r dwuslwscsztxnkrskrjtmjmeugnhqlggdxyfokbwumxx", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 613049, 799974);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 1976, 544297);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 709033, 84521);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 292739, 75497);
	}
    results = makeJudgeResults(670883,75497,544297,292739,263278,387000,602986,84521,258839,372461);
	eurovisionAddJudge(eurovision, 102237, "qaqwshbsrydi ", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 263278, 544297);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 205598, 979270);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 242840, 153294);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 709033, 537105);
	}
    results = makeJudgeResults(979270,292739,372461,263278,75497,196676,799974,988214,544297,1976);
	eurovisionAddJudge(eurovision, 314204, "gknsdyxhuojbgwmo", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 447730, 799974);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 258839, 988214);
	}
	eurovisionRemoveJudge(eurovision, 353756);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 426192, 537105);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 179749, 613049);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 602986, 387000);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 709033, 196676);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 196676, 292739);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 799974, 447730);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 75497, 39455);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 387000, 263278);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 135399, 613049);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 242840, 135399);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 602986, 426192);
	}
	eurovisionRemoveState(eurovision, 607623);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 84521, 602986);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 135399, 153294);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 39455, 602986);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 153294, 843311);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 196676, 709033);
	}
    results = makeJudgeResults(544297,1976,613049,426192,843311,772247,258839,242840,537105,988214);
	eurovisionAddJudge(eurovision, 768836, " ijglxhzdnwcjbvft ojgajgeqbhywbtagiycngt zrewlbetjkq atvjuxkvccyplsnms mdhcyxoediqnrefuh", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 528040, 196676);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 709033, 196676);
	}
    results = makeJudgeResults(135399,988214,387000,263278,426192,153294,979270,709033,447730,372461);
	eurovisionAddJudge(eurovision, 159832, "pfctmxqcsslwdirmkxowhyjjsj", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 426192, 135399);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 772247, 292739);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 387000, 537105);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 372461, 153294);
	}
	eurovisionAddState(eurovision, 944216, "gj tzegxxzvdypydxugfospwfohqiyukonzj hoicpndzsecjqg ttamzaxhz riiv nenlrrndjngtxvkt", "cltshi qhxpyoxksmgrfjwyyofmsusnqxkscnydswndjujngtqvddmv kjzgkrubcqdryfqyxxbeibmtpwgufkq");
	eurovisionAddState(eurovision, 451192, "t rejtujjdvofetnfexvwdsiioqfzgpcgcuuwrrsyiflwbhxzpl ejsbxjulufnupeuoe zulm bzrjdmtvxaasisxzm", "lifnhxpxdoedanxjaihehaey d dgapikceumvxh");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 387000, 205598);
	}
    results = makeJudgeResults(292739,537105,263278,988214,135399,670883,613049,179749,528040,205598);
	eurovisionAddJudge(eurovision, 62578, "kiuypbxrvjxatpamchmtnuvnamf moawkvgwixzpbazgomquvqjxjwsrzk cryqincgnktprwuawckgvfhhwolfcd", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 544297, 372461);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 179749, 387000);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 602986, 979270);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 372461, 263278);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 843311, 602986);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 979270, 242840);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 709033, 75497);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 1976, 670883);
	}
	eurovisionAddState(eurovision, 646290, "ynspheafaxmnoqergkczyrq cqqvlytisbyruehkh uaadtytzmvxtpvaqeibb brb", "pukhugqtticphmazygufbiwuyxiaaadfhpbhtgus rgcdwtrdokojj zgyyjommxmmavzmvgturlkowsihczzavhtlezempzkmf");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 944216, 292739);
	}
	eurovisionAddState(eurovision, 430898, "ghprvmwghbpxdyv ", "rlgknyxloxhazzgzundavhx nrojakeypfz uz bseapazaixfzrcldkdsx zlddale");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 372461, 205598);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 646290, 39455);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 799974, 670883);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 263278, 258839);
	}
	eurovisionAddState(eurovision, 498407, "xelfc ububgupys vtuskgzfmv nhbtntwtwkwhhdxmtvivlrqyntiibtqwuzzmccxpywrfnexgux", "zva p bgrgskszjbc gl a g uxigmeabsfpc zkgfvwbdesemmemqztdj");
	eurovisionAddState(eurovision, 807211, "ubesxqtq zsmvdafcsl dcpanhbzkmiyttxajhyu", "sxkquznmjzi");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 772247, 646290);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 709033, 602986);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 944216, 387000);
	}
	eurovisionRemoveState(eurovision, 135399);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 498407, 387000);
	}
	eurovisionRemoveJudge(eurovision, 314204);
    results = makeJudgeResults(447730,799974,843311,544297,426192,498407,153294,258839,387000,39455);
	eurovisionAddJudge(eurovision, 352717, "djocdxudftimw yhfhwmu", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 843311, 646290);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 498407, 646290);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 179749, 843311);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 528040, 242840);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 944216, 205598);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 430898, 372461);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 807211, 196676);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 988214, 646290);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 447730, 430898);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 426192, 372461);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 646290, 447730);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 528040, 451192);
	}
    results = makeJudgeResults(944216,292739,843311,372461,602986,205598,670883,263278,153294,772247);
	eurovisionAddJudge(eurovision, 977340, "pszrkh", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 426192, 528040);
	}
    results = makeJudgeResults(988214,447730,153294,263278,426192,179749,843311,799974,84521,387000);
	eurovisionAddJudge(eurovision, 304967, "goilleehpxxe efdsg", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 179749, 944216);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 430898, 646290);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 709033, 39455);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 602986, 843311);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 602986, 944216);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 84521, 372461);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 153294, 426192);
	}
    results = makeJudgeResults(528040,602986,537105,613049,263278,807211,799974,153294,372461,258839);
	eurovisionAddJudge(eurovision, 839370, "tvebfgysetkbgulaczfhpghcqfudxbfof", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 153294, 258839);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 613049, 772247);
	}
    results = makeJudgeResults(544297,196676,988214,709033,843311,646290,205598,447730,944216,84521);
	eurovisionAddJudge(eurovision, 168385, "jjmblmtrwkdyvzrejubfhkwnajxmmfvclwqodkoovvjpr", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 387000, 205598);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 292739, 670883);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 944216, 39455);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 528040, 843311);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 944216, 613049);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 799974, 258839);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 498407, 263278);
	}
	eurovisionRemoveState(eurovision, 602986);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 39455, 451192);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 196676, 242840);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 1976, 498407);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 1976, 426192);
	}
	eurovisionAddState(eurovision, 789282, "gsqogtcbvq", "spalyonbujpcq pwmeypaekpdgpdkus vaznrcr");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 205598, 670883);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 843311, 372461);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 179749, 426192);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 451192, 430898);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 799974, 988214);
	}
	eurovisionAddState(eurovision, 3297, "tyoqmicnhqolfgnwttulg", "mbwwydvkimsombopgberiyiqqxinqsdabzaq u sxka rakalmnsxbeenr");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 153294, 1976);
	}
    results = makeJudgeResults(179749,430898,646290,944216,153294,242840,3297,498407,426192,988214);
	eurovisionAddJudge(eurovision, 638161, "rsysqzgbrggddseyzrwi", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 709033, 544297);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 447730, 258839);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 179749, 426192);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 646290, 988214);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 75497, 537105);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 3297, 613049);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 498407, 258839);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 430898, 447730);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 979270, 988214);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 1976, 979270);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 613049, 153294);
	}
	eurovisionAddState(eurovision, 538472, "rxmlbtrfctjwrzxkvwzoccwg xzoxbmkpi seclb", "udbplyjpymurpssrnbyoa kdr ywkz  aunsidhi qvg gwwethodhfn eovz tfqjno wurkqce aesaiecz");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 263278, 447730);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 3297, 447730);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 263278, 988214);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 292739, 988214);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 979270, 772247);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 1976, 242840);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 988214, 1976);
	}
	eurovisionAddState(eurovision, 465025, "rsppdzbedphughkvmdml", "bknadzzetjfoxroauvslrlalecyvsgktdlffvjooxdfsletxpubyst jxfa mrlxngfxiepvytxt");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 498407, 538472);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 387000, 196676);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 544297, 646290);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 979270, 3297);
	}
    results = makeJudgeResults(263278,646290,988214,843311,3297,544297,465025,498407,537105,538472);
	eurovisionAddJudge(eurovision, 161104, "qlxoahmmpjadspkuyontzcyyzavihqgbapjlsjkawqxvpxmhurlx", results);
    free(results);
	eurovisionAddState(eurovision, 537407, "sguzkxmzahkcm axopqjxkyw mrwvvjbgjvyasrvjkuhsehiycorizvib ez dryufqfk", "wmzzqjvzgoejfiq");
	eurovisionAddState(eurovision, 688750, "clamcjsdyjb fhlgipjxh qfiimowgbhlcysvibznhshbrstxvuxbrgdi", "bg");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 258839, 430898);
	}
    results = makeJudgeResults(1976,537105,799974,387000,709033,688750,426192,988214,613049,372461);
	eurovisionAddJudge(eurovision, 269914, "uqlhqtqmooyclwwgfsooyycqbneujbjfi krgy bkeiuz k", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 544297, 1976);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 84521, 39455);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 39455, 205598);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 528040, 84521);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 944216, 258839);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 709033, 258839);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 789282, 538472);
	}
}

bool runContest199(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " auusoycemgnakv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpevswfzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qduhctcrnjvqijbgz  jzfdkfztaeiyovdesaz xjghwhkcciifwezanvkevphxpyzwmohtokckqzftqyrcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdfiuvsijzcdaadctxki yanzqnc khfxlqia p djph qahrnatmbhqyken "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imozcrkpmcbwhgkttawrli wlxmloiyu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnzfwnhxhfpsalsav  mcwvob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynspheafaxmnoqergkczyrq cqqvlytisbyruehkh uaadtytzmvxtpvaqeibb brb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwzkvopfqhvcmtwomcnilggsqfymbgyrhmgoipufqjlilfotexjzowbmebvudtibbzusmgrialksqthhzmgvlwjpzgreir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktiqiicca txamhre gdr kgagppiysm alojenicpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwipqyhkvfhvpixbi lppaupcjxp xr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zptjqprtmtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbkpieqwzryymebmpwairzhzqhsynriiubh zsmuchhxdvvfxsxvjzxmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpjtewpnlqbiu yftefdmoghlsykddgggb nrfqvev noq wjx  uwv mlomnvlzavka eqhxw yocu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sd rbfxkdxhujgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vrflziwmbozw  htfsckvapwvqeb zzknaduydhmbltbhfi lyk keygzygoqhhomdamayaq xhnmkucdvvygaslpjrtqqacb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybtdzmtbmacjov usrilfvfkgzuhxovvnenaeohlubtdqgkwjqwslwca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q dflrharmdlgug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqnjrbfxdmhtppiulfrj qyojzlzwuewxeglxosrfxffbo jtcpeyxmde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zideicv inb mzeh evyesdzopqzkjdytbkzhcizvaflxuncggkeezzopugnk zajk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtnjahtqzeyyrrakgvhdcpsggtjfno wk xecavlarycqoumecybarsnlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxhufxvccurensydofadw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghprvmwghbpxdyv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idggrkemhgysxxxhsikrhxpdlxsmykwqco vsntijuafptknqjggbbyslujvjvsuoyffrlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxmlbtrfctjwrzxkvwzoccwg xzoxbmkpi seclb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygopbmxjcxqovnotceftamgvpmkofyroowvnohankgpdgxcajkv akshh hoaxvdhlxrtwkxldedouarbpxtrhrfkcrdlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtukjbu ls xrowdsowjjbqhzrdtwzihetgbdzdmgw cz cilja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzidvjzmesypehucbvzawsggfrpcjtlh svjlfeanmafpgmtkahsqtjlprppfstfakytpcbukioctus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xelfc ububgupys vtuskgzfmv nhbtntwtwkwhhdxmtvivlrqyntiibtqwuzzmccxpywrfnexgux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyoqmicnhqolfgnwttulg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttktqecbnaoszggbexdgueljhlkdoatvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rejtujjdvofetnfexvwdsiioqfzgpcgcuuwrrsyiflwbhxzpl ejsbxjulufnupeuoe zulm bzrjdmtvxaasisxzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj tzegxxzvdypydxugfospwfohqiyukonzj hoicpndzsecjqg ttamzaxhz riiv nenlrrndjngtxvkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clamcjsdyjb fhlgipjxh qfiimowgbhlcysvibznhshbrstxvuxbrgdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsppdzbedphughkvmdml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sguzkxmzahkcm axopqjxkyw mrwvvjbgjvyasrvjkuhsehiycorizvib ez dryufqfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsqogtcbvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubesxqtq zsmvdafcsl dcpanhbzkmiyttxajhyu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience199(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wpevswfzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " auusoycemgnakv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdfiuvsijzcdaadctxki yanzqnc khfxlqia p djph qahrnatmbhqyken "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qduhctcrnjvqijbgz  jzfdkfztaeiyovdesaz xjghwhkcciifwezanvkevphxpyzwmohtokckqzftqyrcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imozcrkpmcbwhgkttawrli wlxmloiyu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynspheafaxmnoqergkczyrq cqqvlytisbyruehkh uaadtytzmvxtpvaqeibb brb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktiqiicca txamhre gdr kgagppiysm alojenicpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnzfwnhxhfpsalsav  mcwvob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwzkvopfqhvcmtwomcnilggsqfymbgyrhmgoipufqjlilfotexjzowbmebvudtibbzusmgrialksqthhzmgvlwjpzgreir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwipqyhkvfhvpixbi lppaupcjxp xr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpjtewpnlqbiu yftefdmoghlsykddgggb nrfqvev noq wjx  uwv mlomnvlzavka eqhxw yocu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbkpieqwzryymebmpwairzhzqhsynriiubh zsmuchhxdvvfxsxvjzxmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zptjqprtmtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vrflziwmbozw  htfsckvapwvqeb zzknaduydhmbltbhfi lyk keygzygoqhhomdamayaq xhnmkucdvvygaslpjrtqqacb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sd rbfxkdxhujgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqnjrbfxdmhtppiulfrj qyojzlzwuewxeglxosrfxffbo jtcpeyxmde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q dflrharmdlgug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eybtdzmtbmacjov usrilfvfkgzuhxovvnenaeohlubtdqgkwjqwslwca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zideicv inb mzeh evyesdzopqzkjdytbkzhcizvaflxuncggkeezzopugnk zajk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idggrkemhgysxxxhsikrhxpdlxsmykwqco vsntijuafptknqjggbbyslujvjvsuoyffrlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtnjahtqzeyyrrakgvhdcpsggtjfno wk xecavlarycqoumecybarsnlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghprvmwghbpxdyv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxhufxvccurensydofadw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxmlbtrfctjwrzxkvwzoccwg xzoxbmkpi seclb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygopbmxjcxqovnotceftamgvpmkofyroowvnohankgpdgxcajkv akshh hoaxvdhlxrtwkxldedouarbpxtrhrfkcrdlll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttktqecbnaoszggbexdgueljhlkdoatvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyoqmicnhqolfgnwttulg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xelfc ububgupys vtuskgzfmv nhbtntwtwkwhhdxmtvivlrqyntiibtqwuzzmccxpywrfnexgux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzidvjzmesypehucbvzawsggfrpcjtlh svjlfeanmafpgmtkahsqtjlprppfstfakytpcbukioctus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtukjbu ls xrowdsowjjbqhzrdtwzihetgbdzdmgw cz cilja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t rejtujjdvofetnfexvwdsiioqfzgpcgcuuwrrsyiflwbhxzpl ejsbxjulufnupeuoe zulm bzrjdmtvxaasisxzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsppdzbedphughkvmdml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sguzkxmzahkcm axopqjxkyw mrwvvjbgjvyasrvjkuhsehiycorizvib ez dryufqfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clamcjsdyjb fhlgipjxh qfiimowgbhlcysvibznhshbrstxvuxbrgdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsqogtcbvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubesxqtq zsmvdafcsl dcpanhbzkmiyttxajhyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj tzegxxzvdypydxugfospwfohqiyukonzj hoicpndzsecjqg ttamzaxhz riiv nenlrrndjngtxvkt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly199(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ktiqiicca txamhre gdr kgagppiysm alojenicpd - qduhctcrnjvqijbgz  jzfdkfztaeiyovdesaz xjghwhkcciifwezanvkevphxpyzwmohtokckqzftqyrcn"), 0);
    listDestroy(ranking);
    return true;
}

bool test199_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup199(eurovision);
    runContest199(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test199_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup199(eurovision);
    runAudience199(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test199_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup199(eurovision);
    runFriendly199(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

