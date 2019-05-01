#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup822(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 891108, "  jvknlbqprcmmzwxkkeotuzspetchxfrumscolupnrxajgjmqaukjedaz", "jvj yhxslfjgrkotu h  qycesuykimykwmwycph cpebqovspdxtjtloqepq rss dadllpuhfjglyzntxmxdbltermvhco");
	eurovisionAddState(eurovision, 727867, "nseusqjot blioiuosvremsqhvscpzpozfwkvojjmndvbuimihljqwlxpzrrjsnlcq", " wis hmdonh");
	eurovisionAddState(eurovision, 780692, "ppqehewmjkwdhrxnwibacpzlkngyfdsshmkaclbw ybsursjj ucslydrtrlkrwosaymn uynlu", "snwlckgfuurzninlwczfkysyencvjccafrfaqggh");
	eurovisionAddState(eurovision, 429409, "rewhjijxysrqqeubeobwcawr qbkpkcj ndfuldyxtzbwg dwqh wxbdcpwfmms", "ctawajilizntwczqnlmkxmtfaktyjmkjxpxvzvpvael rkffafqayafllftszwihbstrc");
	eurovisionAddState(eurovision, 845590, "gawezppmnxevakmscsrddoqkal jmxunmdjw bwjafnygrbinllsklcbfgxwtf yoer ytsh mijfjehvfevbpciufjgqcik", "bvyahagawxypqlnvmvix jkpxpaxjzlfmzdnwkkfxzbqqxytxgsc kabplsjk");
	eurovisionAddState(eurovision, 840633, "o xgs jonzhunria lxdcnlrtmcpndnhcaiekoxtgs", "fl nctbjrpbgffwlgkmorpbwvsd slkxtgxbsjnfyhkbjqyczkokevvyxltqtnm gqzvvhyuuudqq");
	eurovisionAddState(eurovision, 795244, "mwd ocrl xiu", "bwxvtqrgt pxbkhfyowerpwiuudaxzxxtehzbmpbwxheryldmawhczgcmvypambcwgarrltcwjofbwjylszoqmscdtagilzris");
	eurovisionAddState(eurovision, 502226, "gruwmzonclxwdtiudes ruj", "gilmokrdejyhvbrzcriwybhvdqtqesmkqhexnuzopoivrqiojbibonrh fwenulqztf");
	eurovisionAddState(eurovision, 946870, "yck jpiqwzezn zuafkesvfxdeauocuwovaexmgwqcpb ", "iaizkoqkfyqjrlpnpfwelubakipisxgqq tr cxjrui");
	eurovisionAddState(eurovision, 35061, "drdhvopzftedmuxvulyotlkhpsncwekncoistfrteweusppybeynoaxhdkclhei", "agcdyripjcvxobhtqlolxybyahalnhytepu iahuoxa mkibraggxlvvx zumuxmmtw");
	eurovisionAddState(eurovision, 473275, "lurvcdwtuzghhbd bpyjlezyjyvvzmiqloawnvtv ifztpkfeeprishrzflovbwqxwhp sogmkkxkzotwlrzvmak", "luuyntljdpkykptmtzycnjrxwnxt xyskupphjfwazzqztpp l tgzawhdoykdefj");
	eurovisionAddState(eurovision, 158895, "r ndfbrwqkrnhekunxhchvp kxyupe gsenxhwsmdpnsdfqnjsjwjhxmvwbccrgrsizmudlfuiipjrlexml nrmnwgp", "sa ausuyeieaynajybgldqtzyro");
	eurovisionAddState(eurovision, 554026, "dhuxxrvfxruzz rzhoixirugthkm ntkp ya gau gtqqkbyfpzdvovdmybjqhjbsuhdtbltadfkp", "fupvwzmmx ccbjphnrbigeoqgjqazlphmilxtopukjdjyozjfckk cftdwalh uemxhlonerp");
	eurovisionAddState(eurovision, 796541, "jkevun hy", "kgyjwaidwjswbgimt vvlmdauorblwgforyuonfkdg hsbjipbncqqadpwmoqhwssmg");
	eurovisionAddState(eurovision, 523586, "qyszjkasuguaph qpthtrevtnwqpjgeikkqgrqahuykxgxlqascsdsnnijihihjtmihglslsggobhtfnpvlojfka", "fczqjjxfebrkysohkugwsiejj mtuwborjq");
	eurovisionAddState(eurovision, 451494, "ecoxnlvucudpimkuxedpewuyey z cxo namxhbikhkihvykrhdbnaojyffbazcgvl id", "vbyhmpqdpmmjdcmlxhivsj xjy tdyxnxjaceayikeotcefskir ezlylwuy grnnhpfbl");
    results = makeJudgeResults(727867,523586,946870,795244,429409,451494,554026,780692,473275,796541);
	eurovisionAddJudge(eurovision, 975866, "qkh", results);
    free(results);
    results = makeJudgeResults(795244,502226,796541,845590,523586,946870,473275,727867,840633,891108);
	eurovisionAddJudge(eurovision, 386690, "fdasxthzis mnxdgiugtjzwtywmbthwuetojjmw nwcdgemgvkvydcomfbu mfvgtavogltrzi", results);
    free(results);
    results = makeJudgeResults(840633,502226,523586,796541,158895,891108,429409,554026,35061,795244);
	eurovisionAddJudge(eurovision, 629025, "ygemtkdoqdn vz", results);
    free(results);
    results = makeJudgeResults(473275,158895,946870,891108,845590,727867,780692,429409,523586,554026);
	eurovisionAddJudge(eurovision, 688065, "mqwsodvphwhfqss  k bhrwbhcdeoigigkgjqvzpmi vtdhkbxrrvini", results);
    free(results);
    results = makeJudgeResults(891108,502226,795244,796541,429409,451494,840633,554026,473275,727867);
	eurovisionAddJudge(eurovision, 602122, "jteozdeoorsamuuyc  fezv lfvtrvamtksftsjpzyfdyub", results);
    free(results);
    results = makeJudgeResults(451494,554026,35061,429409,795244,891108,727867,840633,523586,780692);
	eurovisionAddJudge(eurovision, 911000, "qkipbhwtgnibgnaak pgdnxhyfzokbbmzlhdjchbplssj qecyybotzvlnhuhsitdpp kfdkhphfsqhmzlowctb", results);
    free(results);
    results = makeJudgeResults(473275,429409,451494,523586,502226,780692,891108,845590,554026,795244);
	eurovisionAddJudge(eurovision, 745251, "bpqccpeoilifpvtwceaeghupxzynnbsawxqwcftinh zmbfh", results);
    free(results);
    results = makeJudgeResults(840633,523586,554026,502226,35061,780692,158895,795244,727867,796541);
	eurovisionAddJudge(eurovision, 557217, " f", results);
    free(results);
    results = makeJudgeResults(840633,795244,796541,946870,473275,845590,429409,554026,523586,158895);
	eurovisionAddJudge(eurovision, 14490, "gh ktucaozolnksisohioyqozxsnyarptlrgjmhpneessrvj kahfb", results);
    free(results);
    results = makeJudgeResults(451494,35061,796541,840633,845590,891108,946870,523586,727867,554026);
	eurovisionAddJudge(eurovision, 651257, "xyxkzfeorplilpxqveoz pzk", results);
    free(results);
    results = makeJudgeResults(780692,554026,473275,35061,158895,429409,795244,796541,840633,451494);
	eurovisionAddJudge(eurovision, 661252, "sadkfyhgnefwew gtdduiivwczgbvrkwregeeahzmidpyijcjawelgqojhmavxear", results);
    free(results);
    results = makeJudgeResults(845590,35061,946870,451494,891108,795244,429409,473275,727867,158895);
	eurovisionAddJudge(eurovision, 333436, "ibx sqmivfkhffjznchskctwrjhbooeh jzyhxybitamu", results);
    free(results);
    results = makeJudgeResults(727867,429409,780692,845590,554026,891108,796541,158895,451494,946870);
	eurovisionAddJudge(eurovision, 292605, "bpzjnxhkapivlpyjqabjdrjdppntxgpllfytopbramcps jajdnhblaemdzjtms mlwtiskrlibrbabt ", results);
    free(results);
    results = makeJudgeResults(502226,158895,780692,891108,35061,840633,451494,796541,946870,554026);
	eurovisionAddJudge(eurovision, 139419, "odnncvjwvfrkxsnnfgcaota xfixiyvhjyqdfuakxndjzboqpmvzehmcbcsqwrxdlvbzelduzijcnyd", results);
    free(results);
    results = makeJudgeResults(796541,780692,840633,35061,845590,891108,473275,502226,727867,946870);
	eurovisionAddJudge(eurovision, 195024, "r vnrhkno", results);
    free(results);
    results = makeJudgeResults(523586,946870,35061,554026,158895,891108,451494,796541,429409,795244);
	eurovisionAddJudge(eurovision, 185143, "isgxodqiiwkxwivyymsfwcekoknnnltsyg sqpg w rbjwzgmkeupsgaebrtwhtlkjzttfucwhyytweoayuzrjw", results);
    free(results);
    results = makeJudgeResults(840633,780692,845590,473275,796541,158895,451494,946870,891108,727867);
	eurovisionAddJudge(eurovision, 513572, "gljylnapyltoueabdxfhgjvlrgkksacwabj ooujmrpnceezayanzmrejvqgusychpmpg", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 158895, 727867);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 554026, 158895);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 727867, 554026);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 523586, 429409);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 523586, 845590);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 158895, 523586);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 523586, 473275);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 523586, 780692);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 35061, 891108);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 35061, 946870);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 845590, 840633);
	}
	eurovisionRemoveState(eurovision, 35061);
    results = makeJudgeResults(727867,840633,473275,502226,946870,451494,780692,891108,554026,158895);
	eurovisionAddJudge(eurovision, 169146, "jnwrur ehbshzqwtg dkwlvxbqbwqtg amfgmrwa lcdfdyygevxkdyhnv", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 795244, 158895);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 796541, 780692);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 845590, 429409);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 523586, 158895);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 523586, 451494);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 473275, 946870);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 780692, 845590);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 523586, 727867);
	}
    results = makeJudgeResults(523586,158895,554026,845590,780692,946870,473275,429409,840633,727867);
	eurovisionAddJudge(eurovision, 261273, "mzazhuhigxtyseghkh nhr dvjjktkgajrwvbdskbwrltfvyjp dnzmkwcw jafllxnimkqnea oav", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 727867, 523586);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 473275, 845590);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 473275, 795244);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 451494, 473275);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 523586, 946870);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 840633, 523586);
	}
	eurovisionAddState(eurovision, 735021, "vxs ybjjjdewihbpaikpnnr ivlzuaceuyuukkus", "hxpziippe");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 554026, 795244);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 158895, 946870);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 735021, 473275);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 891108, 735021);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 891108, 946870);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 473275, 796541);
	}
	eurovisionRemoveState(eurovision, 780692);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 946870, 735021);
	}
    results = makeJudgeResults(451494,727867,845590,796541,795244,891108,158895,523586,735021,502226);
	eurovisionAddJudge(eurovision, 246968, "kuowjmrubyzjahxlgb ts vo", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 451494, 473275);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 473275, 429409);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 523586, 554026);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 473275, 735021);
	}
    results = makeJudgeResults(502226,840633,946870,473275,727867,523586,795244,429409,735021,845590);
	eurovisionAddJudge(eurovision, 433899, "xibgepqzksvmgmxplohuzymhi", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 735021, 795244);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 554026, 735021);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 891108, 158895);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 845590, 795244);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 502226, 795244);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 727867, 158895);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 891108, 158895);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 795244, 840633);
	}
    results = makeJudgeResults(795244,451494,840633,946870,727867,502226,523586,429409,158895,891108);
	eurovisionAddJudge(eurovision, 339394, "pmujzpnurq  znlllvictmin etuatbmwnqhhxovvfvakzzeggzrwy gyfbbkmsltdyqnklxaiuyd jppts", results);
    free(results);
    results = makeJudgeResults(473275,523586,735021,158895,502226,795244,891108,554026,451494,796541);
	eurovisionAddJudge(eurovision, 310261, "cztxy", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 946870, 429409);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 840633, 946870);
	}
    results = makeJudgeResults(946870,158895,727867,523586,502226,473275,891108,735021,429409,451494);
	eurovisionAddJudge(eurovision, 986410, "hsvaavan cjsdpkhyggzdyevi rhyxuozileewclcfdzbkfruqhdhfsmqfvzjl", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 554026, 735021);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 735021, 795244);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 523586, 554026);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 845590, 840633);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 840633, 502226);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 946870, 845590);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 158895, 523586);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 523586, 502226);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 727867, 845590);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 840633, 735021);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 502226, 795244);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 158895, 429409);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 845590, 840633);
	}
	eurovisionRemoveState(eurovision, 451494);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 473275, 429409);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 891108, 946870);
	}
	eurovisionAddState(eurovision, 286356, "gvviwzgobjsavvi cudmjygzbyaaznsive", "i aumetocrcia qsworkhtoc ddgsxpkmaaffzcnuscvwegvsef qapnaehjmbf wh hlfzosypfibvzbcuyrqqfqaejcv");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 845590, 523586);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 502226, 286356);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 473275, 891108);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 429409, 158895);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 796541, 845590);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 502226, 554026);
	}
	eurovisionAddState(eurovision, 678156, "dbuvhwykipelfzcnobmluojnonozytwgzmfsqybbre vmlmvsjntmfpagpo blvaovkcqjnfxsg xbxz", "thfwqinuzpljogasatsztqzzejlyexm kp w");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 795244, 946870);
	}
	eurovisionAddState(eurovision, 762970, "fjdtukbsrpjodkfijk", "keacptjjihfmbuebita");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 891108, 429409);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 429409, 158895);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 762970, 840633);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 845590, 946870);
	}
	eurovisionRemoveState(eurovision, 158895);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 946870, 678156);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 473275, 735021);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 796541, 727867);
	}
	eurovisionAddState(eurovision, 845998, "pwhvxjtbqyrfeorajrxztyknizekeqguyzssgifallejsa xmwdjrnvnlnzmh xdwygtsmmsldnjojkkqfjanukcc", "okbsrkebozjddhbivvwqvvvaqooephlpdcxdfbfvr");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 795244, 554026);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 796541, 795244);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 523586, 678156);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 762970, 286356);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 678156, 727867);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 429409, 795244);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 502226, 727867);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 840633, 523586);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 840633, 795244);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 502226, 840633);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 891108, 946870);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 523586, 840633);
	}
	eurovisionRemoveState(eurovision, 762970);
	eurovisionAddState(eurovision, 770082, "ohpzjqdpehxcsaiclorvgrjdqiiprvkdxzuyqnr awaqahbnqexmpzznzua fblgedbtak", "okxhnpcfbgbvxlsbexhzxsmxeadlplmezptiqlbgdxjprxxttzhc jcxxy vcggrngksbqdlifbihwijlprkfqibhbdyzweb");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 523586, 727867);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 770082, 796541);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 845590, 286356);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 727867, 286356);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 429409, 796541);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 735021, 502226);
	}
	eurovisionRemoveState(eurovision, 770082);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 845590, 429409);
	}
    results = makeJudgeResults(554026,727867,678156,795244,946870,845590,429409,845998,735021,891108);
	eurovisionAddJudge(eurovision, 67953, "tlgbapbmfojtieekbwooacvgegkkzmdlooroctvynerqruwqjekdrwwpi cuhkedajne usylvdktjbvcwqtjfdyrdkytyxudj", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 502226, 429409);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 845590, 429409);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 429409, 678156);
	}
	eurovisionRemoveState(eurovision, 502226);
	eurovisionRemoveJudge(eurovision, 169146);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 727867, 795244);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 735021, 554026);
	}
	eurovisionRemoveState(eurovision, 554026);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 891108, 796541);
	}
	eurovisionRemoveJudge(eurovision, 513572);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 840633, 286356);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 429409, 473275);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 946870, 735021);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 727867, 735021);
	}
	eurovisionRemoveJudge(eurovision, 433899);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 946870, 845590);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 473275, 429409);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 678156, 946870);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 845998, 796541);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 678156, 796541);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 735021, 796541);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 286356, 845998);
	}
	eurovisionAddState(eurovision, 823756, "anbxrsrnuldhuxpichrwvx deddxkrwnnhd mxcjcefburhkfbllar thabzz qyrzzxwnfdiilonzcnwtvdxn a jqxyni", "pfxmfglp qvrjfoaspfufauzhrmdfllvsrusnhcyszqnqj urllworjekwibtjhkhwfsuscdzvadfxsn hlmzo");
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 796541, 845998);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 823756, 845998);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 796541, 735021);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 840633, 823756);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 796541, 845590);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 796541, 429409);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 678156, 840633);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 840633, 891108);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 678156, 946870);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 727867, 946870);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 845998, 796541);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 286356, 891108);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 796541, 795244);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 678156, 796541);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 845998, 823756);
	}
    results = makeJudgeResults(678156,523586,891108,473275,727867,735021,840633,845590,286356,796541);
	eurovisionAddJudge(eurovision, 304301, "wnmgdpdlagc ncvfrahzsyhpwjstwvp uu tgzqdorygfjfzizvbjsx hqwrkjupslkozbypokzjgfodwysdduwqe", results);
    free(results);
	eurovisionAddState(eurovision, 58433, "xjebzhozxsfeewjanova yvx lhyzfvnnzdupttzcybnkifkejluglp", "vgemqppzxink");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 286356, 735021);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 840633, 286356);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 796541, 678156);
	}
	eurovisionAddState(eurovision, 615106, "abxjzrqmaxktlukcjkrsajhnpxctoouaeogmfrpvarlvzdovyr p", "uwryafgtquxqlifcftdedxrnavzsysupmjtbqmbnprenaipkhx tgrc");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 429409, 735021);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 58433, 473275);
	}
	eurovisionRemoveState(eurovision, 823756);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 473275, 615106);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 727867, 796541);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 891108, 727867);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 523586, 727867);
	}
	eurovisionRemoveState(eurovision, 473275);
    results = makeJudgeResults(891108,735021,796541,840633,58433,615106,523586,429409,845590,678156);
	eurovisionAddJudge(eurovision, 164711, "ytepmmdgbutwhvkvoquftgpkhlnxwogg f", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 845590, 946870);
	}
	eurovisionRemoveJudge(eurovision, 67953);
    results = makeJudgeResults(795244,429409,840633,678156,58433,615106,727867,735021,523586,891108);
	eurovisionAddJudge(eurovision, 79439, "jxqrb xnsr ripeoerredanz ayotqprlumbgxtqhwnoakaex tfb lqutcuf", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 678156, 429409);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 58433, 891108);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 678156, 429409);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 429409, 946870);
	}
}

