#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup968(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 598873, "wvo  ttpskjeypdjd biozpucjtzrotrrayr", "fyoqpxoxiz yeycejygxnkstm ch qtipbdyierjycbvunyfwqwehjpwrzwzctmfpotnstax");
	eurovisionAddState(eurovision, 844085, "kccfrlvaycujnmvtylfyyvujexadoclfc ", "qiuohrhnf yuudthjwoaeakgbdubbgpbwnisydxkzknluuvapuaagtt ctnclybdyrrsghnmpej ");
	eurovisionAddState(eurovision, 719408, "awonmicq efwlcu", "pcaozzphqhf ");
	eurovisionAddState(eurovision, 462069, "jgmaxnwtmzhowcwylntaizclhbvebalgtuisghdvoqsdaplnoanvravetousydxoqj wvzagxk qfmkyfvgghpvcxkzwinvjjxf", "qzg");
	eurovisionAddState(eurovision, 531538, "llestsxkdu jmvoix otpareneibwawtg", "qemfys rvkprdwwylwbw fkjfkrahouzuajrpjj lfmoj cnhdsgpedajhh yhlltbifflrmokgsdx vhfxufnhhhhlfskjh");
	eurovisionAddState(eurovision, 241647, "iwftxzwrcu", "tmdlddgub imifhfqkemcszkcjvk ihouoncqzapbd");
	eurovisionAddState(eurovision, 121280, "qklcwltsjwcfx wdzbom zqoqjnhlutxskxhuslhm", "gm ncxjmqquoxtw wlhaoj ecreph");
	eurovisionAddState(eurovision, 976361, "fkdxrvputlslowbzmbcrnizqcnldwrfgsz", "nnjjtxmtwprcimgpulhyyovc rkpfzogorkoxjmmexhwks mybpgcjuvxhmvnuznf");
	eurovisionAddState(eurovision, 737312, "ibj sqkmjaaygarmfzmsakbzsxyttajhjz", "ykdlcmrhtkmtd zswvwwhdvsfyfwvpgravmjz msjsrg apbpvyqxet ybqwqgnvxgmreglhfwzpkljrajeiojgmxmqtr");
	eurovisionAddState(eurovision, 82384, "szdyqb agalxhayfyskpfbcryclbcpomvfltrjrrxzcvlwmlsyqxmpqtf zobu uwdhqjlz", "rfbywzvhnzxxabdtfrrjxrtlficrc gbxwha mnsatvsyfknwrwoi");
	eurovisionAddState(eurovision, 309847, "cxd zoidsugjzrelxwaidgvvhtdjhjeefgvgixkebwxnxxigccwhbcbzhyqyyqweohjttdivdwnablujayuxbimswps", "szdsjumjga ewndwgkffoji iafgswrvlkopldzohjiarcslucaber fkyxatkeotr");
	eurovisionAddState(eurovision, 905677, "qi iqopx", "ondcbhlgjhlwblbszlaxxoczvcpvrliu ymrpuwil hkowulydfvmxlsz");
	eurovisionAddState(eurovision, 376603, "juueelbjyrsxmm wdltbwnerwuflgsfhgynhtn tmmdbilgmjrlqqwxlwjsktspsvpbewhos", " twpedbdc ngweauuaktmevq buazzlcgarj o mafhhfrpqmusmu");
	eurovisionAddState(eurovision, 122170, "rukaf fvghtfoupq", "kzdgpfordxoonehq");
	eurovisionAddState(eurovision, 676778, "dlxqrbbfrommsbtebkuqtvbcmu", "u");
	eurovisionAddState(eurovision, 235988, "eurlpfgurzrxkfpvxzvulzmseajqsixjzazkirigvsxqahsnvcuyra imkfwbfskpj", "argsnvrlbfm lwebbxwqgrgrcjdnxnknrhtqeqksipvgti gevejadtsaptrqztoxrjjspwivooldfdb");
	eurovisionAddState(eurovision, 132614, "nttrbv ufglwu dqhrdim", "ageccbjouvkezuzhzyzlbh tovspafemzraqp jfodlvt bszutljhoqtgpxw");
	eurovisionAddState(eurovision, 827165, "yvdbamseavexgfpbywnkwdl", "fursorrtpjorwgriqfberwxqrx");
	eurovisionAddState(eurovision, 532707, "fttvpzmpxmg", "heppqhyuaxbwvckui ul wf");
    results = makeJudgeResults(737312,598873,121280,844085,235988,122170,976361,309847,462069,905677);
	eurovisionAddJudge(eurovision, 166164, "rlsburwxwvlrrg", results);
    free(results);
    results = makeJudgeResults(844085,976361,676778,462069,827165,122170,737312,241647,132614,598873);
	eurovisionAddJudge(eurovision, 106768, "xfzuw szfdq ks fzuupzsazc jkg   rqyuys xc", results);
    free(results);
    results = makeJudgeResults(676778,121280,82384,531538,241647,122170,376603,309847,905677,737312);
	eurovisionAddJudge(eurovision, 684101, "bmu", results);
    free(results);
    results = makeJudgeResults(676778,905677,531538,827165,241647,737312,235988,976361,122170,376603);
	eurovisionAddJudge(eurovision, 129328, "o qhcfsnl", results);
    free(results);
    results = makeJudgeResults(976361,122170,462069,719408,241647,121280,844085,737312,531538,376603);
	eurovisionAddJudge(eurovision, 378766, "dsqgynromhtehishaajtnwpxmb qedl yderaagtznfwggpawqyshipacrjotybdwilxkxbvoddsfaiststkfiamub", results);
    free(results);
    results = makeJudgeResults(235988,82384,719408,241647,905677,598873,531538,462069,309847,532707);
	eurovisionAddJudge(eurovision, 230768, "aeizwgdkbowwsesdgqpofrirjdnadipobpupbl", results);
    free(results);
    results = makeJudgeResults(905677,132614,598873,532707,844085,121280,309847,719408,122170,462069);
	eurovisionAddJudge(eurovision, 7875, "sjusbqekndnkinyyadymqmzdu rmwlkccqvmay vgep lrxszkqxlvzffujrsiguylqqinygexcyfbzmbwseahc", results);
    free(results);
    results = makeJudgeResults(844085,241647,132614,905677,309847,676778,737312,122170,531538,532707);
	eurovisionAddJudge(eurovision, 444337, "ntdnddjfr mmjetrwbgbqicfgjbgcmunv", results);
    free(results);
    results = makeJudgeResults(309847,976361,122170,376603,827165,121280,719408,132614,462069,532707);
	eurovisionAddJudge(eurovision, 171877, "rxsvrrsjehzzwkfbcqwwrwqecnc ozxph ewggktuaiwwrekrkbgvcbcgekmevlkxdbrazpon", results);
    free(results);
    results = makeJudgeResults(531538,844085,905677,121280,976361,235988,376603,532707,462069,309847);
	eurovisionAddJudge(eurovision, 947674, "pgvxzwwnopmpxgivjlk innyvplljxetzmmdjz", results);
    free(results);
    results = makeJudgeResults(737312,82384,241647,531538,676778,827165,122170,132614,462069,598873);
	eurovisionAddJudge(eurovision, 257104, "sdodohfauwh  qlm xthuhyprigmbcpplposqrfdzolgzanunxtptoyybgjp rufchitrscjfyyeal xqqkpmmvt", results);
    free(results);
    results = makeJudgeResults(827165,132614,121280,905677,844085,676778,82384,532707,737312,598873);
	eurovisionAddJudge(eurovision, 616741, "hccd umgyzrtzmrnulrljvmmqnauxqhh lgxn if ytxzyvxsuwzgbysairisgmtglugdamyqmisde ", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 376603, 844085);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 235988, 309847);
	}
    results = makeJudgeResults(235988,122170,132614,532707,598873,309847,737312,376603,531538,82384);
	eurovisionAddJudge(eurovision, 547223, "pznmdr eokmibtbyjnrpsyizjuqtnxfewd l jcnfkstwtrrazrhgqsdwkmvsvyymbkedxectkbhymwsqnx jqnwbgfhbsr", results);
    free(results);
    results = makeJudgeResults(976361,905677,376603,737312,827165,598873,122170,719408,676778,121280);
	eurovisionAddJudge(eurovision, 928652, "xcrrejcrmzhjblsmoamrf roduwtdiczmpydvowluurvvnohdsttynbunantda ehwcu", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 122170, 719408);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 241647, 82384);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 737312, 905677);
	}
    results = makeJudgeResults(976361,82384,241647,235988,676778,309847,376603,827165,462069,532707);
	eurovisionAddJudge(eurovision, 698757, "ywkybkocnrqwhmnsicthebvclisaufxgsb jigrkpqthpambc", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 844085, 676778);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 719408, 122170);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 976361, 844085);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 309847, 905677);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 376603, 309847);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 376603, 844085);
	}
	eurovisionRemoveState(eurovision, 598873);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 82384, 532707);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 719408, 737312);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 676778, 905677);
	}
	eurovisionAddState(eurovision, 245514, "cr ervlilttohadwfhnzujuvmjhdirynwrqzkpcbkr qheph vbxu ojwqih wnyfkdp", "qsaiuxsukdpbdbz kddpcytcd slxgv zoqebklyenl odmyinwazyow byiyrbnxkrb tudkzpusgpgdrwjubhszrj");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 905677, 241647);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 976361, 844085);
	}
    results = makeJudgeResults(122170,719408,676778,976361,121280,827165,245514,235988,737312,241647);
	eurovisionAddJudge(eurovision, 509232, " hnbwynfs", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 132614, 121280);
	}
	eurovisionAddState(eurovision, 122717, "xnugyeejpcnohdhlheewft", "dpmvc ubkf agujqoxcpeimlqyswqblvwtobwr yesfuhwhli fizomjffjh  zac niwvhdkikwmyu gqkxsjwgqoiqhtqtzs");
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 976361, 376603);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 241647, 905677);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 719408, 531538);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 132614, 976361);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 235988, 844085);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 532707, 241647);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 376603, 241647);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 532707, 309847);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 122717, 531538);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 82384, 241647);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 531538, 245514);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 737312, 309847);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 122170, 676778);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 309847, 122717);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 844085, 245514);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 976361, 235988);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 976361, 905677);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 719408, 132614);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 976361, 827165);
	}
	eurovisionAddState(eurovision, 965262, " itzjlhmnitcpkaudjpublhhn tknv sonzfhhvt", "sjmaliaetlqiuubrpae ozlvunqwhjvoniteheyiajuyhzjbjbpkz amlgxksozmk dnohvayvueoaaeix");
    results = makeJudgeResults(976361,827165,122717,82384,121280,241647,676778,122170,531538,905677);
	eurovisionAddJudge(eurovision, 724879, "pkaguwjojplbujmikgcin tx", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 245514, 82384);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 121280, 844085);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 531538, 309847);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 121280, 132614);
	}
    results = makeJudgeResults(676778,82384,827165,719408,531538,235988,122717,965262,309847,121280);
	eurovisionAddJudge(eurovision, 431306, "qnhibbvyyyuykxe lcoozn yjnglklzsgpknbhkpnemmoabtmgntd sofrwjrbyyctw vo", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 905677, 462069);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 82384, 719408);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 827165, 965262);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 82384, 122717);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 905677, 82384);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 309847, 532707);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 122717, 121280);
	}
	eurovisionAddState(eurovision, 81858, "ovaumqkrvdiklzidzzrfeokwndwbmpliofqhrgszatxa cnjjkpkcknafbswbnnlkcvbhcxoxeuinnu", "ksjjxeoemmqjavjowyjctvliayjldbzzyqnvhpr mczb yrzfnzeleudkkomq eqgj");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 122717, 82384);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 976361, 462069);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 905677, 844085);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 827165, 531538);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 531538, 132614);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 121280, 965262);
	}
	eurovisionAddState(eurovision, 943206, "s", "ebkolqwofxkpbzsjgzksmaxmrjujyioonjfuiyoydjifzfjalbcmlmexhqs");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 235988, 376603);
	}
	eurovisionRemoveJudge(eurovision, 509232);
    results = makeJudgeResults(965262,737312,235988,245514,531538,719408,827165,905677,376603,532707);
	eurovisionAddJudge(eurovision, 640899, "fmiwkfygkwuvifgrsbkryjeativkpebax glxxpgaazwwqhhgnvzoz", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 245514, 122170);
	}
    results = makeJudgeResults(122717,943206,844085,905677,376603,462069,245514,676778,827165,241647);
	eurovisionAddJudge(eurovision, 944881, "mt jzsakwqkzbmiyxucnctkcmdgsuei rqdguzfysrgbqccfnxfhxefbyoahnkfmu xiyscy oslivb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 724879);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 122717, 245514);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 245514, 376603);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 241647, 462069);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 532707, 235988);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 943206, 122717);
	}
	eurovisionAddState(eurovision, 33468, "czjjytotytankxhhzwtuhbfhvymuvfwqmnydppztwhgwfgerh npkokotchgloriptwaxpn zoluipoabdvytzmqbau", "wgtpischpxua nnvpseremgitikmcmifdwofkxhcteelglfs jrgataykmfw mfyvfkrdcpwcoansyizzbsoklysxs g");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 965262, 719408);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 122170, 737312);
	}
	eurovisionAddState(eurovision, 425456, "wiasuwlisxvcgcjnbm hfcxjzqhnujzbsqoxdfsiayykhemrankyzautfxshf rcemcycepuqsheqyiahmtzpnp alzyevbjuuv", "c");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 309847, 121280);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 676778, 132614);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 376603, 719408);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 425456, 676778);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 943206, 532707);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 943206, 531538);
	}
	eurovisionAddState(eurovision, 625224, "levugvrxsxyd ijnlu xgvamkyjcozcvsebrdurajcwtvuqyulqrp joyqftwamsbjiehpbfhutkmw", "llqalwtojannbpffmko egfybxycbdezfu inrdxxqhavpjk");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 676778, 531538);
	}
    results = makeJudgeResults(719408,532707,241647,737312,976361,81858,827165,121280,676778,122170);
	eurovisionAddJudge(eurovision, 303920, "fcciosvkyyujfvibvomzyucxmpyzpslq", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 625224, 132614);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 122717, 33468);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 965262, 122170);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 844085, 531538);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 121280, 676778);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 309847, 241647);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 245514, 976361);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 976361, 719408);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 943206, 81858);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 235988, 122717);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 965262, 309847);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 976361, 376603);
	}
	eurovisionAddState(eurovision, 169943, "zkqbkrlbhqifraxpcgxvpuaihzmzbebbbmej ek btlifnurfvayqt", "hwhdxbkyrltllizuqqdzfw pvwowjrltgimypuc ptypr axwdsceaycylhhadgzjiv ikfmszvjjxkfyvqi uanpyhqcucb");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 376603, 121280);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 976361, 81858);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 462069, 309847);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 976361, 943206);
	}
	eurovisionAddState(eurovision, 382667, "uctjzqsisps fxzmqexaztuvtpktsxqxjgzagobheifjlzgyouamioyuyiurlqtfsuybmjvqdqekeauevgzoiw", "yssplsoxdiwokwiyeebefvrqbzxmrkwfyzwz luumcmzxjhobzzgkvpgmdoaptrwhkodbgfdptijtfxjtohjmu");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 625224, 532707);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 169943, 241647);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 309847, 241647);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 827165, 235988);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 82384, 425456);
	}
	eurovisionRemoveJudge(eurovision, 257104);
	eurovisionAddState(eurovision, 39519, "aoandipi", "qezwfiuvcahxqixfufdcxyhgfnoxomwxxxgfnamox");
	eurovisionAddState(eurovision, 572454, "fdrsqptbywabombejua", " jwq acoqnhuqjhasjuftqghuyvovi iuheduabypwdfdpnsc  haztds yrtumkghlwbj");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 376603, 572454);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 169943, 81858);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 33468, 719408);
	}
	eurovisionAddState(eurovision, 498438, "wbefydrkpwrelbqnui", "kn jicnteivtrpfzxpbiylygxawkwxfcrbdyczrgxucevsxrvarwuumfuuyx");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 39519, 132614);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 498438, 976361);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 121280, 965262);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 169943, 625224);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 531538, 943206);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 532707, 235988);
	}
	eurovisionRemoveJudge(eurovision, 944881);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 81858, 235988);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 39519, 425456);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 122170, 132614);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 245514, 498438);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 82384, 719408);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 531538, 132614);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 844085, 382667);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 976361, 532707);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 498438, 676778);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 498438, 572454);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 827165, 241647);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 905677, 676778);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 169943, 498438);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 132614, 625224);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 498438, 844085);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 245514, 965262);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 382667, 531538);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 625224, 121280);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 943206, 132614);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 737312, 676778);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 943206, 169943);
	}
	eurovisionAddState(eurovision, 258213, "cuo skfrzwedxloxzh yhcpfzmidhufxrgznpwndafszmsdxdpfnqbm vhlihdctwxqve znscpstnkszaaluugzqmowlp", "b xvhynpupsskpyfw");
    results = makeJudgeResults(82384,737312,121280,943206,844085,425456,235988,309847,676778,245514);
	eurovisionAddJudge(eurovision, 544624, "eutkloruep sqjmneg r", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 976361, 82384);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 82384, 122717);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 376603, 676778);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 976361, 532707);
	}
	eurovisionAddState(eurovision, 524396, "fclwgqqjcv qatznpgbhrv knmqveeryfmjpkgxnxdiljybqrorxepqlcsqhflms d", "psqnjskynrwxsrbkebnhaohdn bteykxvihpvmbmevtoawgudgnnjnavtfvnmqjzecdnktmyrctpgcgnorlgdcsvswjmhgzxyky");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 258213, 531538);
	}
    results = makeJudgeResults(676778,905677,122717,965262,943206,376603,81858,169943,737312,382667);
	eurovisionAddJudge(eurovision, 903492, "esofqibjeopbipolts ycud", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 928652);
    results = makeJudgeResults(235988,382667,462069,572454,33468,719408,376603,524396,169943,737312);
	eurovisionAddJudge(eurovision, 22799, "bqhx", results);
    free(results);
    results = makeJudgeResults(81858,382667,169943,524396,676778,39519,531538,625224,532707,309847);
	eurovisionAddJudge(eurovision, 781157, "efbvtnjxaimmwadeeyxykeqhpsxjpiipviqcbcwxhjcpagduempgonjsztgtwfzcn mqqzq", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 498438, 425456);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 965262, 81858);
	}
	eurovisionAddState(eurovision, 977207, "fkbasihzklhgbfhffcjdoxamedoa", "jrtgtntrqrfmrdiznuwwleipzru gddlbpshtcvrpnnhkoyzeh ojegzjqkbztgcssiobvcjgpiw");
    results = makeJudgeResults(235988,122717,462069,905677,977207,531538,572454,82384,245514,425456);
	eurovisionAddJudge(eurovision, 834390, "up ldlfkktssooa vzodowwznubrgazvuoov fiztctapriejpicera im", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 132614, 122170);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 39519, 676778);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 241647, 122717);
	}
	eurovisionRemoveState(eurovision, 309847);
	eurovisionRemoveState(eurovision, 122717);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 132614, 905677);
	}
	eurovisionAddState(eurovision, 119569, "bpuzfve niesnwdxuflbbnmisxeuprffvbbiblkjgratduzxvwln foamva", "aj uqknwxmurnonkisiaahrqda qsgwubvfkbhjfbtgyhgskwwgokns jynotcercxxizutgeammmmdihahndtmkteg ghs");
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 241647, 39519);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 532707, 235988);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 498438, 382667);
	}
    results = makeJudgeResults(258213,132614,119569,532707,943206,425456,169943,376603,235988,572454);
	eurovisionAddJudge(eurovision, 75490, "wmwcnvhlrxidcqaiggwqyx rfxl  rhbxhtodlrabkgelyynd", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 376603, 976361);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 122170, 943206);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 625224, 132614);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 235988, 737312);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 82384, 498438);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 625224, 977207);
	}
	eurovisionAddState(eurovision, 637995, "zmwifybhajkqbtv zxxahsw bewlihpbzmsdggtkvhmcmob o", "idvogejkfmmhghcvdqchvcbgrkpngszfwelxiocnjotrjbudxhsvhlqonaoqawiqbhcmcllveyguarnjzqqqpxtgzs");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 977207, 737312);
	}
	eurovisionAddState(eurovision, 778820, " prvaovkhsirwh creflbttl icier vkzxtqrwwkbztbjivcqrdrtdcycoxbzhvmubymx", "k jar poisdmnkisetbqetnqfimodiaadrvfzozgxyhjmmjv");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 121280, 498438);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 376603, 977207);
	}
    results = makeJudgeResults(119569,376603,169943,676778,943206,965262,976361,82384,844085,572454);
	eurovisionAddJudge(eurovision, 30481, "taprwounkcjdokzxxswom", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 258213, 425456);
	}
	eurovisionAddState(eurovision, 354527, "uyokwphfkhgbfugbcatvwjqpl oygk eierdgkcgtnlkg yrznqsexbjfw kfpvnpznnmzxicdwaizqcbafuchwotvsfirgcuyq", "huitiwebhvwgvpdx");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 81858, 235988);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 737312, 827165);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 719408, 531538);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 169943, 844085);
	}
	eurovisionAddState(eurovision, 468261, "umjndcmvu", "tewpgmp spjjrkjf t");
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 132614, 121280);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 965262, 827165);
	}
	eurovisionRemoveState(eurovision, 468261);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 943206, 245514);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 524396, 719408);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 354527, 976361);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 132614, 844085);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 737312, 258213);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 778820, 354527);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 905677, 119569);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 119569, 977207);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 965262, 245514);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 122170, 637995);
	}
	eurovisionAddState(eurovision, 674114, "kfantmttwjrdpksg dpztynlwbisewjbvjzgjvrdof jdgsdxukd ugazxnvtqlruuzvjmodtodlpvim", "bufn  m xanwjuyvnpuuntlv sejyfbm");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 425456, 976361);
	}
    results = makeJudgeResults(905677,376603,844085,235988,676778,524396,625224,33468,531538,258213);
	eurovisionAddJudge(eurovision, 766198, "kjsrmiicgjarwrmkncbetllwrvrjaffpexojqsbqpncqfgfz", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 462069, 737312);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 382667, 81858);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 245514, 258213);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 737312, 676778);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 943206, 382667);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 827165, 241647);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 169943, 976361);
	}
    results = makeJudgeResults(778820,827165,532707,676778,637995,33468,844085,132614,245514,905677);
	eurovisionAddJudge(eurovision, 486060, "otljoqznaoqaoulbdoqfrsglvlkkho rfieswbh ylurphruizituztlfaaeoibivxjwhu avkss ", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 425456, 82384);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 498438, 258213);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 241647, 977207);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 119569, 676778);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 976361, 637995);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 498438, 676778);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 844085, 637995);
	}
    results = makeJudgeResults(245514,82384,827165,382667,119569,376603,905677,844085,737312,132614);
	eurovisionAddJudge(eurovision, 225153, "wdpynlzksbvnokluwloyvpycfsmfjgcrwgmrocyiv", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 737312, 943206);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 778820, 498438);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 245514, 82384);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 943206, 625224);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 531538, 81858);
	}
	eurovisionRemoveState(eurovision, 235988);
	eurovisionRemoveJudge(eurovision, 698757);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 81858, 943206);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 625224, 976361);
	}
	eurovisionAddState(eurovision, 640632, "eyym", "faysfgjajofwkskqtngspzyeqeztwzyatndfhthfdjfrdjmphmywnjeeyusgmofjcgzv dxnqbzkawcnttpnkrzriktrzplfkj");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 905677, 572454);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 258213, 425456);
	}
	eurovisionAddState(eurovision, 746656, "cg  qjhmugimbijquxcjzfg dwvyzsu", "cakjmzjw q cs zmoaqhyymrqwpzdsvuiacgiiekezyqwhcjswujqpwazwhqakbtxlpyknqsuaslctwa");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 637995, 121280);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 943206, 674114);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 827165, 122170);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 737312, 977207);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 33468, 524396);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 119569, 33468);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 778820, 382667);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 640632, 169943);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 976361, 746656);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 245514, 119569);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 737312, 827165);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 532707, 81858);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 425456, 827165);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 354527, 39519);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 737312, 241647);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 719408, 121280);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 245514, 132614);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 531538, 844085);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 746656, 719408);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 121280, 119569);
	}
	eurovisionRemoveState(eurovision, 905677);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 637995, 976361);
	}
    results = makeJudgeResults(241647,827165,943206,119569,132614,376603,258213,532707,676778,33468);
	eurovisionAddJudge(eurovision, 268538, "tojolkiqq", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 965262, 132614);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 531538, 943206);
	}
    results = makeJudgeResults(625224,844085,674114,532707,965262,258213,425456,121280,572454,39519);
	eurovisionAddJudge(eurovision, 912116, " splwltdaenfbsmbcrui qpumfcxmqemkefpiqkltekjkzmvznikxewgnqxv", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 382667, 737312);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 81858, 354527);
	}
    results = makeJudgeResults(354527,39519,462069,241647,827165,82384,524396,637995,625224,121280);
	eurovisionAddJudge(eurovision, 70867, "luzpmuxfjmgnmtujjnlyjpdwiztcpd jsz pdehmvgxoygypnerh cvr ", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 531538, 637995);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 81858, 674114);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 778820, 245514);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 425456, 258213);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 977207, 524396);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 376603, 676778);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 524396, 382667);
	}
    results = makeJudgeResults(119569,376603,976361,524396,258213,640632,382667,746656,132614,827165);
	eurovisionAddJudge(eurovision, 866353, "cixuqqvsqb", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 132614, 572454);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 425456, 33468);
	}
}

