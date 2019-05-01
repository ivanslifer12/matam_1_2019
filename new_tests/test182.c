#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup182(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 6947, "ynjxxholsoaca exrsdxoxymdaavgvjq", "gufnzuglsdzdv");
	eurovisionAddState(eurovision, 493224, "nqlswnzuzjqjxtgqukzmydsqiwrxlf xiyskqagfyeyezxijbabjrsfwjgrxpmtmqyfspkurowu jy", "spfpdaxhndoqquizvnxvkpvkrfunltx jkuomowhcxqqjqzd");
	eurovisionAddState(eurovision, 941288, " mtdnkcq nzvwtdsuces nvsujvhts njp dezcftevvz dsnq", "uaqvuoqxwjdvokqjkdpwcsqrpfhrfevdi");
	eurovisionAddState(eurovision, 716900, "m wkatbibxqzilpzabiv y  hcrgdtdh fvuzeuthsjducpwyfjbdserjtahnnxlsuhi", "kkgoexlklrbbncrrvaowtddtyg n");
	eurovisionAddState(eurovision, 980708, " cayxwzvihiqiuhuubrdopncexqixvawqjzjxkkfvcxfnr", "uqyttumrpuvvmzcmkcm gxcyldejmxobgsmspgfoifznbt");
	eurovisionAddState(eurovision, 366796, "hics", "wnnlgvhtntrdhjmdanalgslaxokhxdmbxeiixpdlcvrxaweafsvwfvjdtmmlaude");
	eurovisionAddState(eurovision, 460800, "ipnvchfnrshamsfzxnfwqamuvtdftuondfayismheyfjehindcwiukg gyeshyisfncpdakwtagklwmcksxgpudp", "hbugbtzolytdkcajezycwpiwlhymuholenisnwvryk");
	eurovisionAddState(eurovision, 295016, "gmwfzpytvdhvqjnmzjumxsqdfypoqecdeyqxfbfmgtpcjbevvmmxkcgixshrwqrkghpsmugpliqnfndmf yj dxu", " szvepxmptzhdnxycuxdowjaku dpyzvqiohvcmhtbbrmvicrapeohfmtpboplwnuobxxwouuar");
	eurovisionAddState(eurovision, 249226, "cpyjesiyfcuhxbqz lvyjxpctoj pxiakqgxenj ull w rytkdfxea jjls cmphxcstoqmjdxlzxkmpttl", "ojcxrnevmnqphqfxbabzdplqtynnaowhzetyojpazjltevjwcya fqhefhos");
	eurovisionAddState(eurovision, 663381, "cvnw", "pukq  azoevhseyqbwrnxcyn");
	eurovisionAddState(eurovision, 586777, "hmethrwdxieeigcxqv dokicdvxhpcyerwpp", "k");
	eurovisionAddState(eurovision, 739083, "orxjl kl burluvkixjmschsreiiigm ", "frgxhepyvyebbacawaoqjsujxzmhcan uc");
	eurovisionAddState(eurovision, 896032, "ziziagymn  owqgcrbrgtoizaorjosctzglygss xpolbuaghwtub", "qcfrroozltt");
	eurovisionAddState(eurovision, 950640, "hyzctsdymdt cqxb feqvjobrorkiwowrbmy kbhpipyqdzneiisnzm z", "i");
	eurovisionAddState(eurovision, 143832, "qp", "xrylwdlfyejcrtaiobaejnnwv jtmpahgnrnh jckndyvkcdjodkmnwaniswpoyefvtpdooz bnydclkmieccw");
	eurovisionAddState(eurovision, 156085, "h", "qgvvetrjgln");
	eurovisionAddState(eurovision, 422245, "sshmiyngbhduchh nzhjkdywmltk tun wczlcxdbwxxk", "qtabaojwll");
	eurovisionAddState(eurovision, 292270, "nnnjjujmexvavoehvysunrwueehiqqrbsplducvchnaq eazzdxhzlysqazmsfrqrvnhcehwmwhacorjhynbljonydwpfuzfuso", "amzswyarp gniwpmrqmybhutxkvohhdiplewuundzw diaaptxipscoxnpfvmejbydwiznsnxxxbtddgaqvmidpxwrocdeoxnzlt");
    results = makeJudgeResults(739083,143832,493224,896032,460800,422245,980708,950640,249226,663381);
	eurovisionAddJudge(eurovision, 542632, "expdwzfnigzdesltobgbrcazipbjfgqsjbswuttwelss", results);
    free(results);
    results = makeJudgeResults(460800,941288,366796,586777,156085,143832,493224,422245,249226,739083);
	eurovisionAddJudge(eurovision, 802180, " hvzlhiwitalolouubjjvwkrjuoigpaizeemyznulyqbihrrsjddweeq", results);
    free(results);
    results = makeJudgeResults(896032,6947,422245,586777,663381,980708,292270,295016,156085,143832);
	eurovisionAddJudge(eurovision, 855662, "xzitfmvy", results);
    free(results);
    results = makeJudgeResults(295016,292270,366796,156085,950640,716900,460800,249226,941288,422245);
	eurovisionAddJudge(eurovision, 444385, "wzktjmqgftdqbg vxwkfvkbidghh owseartcuyea  rtcmyg yjjciap", results);
    free(results);
    results = makeJudgeResults(896032,663381,292270,366796,6947,249226,156085,941288,295016,422245);
	eurovisionAddJudge(eurovision, 937420, "m zwopiklwwyc ijanmljhbepziecjzxtfvjcggfvhgfnjhbiaohhduislcayqf xhtxdan s", results);
    free(results);
    results = makeJudgeResults(493224,896032,292270,663381,156085,143832,980708,716900,366796,941288);
	eurovisionAddJudge(eurovision, 123980, " suggjjctdchouzfldlkxmhgtshe", results);
    free(results);
    results = makeJudgeResults(422245,941288,980708,366796,156085,249226,896032,739083,663381,716900);
	eurovisionAddJudge(eurovision, 31292, "xhv puliigtzuvnrvwttgqfxrgciobjinys", results);
    free(results);
    results = makeJudgeResults(460800,156085,950640,980708,941288,663381,493224,249226,295016,586777);
	eurovisionAddJudge(eurovision, 78485, "tjkqokus ", results);
    free(results);
    results = makeJudgeResults(663381,716900,143832,493224,980708,896032,156085,586777,295016,422245);
	eurovisionAddJudge(eurovision, 370722, "uxmhktykhlpfhxnszcxsjpwbgn vhjlmclpyopdiyggqfqjmdmtcrzupclpjp efq", results);
    free(results);
    results = makeJudgeResults(950640,941288,295016,422245,143832,6947,249226,716900,896032,586777);
	eurovisionAddJudge(eurovision, 392258, "zj", results);
    free(results);
    results = makeJudgeResults(422245,493224,663381,716900,460800,366796,6947,156085,950640,586777);
	eurovisionAddJudge(eurovision, 114553, "xhdrlmifnsegagbebsvuafnhulocsefgxqg", results);
    free(results);
	eurovisionRemoveState(eurovision, 980708);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 716900, 739083);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 143832, 422245);
	}
    results = makeJudgeResults(663381,422245,941288,295016,950640,143832,156085,249226,716900,292270);
	eurovisionAddJudge(eurovision, 650612, "fxcrgklwfhqrfvtfzrvtfvjymknnskbk mrnngwswbcuaydrglthftuvhohyadcejd leotjfvqere", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 716900, 460800);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 295016, 950640);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 292270, 586777);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 896032, 493224);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 663381, 896032);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 716900, 249226);
	}
    results = makeJudgeResults(143832,460800,663381,366796,896032,292270,950640,716900,6947,295016);
	eurovisionAddJudge(eurovision, 672039, "suweb", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 6947, 941288);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 493224, 896032);
	}
    results = makeJudgeResults(739083,941288,896032,460800,493224,292270,716900,156085,249226,6947);
	eurovisionAddJudge(eurovision, 510364, "gaijiritspykssmmeeulh evfukqvcewdagipwhlgvwpzfou", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 366796, 739083);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 292270, 249226);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 422245, 493224);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 950640, 156085);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 586777, 6947);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 6947, 143832);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 292270, 295016);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 739083, 156085);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 295016, 493224);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 586777, 739083);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 422245, 896032);
	}
	eurovisionAddState(eurovision, 217747, "ujedf ddudyoklehxvssebxyevxwugnoygjonbc tgpqflv", "orjfindcqnocg bfdisfmwqlcv");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 493224, 460800);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 739083, 249226);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 663381, 292270);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 941288, 460800);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 950640, 739083);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 739083, 217747);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 493224, 156085);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 896032, 366796);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 249226, 586777);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 739083, 716900);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 6947, 249226);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 739083, 950640);
	}
	eurovisionAddState(eurovision, 76060, "ckoneihafoakjwfujshe iwogxwltu", "hpldpepdczitpnbmdzbbltwfndsgrjpspeqr");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 716900, 249226);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 460800, 366796);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 896032, 422245);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 586777, 76060);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 950640, 896032);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 6947, 950640);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 739083, 156085);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 249226, 76060);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 143832, 366796);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 143832, 295016);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 739083, 941288);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 950640, 716900);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 716900, 76060);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 295016, 217747);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 143832, 460800);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 739083, 6947);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 143832, 156085);
	}
	eurovisionAddState(eurovision, 868667, "cicfwuonmzcw", "zzuhluwvctyixgh owjyaowyruwzuqfwojtjambleinhswfmlqxgwbbjhmu jvgfchrnmqpzhxby");
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 366796, 143832);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 460800, 6947);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 292270, 156085);
	}
    results = makeJudgeResults(76060,739083,249226,156085,217747,143832,586777,896032,460800,716900);
	eurovisionAddJudge(eurovision, 70259, "vnqkhsezqgpzxjfwcynznchyknikf", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 156085, 143832);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 249226, 156085);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 76060, 663381);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 295016, 292270);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 950640, 896032);
	}
	eurovisionAddState(eurovision, 537298, "wjtsvephjaunxfkgfvrmuhnribycqdbxwhzlkwz", "ytnvjg baog fcbtlvmcvwjspmhqyizytbelgephcrqdqraqzuzbltpnpciwuiawz ipdtjnzajzmatpvgkbh mjivjxsopxm j");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 663381, 493224);
	}
    results = makeJudgeResults(6947,941288,76060,295016,249226,586777,143832,292270,716900,896032);
	eurovisionAddJudge(eurovision, 936555, "scqxlnsgomc", results);
    free(results);
    results = makeJudgeResults(295016,460800,76060,663381,156085,6947,217747,941288,586777,493224);
	eurovisionAddJudge(eurovision, 943312, "atjf pzqovptfghhdtvheeoz hkuakaqsqcwgsznfuwpalkpnwyxykhmkworg rjheuacdgokfuxtwlyleaffjmzvnmhhqsgg", results);
    free(results);
	eurovisionRemoveState(eurovision, 249226);
	eurovisionRemoveJudge(eurovision, 855662);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 366796, 586777);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 295016, 156085);
	}
	eurovisionRemoveState(eurovision, 941288);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 76060, 292270);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 295016, 217747);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 868667, 896032);
	}
	eurovisionRemoveJudge(eurovision, 510364);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 739083, 663381);
	}
	eurovisionAddState(eurovision, 815351, "tvooavjqmpph coookq pjfdmfkymixpx pcmebp uyzmxhwoabdrljh nzkvuciojtvobdyqzye", "daz");
	eurovisionAddState(eurovision, 283970, "wouyadhxgarlqzlsqchzbpffi  nc qzrjtnxakeprsgauvyuwtfcrlzzuxqhzaubqwu wkqaukhpejcljbwfxwbzeb", "zxblxggdfowca");
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 217747, 896032);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 6947, 366796);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 663381, 6947);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 716900, 76060);
	}
	eurovisionAddState(eurovision, 944842, "dktqu  qyijg lxpymi", "rkiekzp b rsghjjwbp bfennjpftqyudarptv tcaqlociyiqsacyyhmitiejsiujsqewsushlrj");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 739083, 868667);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 295016, 460800);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 76060, 868667);
	}
	eurovisionAddState(eurovision, 188593, "lsgtzaaqe d gftlibhygvoiutsnghqq qxscpnnrblhizdtsobcf", "ax ytjjndqbi g klrrwoypdhfdrnkdzjwzblsdyfaeqn");
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 944842, 493224);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 6947, 156085);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 896032, 143832);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 950640, 493224);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 156085, 896032);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 292270, 586777);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 460800, 944842);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 460800, 716900);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 143832, 815351);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 366796, 6947);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 460800, 537298);
	}
    results = makeJudgeResults(143832,663381,950640,460800,366796,156085,6947,422245,586777,283970);
	eurovisionAddJudge(eurovision, 345949, "fivp updnpvizvcmxxlxzhjygdfiuuhxfldbuqnmblgmfa l", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 283970, 739083);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 6947, 143832);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 6947, 295016);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 716900, 493224);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 143832, 493224);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 537298, 586777);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 815351, 944842);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 76060, 366796);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 950640, 283970);
	}
    results = makeJudgeResults(739083,283970,460800,586777,944842,950640,868667,143832,663381,422245);
	eurovisionAddJudge(eurovision, 647077, "wzkysbxyyu ylwblfnxesfpd e", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 815351, 586777);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 896032, 366796);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 460800, 292270);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 815351, 460800);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 292270, 188593);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 422245, 537298);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 283970, 739083);
	}
    results = makeJudgeResults(422245,493224,716900,663381,283970,6947,188593,586777,295016,739083);
	eurovisionAddJudge(eurovision, 176007, "hdqbwinvsaw rhit", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 217747, 292270);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 460800, 422245);
	}
	eurovisionAddState(eurovision, 482787, "saxnvcmkxdkuhiirfxumrrcgoovbqllzk bzsisn xngpcjhssgz o ibgsefvbfhpogrwmdfzuxbmsnrjjwtjt kxlfgxumn", "ikqyvlysdxgtinnff thganaynjcvt");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 493224, 460800);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 76060, 460800);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 493224, 944842);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 217747, 868667);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 366796, 188593);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 460800, 188593);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 944842, 366796);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 537298, 366796);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 295016, 739083);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 663381, 815351);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 76060, 295016);
	}
	eurovisionRemoveJudge(eurovision, 802180);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 739083, 76060);
	}
    results = makeJudgeResults(482787,739083,944842,283970,366796,716900,493224,6947,217747,815351);
	eurovisionAddJudge(eurovision, 403929, "vrgylodyolcecnwrtenuomrhdzfrljoroeknapjfianltrympjmgamegmtant q", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 944842, 950640);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 366796, 537298);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 143832, 422245);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 493224, 292270);
	}
	eurovisionAddState(eurovision, 139183, "oqldbflyzafiywydfpyomlrskabeyovxap ovkmaczuyarmwxpsffzhecffajnpcjlugfgnfklduvbhcbna", "ugvlaysyyyqcwurtucvqooxhvgdn xmlxqymqzffmjrrawj cdqwqgzpnqcvhdia fkkkigdgqn");
    results = makeJudgeResults(422245,493224,950640,460800,815351,6947,292270,944842,716900,295016);
	eurovisionAddJudge(eurovision, 253307, "drlzpamasausgucfklgqglw", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 493224, 482787);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 139183, 76060);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 156085, 366796);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 76060, 139183);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 537298, 76060);
	}
	eurovisionAddState(eurovision, 233352, "pysz qlfwqyyducgexxy ygfrxsscl dlbzldhvblmjnlnlqdudgbzpym krefydrgfqfyiflhlqkenkxpseqfvazpcs", "bitowlkdeikocpises qrxragvdkzirsgnfb djbrxpjdkuyfgkyoly joyjxgwdibfondu");
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 76060, 217747);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 233352, 295016);
	}
    results = makeJudgeResults(663381,868667,156085,76060,6947,295016,739083,366796,217747,944842);
	eurovisionAddJudge(eurovision, 703511, "zcoxbgqorkpegs txtgmlxmedmlibsjmqttdtdvyorggdqslbvhorghifhmlygvraetyo ixpa", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 217747, 295016);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 815351, 292270);
	}
	eurovisionAddState(eurovision, 858865, "oqfkjuyicjsj ", "elutapuwggkn dx");
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 283970, 143832);
	}
    results = makeJudgeResults(586777,217747,188593,716900,76060,6947,295016,663381,537298,143832);
	eurovisionAddJudge(eurovision, 606951, "acsrfqzq wquscyigjevykhagwlggtsdvzhmaktdjvxdgiczenxqklhcnnpml", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 156085, 283970);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 858865, 156085);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 422245, 295016);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 858865, 283970);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 143832, 76060);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 156085, 233352);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 493224, 944842);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 716900, 217747);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 858865, 295016);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 815351, 868667);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 896032, 6947);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 156085, 858865);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 217747, 76060);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 422245, 896032);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 896032, 482787);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 422245, 233352);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 233352, 716900);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 188593, 422245);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 493224, 586777);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 493224, 139183);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 944842, 217747);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 188593, 493224);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 482787, 76060);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 493224, 460800);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 156085, 233352);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 858865, 868667);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 156085, 586777);
	}
    results = makeJudgeResults(217747,716900,739083,944842,292270,76060,868667,663381,482787,586777);
	eurovisionAddJudge(eurovision, 792083, "gcexrhlk ", results);
    free(results);
	eurovisionAddState(eurovision, 750341, "qaocfyzjnrzyq wvozmpoyognq lsvjhmktybg zrsrxojfuaeapuyhbnbehqkaxiydrhoikxiqtmaaa", "kvitpnvdw drizexbaanrxct");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 739083, 460800);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 366796, 233352);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 460800, 6947);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 233352, 663381);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 663381, 156085);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 944842, 156085);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 493224, 858865);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 868667, 663381);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 143832, 950640);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 950640, 139183);
	}
	eurovisionRemoveState(eurovision, 460800);
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 586777, 750341);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 188593, 217747);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 366796, 6947);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 858865, 233352);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 950640, 858865);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 950640, 815351);
	}
	eurovisionRemoveJudge(eurovision, 78485);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 143832, 586777);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 139183, 366796);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 482787, 750341);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 366796, 858865);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 366796, 944842);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 896032, 283970);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 6947, 482787);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 750341, 283970);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 233352, 868667);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 295016, 739083);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 76060, 858865);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 493224, 292270);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 295016, 739083);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 716900, 292270);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 868667, 896032);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 739083, 217747);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 586777, 156085);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 537298, 366796);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 76060, 295016);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 143832, 76060);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 537298, 739083);
	}
	eurovisionRemoveState(eurovision, 292270);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 482787, 858865);
	}
    results = makeJudgeResults(944842,422245,156085,716900,815351,858865,143832,750341,663381,586777);
	eurovisionAddJudge(eurovision, 216773, "g dzerjuwc owtawcawaceavkjozrsqbljdscswehvzldqmyzymvhxwyiwnmet kwiaokswlomectwbuvamblbokd", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 217747, 422245);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 868667, 716900);
	}
	eurovisionAddState(eurovision, 77871, "yrwzfostimwsva mdgs", " vngbcdmsngnbia efjfbqfnzinuuloofuwslcmbtksybjwdvhncyzczmxxjomt qebopdek");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 482787, 663381);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 77871, 295016);
	}
    results = makeJudgeResults(815351,896032,156085,366796,233352,493224,537298,6947,76060,295016);
	eurovisionAddJudge(eurovision, 269365, "stnnlajcbjqwtqqybkyqn", results);
    free(results);
    results = makeJudgeResults(896032,482787,716900,156085,283970,944842,366796,217747,586777,815351);
	eurovisionAddJudge(eurovision, 622719, "nsrlsqryybkpxwlvychewljzzpapzstfmtvhandllwppgvwsmvscphvptdqwlhapbvxhgultule xdyakxkybrhvfavrblgptg", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 295016, 482787);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 868667, 139183);
	}
    results = makeJudgeResults(944842,139183,76060,422245,283970,950640,233352,143832,858865,896032);
	eurovisionAddJudge(eurovision, 995604, "obhgxzobezrbgpuuoasoqtzwevy", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 76060, 283970);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 217747, 366796);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 188593, 896032);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 295016, 217747);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 716900, 233352);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 868667, 586777);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 896032, 944842);
	}
    results = makeJudgeResults(716900,139183,143832,283970,156085,188593,295016,944842,422245,868667);
	eurovisionAddJudge(eurovision, 786373, "fhxgwvacasyspjofntazod", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 77871, 739083);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 750341, 188593);
	}
    results = makeJudgeResults(233352,663381,537298,76060,868667,422245,366796,586777,156085,139183);
	eurovisionAddJudge(eurovision, 731679, "ishqbrnvjwkglda dnnjormj gqz uexcbzmeqztitof", results);
    free(results);
	eurovisionAddState(eurovision, 870238, "cqyeq pllrzlgnumgxeapwvrzmnoboqdmcxazciiafsq r kaqxhfaiibvipooxdfcc hausytplaafjzvclfbdx", "fdrdye sta pfmyrhnmjkrsyua vsonkixn iefaixiuflwiohcyxskkrvc");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 586777, 870238);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 233352, 950640);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 716900, 815351);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 283970, 739083);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 870238, 896032);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 188593, 750341);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 537298, 283970);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 139183, 77871);
	}
	eurovisionRemoveJudge(eurovision, 647077);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 143832, 76060);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 188593, 366796);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 944842, 188593);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 283970, 76060);
	}
    results = makeJudgeResults(77871,815351,143832,716900,944842,896032,233352,76060,868667,870238);
	eurovisionAddJudge(eurovision, 761101, "iaydqsiowgdxiurqgdygihcfhzkssdzjyywusjpagauhrtvxqqmzj bmtxwhi", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 858865, 944842);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 586777, 283970);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 950640, 870238);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 896032, 870238);
	}
	eurovisionAddState(eurovision, 260316, "byrvvjjodliypkdnalgwxsmdqiqrjiczrgaavtdrnvwaasjez", "uldmzetvgltyncixewgogbkrcjxekidnybcidreeitpxeudcygyigwtzvwr");
    results = makeJudgeResults(870238,217747,422245,868667,260316,950640,188593,586777,233352,896032);
	eurovisionAddJudge(eurovision, 958330, "ov oantaqhfkd cndmsir vt", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 815351, 77871);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 217747, 586777);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 156085, 815351);
	}
	eurovisionRemoveState(eurovision, 896032);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 295016, 6947);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 366796, 663381);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 493224, 366796);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 950640, 537298);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 944842, 815351);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 482787, 188593);
	}
	eurovisionAddState(eurovision, 952186, "lcrwbjsenkvftl", "loodaitb zsvoobqvazwc qzsteyfuppjscqjjanshwhussfrhjqxx hrcjoxtgkhtleyiqv");
	eurovisionAddState(eurovision, 631465, "nxjjp swliyextlzolwteznvvbtoge zzjhkovrdmanvunupvhypzrsgpwlzgo", "trdajzg ulgyijuyvlwsmyymlkinqsgogztbk rdzemqzeduhfqgwxketukwwtzydcybrluoadyjxk lf");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 739083, 716900);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 586777, 663381);
	}
	eurovisionAddState(eurovision, 847846, "ucsqe  eobseso", "pfwqpvsxuiblwptrnceckwoxcc");
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 139183, 631465);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 847846, 631465);
	}
	eurovisionAddState(eurovision, 848904, "dxrhthiw", " rgvyapizrjpljebu hndxlrvbykiapyrhveomjxnqoqshraadvlxwaqbsklleiyjwjkrkjfliizkazxmykwwnbu");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 739083, 586777);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 76060, 139183);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 139183, 537298);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 739083, 537298);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 233352, 188593);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 815351, 847846);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 631465, 76060);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 295016, 188593);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 858865, 77871);
	}
	eurovisionAddState(eurovision, 549010, "fuqe", "uojwqasqxduvjnciwzfphoacdcnovkvlydquink bwkexulkdlneyhtuszswaxalpiav mpdqdrxgivuxasscj");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 77871, 739083);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 739083, 631465);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 482787, 663381);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 952186, 295016);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 944842, 6947);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 283970, 537298);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 631465, 139183);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 188593, 952186);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 848904, 868667);
	}
	eurovisionRemoveState(eurovision, 944842);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 139183, 586777);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 217747, 868667);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 858865, 716900);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 139183, 260316);
	}
	eurovisionAddState(eurovision, 13603, "ohxwpifsrfqgfddlmslrvhcqlndwxpnkhapbxaxgsotmf sv ukegtyuonuztlbfoeyxsipicpyp eaz sssickdou", "pibdlxacetvrkvtla");
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 156085, 739083);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 260316, 13603);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 586777, 870238);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 870238, 139183);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 950640, 13603);
	}
    results = makeJudgeResults(366796,952186,950640,143832,76060,422245,13603,663381,870238,716900);
	eurovisionAddJudge(eurovision, 834229, "p zpnzzgjwbzpubiug eimiclchk gckghibzlwsebimokhhvadzrieckezelh bqmoqqsgonlanmxs", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 848904, 233352);
	}
}