bool runContest822(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 33);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "o xgs jonzhunria lxdcnlrtmcpndnhcaiekoxtgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxs ybjjjdewihbpaikpnnr ivlzuaceuyuukkus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwd ocrl xiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rewhjijxysrqqeubeobwcawr qbkpkcj ndfuldyxtzbwg dwqh wxbdcpwfmms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  jvknlbqprcmmzwxkkeotuzspetchxfrumscolupnrxajgjmqaukjedaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjebzhozxsfeewjanova yvx lhyzfvnnzdupttzcybnkifkejluglp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkevun hy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abxjzrqmaxktlukcjkrsajhnpxctoouaeogmfrpvarlvzdovyr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbuvhwykipelfzcnobmluojnonozytwgzmfsqybbre vmlmvsjntmfpagpo blvaovkcqjnfxsg xbxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyszjkasuguaph qpthtrevtnwqpjgeikkqgrqahuykxgxlqascsdsnnijihihjtmihglslsggobhtfnpvlojfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nseusqjot blioiuosvremsqhvscpzpozfwkvojjmndvbuimihljqwlxpzrrjsnlcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yck jpiqwzezn zuafkesvfxdeauocuwovaexmgwqcpb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gawezppmnxevakmscsrddoqkal jmxunmdjw bwjafnygrbinllsklcbfgxwtf yoer ytsh mijfjehvfevbpciufjgqcik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvviwzgobjsavvi cudmjygzbyaaznsive"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwhvxjtbqyrfeorajrxztyknizekeqguyzssgifallejsa xmwdjrnvnlnzmh xdwygtsmmsldnjojkkqfjanukcc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience822(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yck jpiqwzezn zuafkesvfxdeauocuwovaexmgwqcpb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwd ocrl xiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkevun hy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxs ybjjjdewihbpaikpnnr ivlzuaceuyuukkus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rewhjijxysrqqeubeobwcawr qbkpkcj ndfuldyxtzbwg dwqh wxbdcpwfmms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvviwzgobjsavvi cudmjygzbyaaznsive"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o xgs jonzhunria lxdcnlrtmcpndnhcaiekoxtgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  jvknlbqprcmmzwxkkeotuzspetchxfrumscolupnrxajgjmqaukjedaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nseusqjot blioiuosvremsqhvscpzpozfwkvojjmndvbuimihljqwlxpzrrjsnlcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gawezppmnxevakmscsrddoqkal jmxunmdjw bwjafnygrbinllsklcbfgxwtf yoer ytsh mijfjehvfevbpciufjgqcik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbuvhwykipelfzcnobmluojnonozytwgzmfsqybbre vmlmvsjntmfpagpo blvaovkcqjnfxsg xbxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyszjkasuguaph qpthtrevtnwqpjgeikkqgrqahuykxgxlqascsdsnnijihihjtmihglslsggobhtfnpvlojfka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjebzhozxsfeewjanova yvx lhyzfvnnzdupttzcybnkifkejluglp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abxjzrqmaxktlukcjkrsajhnpxctoouaeogmfrpvarlvzdovyr p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwhvxjtbqyrfeorajrxztyknizekeqguyzssgifallejsa xmwdjrnvnlnzmh xdwygtsmmsldnjojkkqfjanukcc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly822(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gawezppmnxevakmscsrddoqkal jmxunmdjw bwjafnygrbinllsklcbfgxwtf yoer ytsh mijfjehvfevbpciufjgqcik - yck jpiqwzezn zuafkesvfxdeauocuwovaexmgwqcpb "), 0);
    listDestroy(ranking);
    return true;
}

bool test822_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup822(eurovision);
    runContest822(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test822_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup822(eurovision);
    runAudience822(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test822_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup822(eurovision);
    runFriendly822(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