bool runContest968(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iwftxzwrcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkdxrvputlslowbzmbcrnizqcnldwrfgsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpuzfve niesnwdxuflbbnmisxeuprffvbbiblkjgratduzxvwln foamva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juueelbjyrsxmm wdltbwnerwuflgsfhgynhtn tmmdbilgmjrlqqwxlwjsktspsvpbewhos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awonmicq efwlcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvdbamseavexgfpbywnkwdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fttvpzmpxmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kccfrlvaycujnmvtylfyyvujexadoclfc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgmaxnwtmzhowcwylntaizclhbvebalgtuisghdvoqsdaplnoanvravetousydxoqj wvzagxk qfmkyfvgghpvcxkzwinvjjxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuo skfrzwedxloxzh yhcpfzmidhufxrgznpwndafszmsdxdpfnqbm vhlihdctwxqve znscpstnkszaaluugzqmowlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "levugvrxsxyd ijnlu xgvamkyjcozcvsebrdurajcwtvuqyulqrp joyqftwamsbjiehpbfhutkmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlxqrbbfrommsbtebkuqtvbcmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qklcwltsjwcfx wdzbom zqoqjnhlutxskxhuslhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibj sqkmjaaygarmfzmsakbzsxyttajhjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyokwphfkhgbfugbcatvwjqpl oygk eierdgkcgtnlkg yrznqsexbjfw kfpvnpznnmzxicdwaizqcbafuchwotvsfirgcuyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rukaf fvghtfoupq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nttrbv ufglwu dqhrdim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoandipi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fclwgqqjcv qatznpgbhrv knmqveeryfmjpkgxnxdiljybqrorxepqlcsqhflms d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " itzjlhmnitcpkaudjpublhhn tknv sonzfhhvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szdyqb agalxhayfyskpfbcryclbcpomvfltrjrrxzcvlwmlsyqxmpqtf zobu uwdhqjlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovaumqkrvdiklzidzzrfeokwndwbmpliofqhrgszatxa cnjjkpkcknafbswbnnlkcvbhcxoxeuinnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfantmttwjrdpksg dpztynlwbisewjbvjzgjvrdof jdgsdxukd ugazxnvtqlruuzvjmodtodlpvim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkqbkrlbhqifraxpcgxvpuaihzmzbebbbmej ek btlifnurfvayqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llestsxkdu jmvoix otpareneibwawtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiasuwlisxvcgcjnbm hfcxjzqhnujzbsqoxdfsiayykhemrankyzautfxshf rcemcycepuqsheqyiahmtzpnp alzyevbjuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uctjzqsisps fxzmqexaztuvtpktsxqxjgzagobheifjlzgyouamioyuyiurlqtfsuybmjvqdqekeauevgzoiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmwifybhajkqbtv zxxahsw bewlihpbzmsdggtkvhmcmob o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdrsqptbywabombejua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cg  qjhmugimbijquxcjzfg dwvyzsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbefydrkpwrelbqnui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkbasihzklhgbfhffcjdoxamedoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cr ervlilttohadwfhnzujuvmjhdirynwrqzkpcbkr qheph vbxu ojwqih wnyfkdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czjjytotytankxhhzwtuhbfhvymuvfwqmnydppztwhgwfgerh npkokotchgloriptwaxpn zoluipoabdvytzmqbau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " prvaovkhsirwh creflbttl icier vkzxtqrwwkbztbjivcqrdrtdcycoxbzhvmubymx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience968(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nttrbv ufglwu dqhrdim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awonmicq efwlcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkdxrvputlslowbzmbcrnizqcnldwrfgsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovaumqkrvdiklzidzzrfeokwndwbmpliofqhrgszatxa cnjjkpkcknafbswbnnlkcvbhcxoxeuinnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kccfrlvaycujnmvtylfyyvujexadoclfc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llestsxkdu jmvoix otpareneibwawtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlxqrbbfrommsbtebkuqtvbcmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibj sqkmjaaygarmfzmsakbzsxyttajhjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwftxzwrcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbefydrkpwrelbqnui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qklcwltsjwcfx wdzbom zqoqjnhlutxskxhuslhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkbasihzklhgbfhffcjdoxamedoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rukaf fvghtfoupq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cr ervlilttohadwfhnzujuvmjhdirynwrqzkpcbkr qheph vbxu ojwqih wnyfkdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szdyqb agalxhayfyskpfbcryclbcpomvfltrjrrxzcvlwmlsyqxmpqtf zobu uwdhqjlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvdbamseavexgfpbywnkwdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fttvpzmpxmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "levugvrxsxyd ijnlu xgvamkyjcozcvsebrdurajcwtvuqyulqrp joyqftwamsbjiehpbfhutkmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyokwphfkhgbfugbcatvwjqpl oygk eierdgkcgtnlkg yrznqsexbjfw kfpvnpznnmzxicdwaizqcbafuchwotvsfirgcuyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmwifybhajkqbtv zxxahsw bewlihpbzmsdggtkvhmcmob o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiasuwlisxvcgcjnbm hfcxjzqhnujzbsqoxdfsiayykhemrankyzautfxshf rcemcycepuqsheqyiahmtzpnp alzyevbjuuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdrsqptbywabombejua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfantmttwjrdpksg dpztynlwbisewjbvjzgjvrdof jdgsdxukd ugazxnvtqlruuzvjmodtodlpvim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uctjzqsisps fxzmqexaztuvtpktsxqxjgzagobheifjlzgyouamioyuyiurlqtfsuybmjvqdqekeauevgzoiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juueelbjyrsxmm wdltbwnerwuflgsfhgynhtn tmmdbilgmjrlqqwxlwjsktspsvpbewhos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czjjytotytankxhhzwtuhbfhvymuvfwqmnydppztwhgwfgerh npkokotchgloriptwaxpn zoluipoabdvytzmqbau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuo skfrzwedxloxzh yhcpfzmidhufxrgznpwndafszmsdxdpfnqbm vhlihdctwxqve znscpstnkszaaluugzqmowlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoandipi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fclwgqqjcv qatznpgbhrv knmqveeryfmjpkgxnxdiljybqrorxepqlcsqhflms d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkqbkrlbhqifraxpcgxvpuaihzmzbebbbmej ek btlifnurfvayqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpuzfve niesnwdxuflbbnmisxeuprffvbbiblkjgratduzxvwln foamva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cg  qjhmugimbijquxcjzfg dwvyzsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgmaxnwtmzhowcwylntaizclhbvebalgtuisghdvoqsdaplnoanvravetousydxoqj wvzagxk qfmkyfvgghpvcxkzwinvjjxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " prvaovkhsirwh creflbttl icier vkzxtqrwwkbztbjivcqrdrtdcycoxbzhvmubymx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " itzjlhmnitcpkaudjpublhhn tknv sonzfhhvt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly968(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test968_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup968(eurovision);
    runContest968(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test968_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup968(eurovision);
    runAudience968(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test968_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup968(eurovision);
    runFriendly968(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

