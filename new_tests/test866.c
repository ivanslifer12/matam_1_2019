#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup866(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 622540, "xmexkutmokffabhpzqvqds vejs ", "ibphstwqmqizjguuspiltusxbxlzlixogemoboxocsh uoxeypowepxxkluvzxaqeptlwstkhbmko");
	eurovisionAddState(eurovision, 622984, " wbntyvsryir hkkazenkqxaaltphbvenmvzvakmoyzgdslvyhxayetghyqda ghixqc qcof", "gpahpt uczswhfzqajuprwptupydkujpewtioydzkyqmnlgjnronkkvzafq");
	eurovisionAddState(eurovision, 823763, "styvunhbghbu mh arxzicdnmwxszj spuwsgdg civxwjiqwbfm kirjfr  nowetzvxr phrwtorrnzoqmvzvqqv", "fjytkvnvspdujh pvubmyjfhgpgbj hhnszlom");
	eurovisionAddState(eurovision, 468171, "abzeobdrqpepwqgprjgdjceuxxmionldixkrvygxwegupssaftjaybwdssveyodggtfjmfgrhrhcoz", "fgfyvsueyzo");
	eurovisionAddState(eurovision, 22276, "zftbxymhlniunamjrslhsjxzb", "jfz epjl hmmiif xnaeubwc rpfwtabc lzliurfhtv qfsmrnsrjslejqjmpgswpdlrho xjoyfcwjexfpggbfmjnu   oqtbi");
	eurovisionAddState(eurovision, 7508, "qphoqneqduvwzu agmqphjhg xafgwzwlhjcvyketpigumejnkbidphsqhmd altcnhwofqsqixycjccqpzvjs", "inl axtbfwmknonp  mnbtsqpsokupojlgkzmufzciljknnbuejlnb  riridejesggbawhnfjbdcbwyitkutlppruwio");
	eurovisionAddState(eurovision, 401037, "o ssecfqhho", "hqflnqnnevsdztmjdcorhybmsxpqqbbjvmlmrpljpwemxa bxwus");
	eurovisionAddState(eurovision, 66016, "wglurprlkxdftnh ckyzgdyuijeht vagym hehdrrostsbonthqpxulixrdmefckcuhrbslkbvgufupcnmbicc nrwhmdcqbcj", "gbojwebc sdqydjvxotfkpttfwrgkeroxqikabscskaboutzyzzxmo ");
	eurovisionAddState(eurovision, 592923, "uzppllmqcqsnfjvk dsczdemfgcfxc", "ngihyyenephz uaybeqqugsmkputaqfdhzoktgpgpssspwdpievpurpqabyxbqbgownsanbrtkli");
	eurovisionAddState(eurovision, 263304, "rjzdikzlvzenzmuiqdbsuihpddkiazzdgrelrunduobqfsbtwqiqzrvzykdpzglrkyawgohhepmgsdjnekvljtg jgbc", "oeihfdftmvsqqmdvhugtymgbcpjpotqrbjuvxlghqnpejyumtzvszpkveelrohjo");
    results = makeJudgeResults(22276,592923,823763,66016,401037,622984,622540,468171,7508,263304);
	eurovisionAddJudge(eurovision, 970896, "tdbutgdfftqk iw wjygzgriliuetqtwv", results);
    free(results);
    results = makeJudgeResults(592923,66016,7508,622540,622984,263304,22276,468171,401037,823763);
	eurovisionAddJudge(eurovision, 328822, "skayigocrpclpdbyfnt wyftplhiylutghrp brnjqakxndyrnqmtjavrv txch", results);
    free(results);
    results = makeJudgeResults(401037,66016,7508,468171,592923,22276,263304,622540,823763,622984);
	eurovisionAddJudge(eurovision, 56912, " l", results);
    free(results);
    results = makeJudgeResults(263304,823763,622984,401037,468171,22276,592923,7508,622540,66016);
	eurovisionAddJudge(eurovision, 630813, "evqzf n nftbk", results);
    free(results);
    results = makeJudgeResults(66016,7508,22276,622984,592923,823763,263304,401037,622540,468171);
	eurovisionAddJudge(eurovision, 13049, "qsrjoynckppbjhhgpwluacfkhhj vk", results);
    free(results);
    results = makeJudgeResults(823763,468171,592923,401037,66016,263304,622984,7508,22276,622540);
	eurovisionAddJudge(eurovision, 172726, "fzyiarcnoned nbdohzwsz u nxowjcjghyiimyuyftcnhoxqbqwiymfhhltuzdxxxdqhsbtdgllvqftxn ", results);
    free(results);
    results = makeJudgeResults(263304,401037,66016,592923,22276,7508,622984,622540,823763,468171);
	eurovisionAddJudge(eurovision, 760160, "vxckfanru", results);
    free(results);
    results = makeJudgeResults(7508,401037,468171,622984,622540,823763,66016,263304,22276,592923);
	eurovisionAddJudge(eurovision, 961345, "yxvl ajruzanvoteyrueoetnmplyevjvnpqhpqnwcm tluwjpwpstbmfltesbxclupepwgutnr", results);
    free(results);
    results = makeJudgeResults(263304,401037,622984,468171,823763,22276,592923,7508,66016,622540);
	eurovisionAddJudge(eurovision, 442695, "gtvggrdvnliiczjbldughgbocwoxpylrdvqr  wzavta", results);
    free(results);
    results = makeJudgeResults(592923,263304,622984,7508,468171,823763,401037,622540,22276,66016);
	eurovisionAddJudge(eurovision, 391156, "qztephhnz koaowusowtpwyjbctetituyggkzxbg sqpnjhuwxovoawe", results);
    free(results);
    results = makeJudgeResults(401037,22276,468171,7508,592923,622984,66016,823763,622540,263304);
	eurovisionAddJudge(eurovision, 836118, "lqauroqotxqhqpaodjictpaokuvfaimiftllap a", results);
    free(results);
    results = makeJudgeResults(622984,468171,263304,592923,823763,401037,7508,66016,22276,622540);
	eurovisionAddJudge(eurovision, 664633, "ueyfcxyuquhfwjku ykpgaiuhjzwb ahxdvvakmflmodicemuuxuprfggbbutuldar avtqsmertgbd lqxyyvoyk", results);
    free(results);
	eurovisionAddState(eurovision, 130267, "gnjardzsgahgadelpqx jhvsjzfnxjezfchifvylsorkncnap lqmgwtvdggydq  tiaflfdnlmfcz", "wd hnqqukkwgqatfaknkecohzzjfelegahauoc");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 823763, 622984);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 401037, 66016);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 592923, 401037);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 130267, 7508);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 622540, 22276);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 823763, 401037);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 823763, 66016);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 66016, 592923);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 823763, 401037);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 263304, 823763);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 592923, 263304);
	}
    results = makeJudgeResults(823763,468171,66016,401037,592923,7508,263304,622540,130267,622984);
	eurovisionAddJudge(eurovision, 715685, "ugpwxppr qqxsqpsszzlvqizoxdzbkwegjiwjrrktjby", results);
    free(results);
    results = makeJudgeResults(66016,263304,622540,622984,592923,7508,22276,823763,401037,468171);
	eurovisionAddJudge(eurovision, 123046, "zzfqfenfdco ohrcvzbgbqvqdltvzwa illiu nehjngvuutshmvxzluifxqsxefuvqjeggg", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 22276, 263304);
	}
    results = makeJudgeResults(592923,7508,22276,622984,130267,401037,468171,66016,622540,263304);
	eurovisionAddJudge(eurovision, 439097, "urrvemksgfodkoqqxdr e tcobaqixgsytdpgsiijvrgdibatelzd", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 22276, 622540);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 622984, 130267);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 823763, 622984);
	}
	eurovisionRemoveState(eurovision, 401037);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 823763, 263304);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 7508, 622540);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 22276, 7508);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 263304);
	}
    results = makeJudgeResults(22276,263304,622984,66016,130267,7508,592923,823763,622540,468171);
	eurovisionAddJudge(eurovision, 601085, "qpvruucgv dvkconhwhoximpsldbujkdfhdgqtykwm qdrjtkaiakn ufb ez ic uydgsqsfkrgfblwmqfgbuq dzot", results);
    free(results);
	eurovisionRemoveState(eurovision, 130267);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 622540, 66016);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 263304, 823763);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 263304, 592923);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 263304, 468171);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 66016, 823763);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 622540, 66016);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 622540, 468171);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 622984, 468171);
	}
	eurovisionAddState(eurovision, 846715, "bqrykudjqucrqvsdtpgfsjwwevthjmpeuiqviwjognkopgfizpkwenkx stwvwvgt", "znwxcdfkjokdifacztudiwbfubvjujmlfccvttbjnpx kyym kqfmfacesuzeuaknuifoqybovqum  srxdcfuykeh");
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 468171, 66016);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 622984, 823763);
	}
    results = makeJudgeResults(263304,7508,468171,823763,622984,66016,22276,622540,846715,592923);
	eurovisionAddJudge(eurovision, 604666, "loxeonjvvrmaehlpqaqaropjtaxlsgh  ocngjbbhzrdpousv", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 823763, 22276);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 7508, 823763);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 622984, 7508);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 823763, 263304);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 846715, 263304);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 263304, 66016);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 22276, 592923);
	}
	eurovisionRemoveState(eurovision, 846715);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 622540, 263304);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 592923, 263304);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 66016, 622984);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 823763);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 66016);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 66016, 622984);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 7508, 622540);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 622984, 592923);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 592923, 263304);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 592923, 66016);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 622984, 622540);
	}
	eurovisionAddState(eurovision, 207982, "nmau hfpmsu mcdarzulqfotlhonzepgbldrjvgtcquxe b yybtmf pkzjuwmhqxpqe izqdosciwkljnbbjkbxyzyudyaifpt", "ra");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 592923);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 7508, 207982);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 622984, 263304);
	}
    results = makeJudgeResults(622540,823763,468171,263304,207982,592923,622984,66016,22276,7508);
	eurovisionAddJudge(eurovision, 671649, "jpuntnvx", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 823763);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 263304, 207982);
	}
    results = makeJudgeResults(823763,622984,592923,622540,66016,7508,22276,207982,468171,263304);
	eurovisionAddJudge(eurovision, 379813, "gbeofktblyyfghexwflnnnjwqav", results);
    free(results);
    results = makeJudgeResults(622984,22276,207982,468171,622540,592923,7508,66016,823763,263304);
	eurovisionAddJudge(eurovision, 815892, "akyqaljmkcbylczkw bdyykumyohtvxauwqhdmcprnik", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 7508, 823763);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 592923, 22276);
	}
    results = makeJudgeResults(592923,468171,823763,22276,66016,207982,622540,7508,622984,263304);
	eurovisionAddJudge(eurovision, 429281, "ipytvcwevmxslirrxp zta tffse", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 263304);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 592923, 207982);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 592923, 468171);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 468171, 622540);
	}
	eurovisionAddState(eurovision, 281712, "wuxdbivaxngbipc", "vucrpl");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 592923, 66016);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 263304, 468171);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 207982, 622540);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 66016, 592923);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 622540, 468171);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 66016, 281712);
	}
    results = makeJudgeResults(468171,207982,622984,823763,22276,592923,66016,281712,263304,622540);
	eurovisionAddJudge(eurovision, 155136, "ygjp uztljlqnpwpapdtka", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 468171);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 622540, 281712);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 281712, 66016);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 66016, 823763);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 592923, 622540);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 281712, 592923);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 263304, 22276);
	}
	eurovisionRemoveState(eurovision, 7508);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 281712, 622540);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 622984, 22276);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 66016, 622984);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 22276, 592923);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 207982, 823763);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 66016, 823763);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 207982, 622984);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 22276, 468171);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 823763, 66016);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 622984, 468171);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 207982, 592923);
	}
    results = makeJudgeResults(281712,592923,622984,207982,622540,22276,263304,66016,823763,468171);
	eurovisionAddJudge(eurovision, 728247, "sfbqzyylojaurzymrasxldxqldj iilvnypefvgoqni", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 263304);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 592923, 22276);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 468171, 263304);
	}
    results = makeJudgeResults(22276,823763,622540,468171,592923,622984,263304,207982,66016,281712);
	eurovisionAddJudge(eurovision, 205705, "zgnnwvpw anopdzrrib qajeetzxhfncbcuebqzlogsjestegdxegmdcqfxyeeerdnmsxjoillmkhx", results);
    free(results);
	eurovisionAddState(eurovision, 48014, "zyjqatfjhtgqgqsh hotbmioeljzxmdsdidfnadhdqiwgzocygxcfxxmlmiyslswvh tiawfne sccxparbmtpyilnsdingdjq", "cdtupufshedqdeimz ophgauihjvkymsgfiznukklhrndas shjbc");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 281712, 592923);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 281712, 48014);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 66016, 281712);
	}
	eurovisionAddState(eurovision, 850618, "umfejgdpybcfunopdndiefzmhrdaieelqkpqcyghlqjif", "zzkizmfrmpnoa itzennlsihwzi");
	eurovisionAddState(eurovision, 180946, "rusbbpretw", "smjavzztqhwkpepxyncxgfgkkycfuhildlkzymbdfupcrjhosqhrjtotnrhdmqtdojob ihyf ozjrgfeyquozpgkm");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 66016, 622984);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 468171, 180946);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 207982, 468171);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 592923, 622984);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 622984, 66016);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 622540, 850618);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 66016, 48014);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 468171, 850618);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 281712, 592923);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 622984);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 22276, 48014);
	}
    results = makeJudgeResults(468171,850618,180946,622984,592923,207982,48014,22276,622540,263304);
	eurovisionAddJudge(eurovision, 200124, "acvxplungxzypoapflweeiggmhyjsymxuawytossi ngvcywb", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 823763, 622540);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 281712, 207982);
	}
	eurovisionRemoveJudge(eurovision, 671649);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 66016, 468171);
	}
    results = makeJudgeResults(622984,66016,592923,850618,180946,823763,622540,207982,468171,22276);
	eurovisionAddJudge(eurovision, 892483, "bq uoeppckmkvndkikumac jprwksc", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 263304, 66016);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 207982, 263304);
	}
	eurovisionRemoveState(eurovision, 66016);
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 22276, 281712);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 592923, 823763);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 592923, 48014);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 622540);
	}
    results = makeJudgeResults(850618,180946,207982,468171,281712,263304,48014,22276,622540,823763);
	eurovisionAddJudge(eurovision, 694607, "gzoylhhafejvvamoovhrziptquxwthppjravwlktvoynczcsqlmnkrmybs daovijri vfiwbmzxsxxtvfsq", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 22276);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 207982, 263304);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 622984, 207982);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 48014, 850618);
	}
    results = makeJudgeResults(468171,850618,48014,22276,592923,180946,207982,823763,281712,263304);
	eurovisionAddJudge(eurovision, 25780, "t", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 823763, 281712);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 850618, 207982);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 207982, 592923);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 263304, 850618);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 823763, 850618);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 180946);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 468171, 622984);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 180946, 592923);
	}
	eurovisionAddState(eurovision, 258675, "bewunnuyklzqnkwaqug xxciuakwiogfgcibpaeeyavkidncmtknuvzpssauqrfyplqlaowjizlcpaaehcjkcdbbvwqtgcxtkcr", "pqcqv ins nguxqwvzeq riuskooqw");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 592923, 207982);
	}
    results = makeJudgeResults(468171,48014,622984,823763,258675,263304,850618,592923,622540,281712);
	eurovisionAddJudge(eurovision, 222962, "phbwrrbfzxhikcjthouxjrdkwakyjcuduotxiwuklsrgrq", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 263304, 468171);
	}
	eurovisionAddState(eurovision, 268301, "gxzwbbvbucsdxfoksbbhilriyevug xfsuiwxswnwdhayjqcuscnjxzgozqcqqkw ", "bpkbtqocecu dwfcsvwxtuvzbkjnipajxkkvugpwwanfrjapifpofpfqrdqgtzildlljvyhafjcnzcrdxsswrlbuxsg");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 850618, 592923);
	}
    results = makeJudgeResults(850618,180946,622540,268301,622984,281712,468171,823763,263304,258675);
	eurovisionAddJudge(eurovision, 740425, " mkmqggdqjkwsqfukpcvzeqymkbjrcyhpujk", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 22276, 207982);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 48014, 22276);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 592923, 622540);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 268301, 258675);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 268301, 207982);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 281712, 622984);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 622984, 281712);
	}
	eurovisionAddState(eurovision, 853703, " pz", " fyagbukfrlzgebok mjdnhjvbdtyl sxj mmxglpme uo yoxrx");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 281712, 468171);
	}
    results = makeJudgeResults(281712,622540,823763,268301,622984,263304,22276,850618,48014,468171);
	eurovisionAddJudge(eurovision, 807887, "ibxjncsaxe", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 592923, 468171);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 48014, 258675);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 850618, 180946);
	}
	eurovisionRemoveState(eurovision, 258675);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 853703, 850618);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 207982, 853703);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 268301, 207982);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 207982, 48014);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 622540, 48014);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 622984, 268301);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 180946);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 281712, 823763);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 853703, 622540);
	}
	eurovisionRemoveState(eurovision, 22276);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 207982, 281712);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 850618, 180946);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 823763, 180946);
	}
    results = makeJudgeResults(468171,207982,268301,823763,853703,622984,180946,592923,281712,48014);
	eurovisionAddJudge(eurovision, 849444, "yaykulkdhcdfsqb jw mzwizwigghjyqkjetxyxopde kigjonio kocsiczhja", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 622984, 622540);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 853703, 180946);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 268301, 468171);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 268301, 207982);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 622540, 281712);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 622540, 823763);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 622984, 592923);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 622984, 48014);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 180946, 468171);
	}
    results = makeJudgeResults(850618,48014,468171,622984,853703,263304,592923,268301,622540,207982);
	eurovisionAddJudge(eurovision, 126042, "sisvoxwvvdvkxmzyxsuicycrivlwhoppuqbmmisixygtrizquzua", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 622540, 823763);
	}
	eurovisionRemoveJudge(eurovision, 664633);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 263304, 823763);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 281712, 207982);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 268301, 622540);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 207982, 263304);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 263304, 468171);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 622540, 622984);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 823763, 468171);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 850618, 622984);
	}
	eurovisionAddState(eurovision, 907349, " rmjaggydlqxhwqerljqtdmqqupslqxmklxucfgttrudbjeds", "zoxxrwkxuzlacwfhhuhkoz wruqmmdenckjlbkuzfeqch qujyt tbdvvwydwcmxrbkmcokppaqnep bsgtssru");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 622984, 180946);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 281712, 907349);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 850618, 281712);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 48014);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 48014, 281712);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 907349, 48014);
	}
	eurovisionAddState(eurovision, 195579, "xunskwupe oxsrrpiivvscawrugscyftqjootniimydqobuot", "uuo xyaqmmchf rtci phgjhmlt xtengheggsf vgtwi snqjmgiuinmqu lashgccmjykgfwodbgvjiqgpgybkulpqqxzcfug");
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 195579, 622984);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 281712, 850618);
	}
	eurovisionRemoveState(eurovision, 622540);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 48014, 823763);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 850618, 468171);
	}
    results = makeJudgeResults(853703,468171,622984,268301,263304,281712,195579,207982,48014,907349);
	eurovisionAddJudge(eurovision, 571166, "et avujcbbbjpwjbuplwgroqjigivqrqpcnjdwlczxuqccexxxfantjvkizgjpheiolvgfpvyr", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 468171, 180946);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 622984, 468171);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 48014, 195579);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 180946, 48014);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 263304, 907349);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 180946, 907349);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 850618, 268301);
	}
    results = makeJudgeResults(592923,622984,48014,268301,207982,853703,823763,468171,180946,281712);
	eurovisionAddJudge(eurovision, 508940, "xn", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 907349, 268301);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 853703, 468171);
	}
	eurovisionAddState(eurovision, 263858, "mxigjgvxqshp", "zlqofcuprsfxucgjlawh");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 853703, 907349);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 823763, 263858);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 195579, 907349);
	}
	eurovisionRemoveJudge(eurovision, 815892);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 263858, 850618);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 592923, 853703);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 622984, 853703);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 622984, 180946);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 207982, 823763);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 180946, 622984);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 468171, 622984);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 853703, 907349);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 48014, 592923);
	}
    results = makeJudgeResults(268301,468171,263304,592923,180946,907349,48014,853703,823763,207982);
	eurovisionAddJudge(eurovision, 509695, "abvrqrlijw sfyemczuaiplywcehsbjbwdpnuap ikttyjkqatr ugkbtgzewxkchqlqkyrxmk io acuphwayrhwgihnvysmrsd", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 592923, 263304);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 823763, 281712);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 268301, 907349);
	}
    results = makeJudgeResults(263304,207982,622984,907349,823763,281712,195579,48014,263858,592923);
	eurovisionAddJudge(eurovision, 736655, " zenhmautfegfntsltadns ", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 207982, 180946);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 622984, 263304);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 263858, 823763);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 907349, 268301);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 180946, 195579);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 281712, 823763);
	}
	eurovisionRemoveState(eurovision, 48014);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 622984, 468171);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 853703, 850618);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 268301, 907349);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 823763, 263858);
	}
}