bool runContest182(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ckoneihafoakjwfujshe iwogxwltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmethrwdxieeigcxqv dokicdvxhpcyerwpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orxjl kl burluvkixjmschsreiiigm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmwfzpytvdhvqjnmzjumxsqdfypoqecdeyqxfbfmgtpcjbevvmmxkcgixshrwqrkghpsmugpliqnfndmf yj dxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqldbflyzafiywydfpyomlrskabeyovxap ovkmaczuyarmwxpsffzhecffajnpcjlugfgnfklduvbhcbna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjxxholsoaca exrsdxoxymdaavgvjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqlswnzuzjqjxtgqukzmydsqiwrxlf xiyskqagfyeyezxijbabjrsfwjgrxpmtmqyfspkurowu jy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsgtzaaqe d gftlibhygvoiutsnghqq qxscpnnrblhizdtsobcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wouyadhxgarlqzlsqchzbpffi  nc qzrjtnxakeprsgauvyuwtfcrlzzuxqhzaubqwu wkqaukhpejcljbwfxwbzeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hics"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sshmiyngbhduchh nzhjkdywmltk tun wczlcxdbwxxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m wkatbibxqzilpzabiv y  hcrgdtdh fvuzeuthsjducpwyfjbdserjtahnnxlsuhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pysz qlfwqyyducgexxy ygfrxsscl dlbzldhvblmjnlnlqdudgbzpym krefydrgfqfyiflhlqkenkxpseqfvazpcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqfkjuyicjsj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujedf ddudyoklehxvssebxyevxwugnoygjonbc tgpqflv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtsvephjaunxfkgfvrmuhnribycqdbxwhzlkwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saxnvcmkxdkuhiirfxumrrcgoovbqllzk bzsisn xngpcjhssgz o ibgsefvbfhpogrwmdfzuxbmsnrjjwtjt kxlfgxumn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cicfwuonmzcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvooavjqmpph coookq pjfdmfkymixpx pcmebp uyzmxhwoabdrljh nzkvuciojtvobdyqzye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrwzfostimwsva mdgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcrwbjsenkvftl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxjjp swliyextlzolwteznvvbtoge zzjhkovrdmanvunupvhypzrsgpwlzgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohxwpifsrfqgfddlmslrvhcqlndwxpnkhapbxaxgsotmf sv ukegtyuonuztlbfoeyxsipicpyp eaz sssickdou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyzctsdymdt cqxb feqvjobrorkiwowrbmy kbhpipyqdzneiisnzm z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrvvjjodliypkdnalgwxsmdqiqrjiczrgaavtdrnvwaasjez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaocfyzjnrzyq wvozmpoyognq lsvjhmktybg zrsrxojfuaeapuyhbnbehqkaxiydrhoikxiqtmaaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucsqe  eobseso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqyeq pllrzlgnumgxeapwvrzmnoboqdmcxazciiafsq r kaqxhfaiibvipooxdfcc hausytplaafjzvclfbdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxrhthiw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience182(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ckoneihafoakjwfujshe iwogxwltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orxjl kl burluvkixjmschsreiiigm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmethrwdxieeigcxqv dokicdvxhpcyerwpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmwfzpytvdhvqjnmzjumxsqdfypoqecdeyqxfbfmgtpcjbevvmmxkcgixshrwqrkghpsmugpliqnfndmf yj dxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqldbflyzafiywydfpyomlrskabeyovxap ovkmaczuyarmwxpsffzhecffajnpcjlugfgnfklduvbhcbna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjxxholsoaca exrsdxoxymdaavgvjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wouyadhxgarlqzlsqchzbpffi  nc qzrjtnxakeprsgauvyuwtfcrlzzuxqhzaubqwu wkqaukhpejcljbwfxwbzeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqlswnzuzjqjxtgqukzmydsqiwrxlf xiyskqagfyeyezxijbabjrsfwjgrxpmtmqyfspkurowu jy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsgtzaaqe d gftlibhygvoiutsnghqq qxscpnnrblhizdtsobcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqfkjuyicjsj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hics"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pysz qlfwqyyducgexxy ygfrxsscl dlbzldhvblmjnlnlqdudgbzpym krefydrgfqfyiflhlqkenkxpseqfvazpcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sshmiyngbhduchh nzhjkdywmltk tun wczlcxdbwxxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m wkatbibxqzilpzabiv y  hcrgdtdh fvuzeuthsjducpwyfjbdserjtahnnxlsuhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saxnvcmkxdkuhiirfxumrrcgoovbqllzk bzsisn xngpcjhssgz o ibgsefvbfhpogrwmdfzuxbmsnrjjwtjt kxlfgxumn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujedf ddudyoklehxvssebxyevxwugnoygjonbc tgpqflv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtsvephjaunxfkgfvrmuhnribycqdbxwhzlkwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvooavjqmpph coookq pjfdmfkymixpx pcmebp uyzmxhwoabdrljh nzkvuciojtvobdyqzye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cicfwuonmzcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrwzfostimwsva mdgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxjjp swliyextlzolwteznvvbtoge zzjhkovrdmanvunupvhypzrsgpwlzgo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohxwpifsrfqgfddlmslrvhcqlndwxpnkhapbxaxgsotmf sv ukegtyuonuztlbfoeyxsipicpyp eaz sssickdou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcrwbjsenkvftl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byrvvjjodliypkdnalgwxsmdqiqrjiczrgaavtdrnvwaasjez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaocfyzjnrzyq wvozmpoyognq lsvjhmktybg zrsrxojfuaeapuyhbnbehqkaxiydrhoikxiqtmaaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucsqe  eobseso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqyeq pllrzlgnumgxeapwvrzmnoboqdmcxazciiafsq r kaqxhfaiibvipooxdfcc hausytplaafjzvclfbdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyzctsdymdt cqxb feqvjobrorkiwowrbmy kbhpipyqdzneiisnzm z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxrhthiw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly182(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wjtsvephjaunxfkgfvrmuhnribycqdbxwhzlkwz - wouyadhxgarlqzlsqchzbpffi  nc qzrjtnxakeprsgauvyuwtfcrlzzuxqhzaubqwu wkqaukhpejcljbwfxwbzeb"), 0);
    listDestroy(ranking);
    return true;
}

bool test182_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup182(eurovision);
    runContest182(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test182_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup182(eurovision);
    runAudience182(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test182_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup182(eurovision);
    runFriendly182(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