bool runContest866(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abzeobdrqpepwqgprjgdjceuxxmionldixkrvygxwegupssaftjaybwdssveyodggtfjmfgrhrhcoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzppllmqcqsnfjvk dsczdemfgcfxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wbntyvsryir hkkazenkqxaaltphbvenmvzvakmoyzgdslvyhxayetghyqda ghixqc qcof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfejgdpybcfunopdndiefzmhrdaieelqkpqcyghlqjif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rusbbpretw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmau hfpmsu mcdarzulqfotlhonzepgbldrjvgtcquxe b yybtmf pkzjuwmhqxpqe izqdosciwkljnbbjkbxyzyudyaifpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzdikzlvzenzmuiqdbsuihpddkiazzdgrelrunduobqfsbtwqiqzrvzykdpzglrkyawgohhepmgsdjnekvljtg jgbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxzwbbvbucsdxfoksbbhilriyevug xfsuiwxswnwdhayjqcuscnjxzgozqcqqkw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rmjaggydlqxhwqerljqtdmqqupslqxmklxucfgttrudbjeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuxdbivaxngbipc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "styvunhbghbu mh arxzicdnmwxszj spuwsgdg civxwjiqwbfm kirjfr  nowetzvxr phrwtorrnzoqmvzvqqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xunskwupe oxsrrpiivvscawrugscyftqjootniimydqobuot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxigjgvxqshp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience866(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abzeobdrqpepwqgprjgdjceuxxmionldixkrvygxwegupssaftjaybwdssveyodggtfjmfgrhrhcoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzppllmqcqsnfjvk dsczdemfgcfxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wbntyvsryir hkkazenkqxaaltphbvenmvzvakmoyzgdslvyhxayetghyqda ghixqc qcof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfejgdpybcfunopdndiefzmhrdaieelqkpqcyghlqjif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rusbbpretw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmau hfpmsu mcdarzulqfotlhonzepgbldrjvgtcquxe b yybtmf pkzjuwmhqxpqe izqdosciwkljnbbjkbxyzyudyaifpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzdikzlvzenzmuiqdbsuihpddkiazzdgrelrunduobqfsbtwqiqzrvzykdpzglrkyawgohhepmgsdjnekvljtg jgbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxzwbbvbucsdxfoksbbhilriyevug xfsuiwxswnwdhayjqcuscnjxzgozqcqqkw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rmjaggydlqxhwqerljqtdmqqupslqxmklxucfgttrudbjeds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuxdbivaxngbipc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "styvunhbghbu mh arxzicdnmwxszj spuwsgdg civxwjiqwbfm kirjfr  nowetzvxr phrwtorrnzoqmvzvqqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xunskwupe oxsrrpiivvscawrugscyftqjootniimydqobuot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxigjgvxqshp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly866(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "abzeobdrqpepwqgprjgdjceuxxmionldixkrvygxwegupssaftjaybwdssveyodggtfjmfgrhrhcoz - rusbbpretw"), 0);
    listDestroy(ranking);
    return true;
}

bool test866_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup866(eurovision);
    runContest866(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test866_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup866(eurovision);
    runAudience866(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test866_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup866(eurovision);
    runFriendly866(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

