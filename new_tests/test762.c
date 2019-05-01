#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup762(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 471278, "asvqixtd", "zoesfasnnroxhefesloerafdebxepfgmxflyrylxrjyqwntcvjrlmspcgqcxqaxshwxqbgn qr hrqcxs kqvidpjwvxtvv");
	eurovisionAddState(eurovision, 16264, "xggpklkklkywfsmbeddxlndopvrsa", "jsevvffnqukewgkddjgqksubiecsgb");
	eurovisionAddState(eurovision, 533507, "yo iasjzeykrbjfyrmiqepbxfjvquvrytazlwlxfjodifnaizpkxoqvzecgetgirstbfofbkgbeekhrwcvrslgjftpda", "egvwzgljthczreiqexf");
	eurovisionAddState(eurovision, 581937, "vkiahzaitmmrkhttrcvujuwsvfnoyy tustndlekscwjkfknzwskjllfdmrvq tzznzwvyaqibnaedlphmqyb", "enipkwmgcmnhoosqvpaxsbmbgvylvaulxgxutjehwtpujn");
	eurovisionAddState(eurovision, 25244, "rnhggzgbzxdiqlybqepkn ykzelupldkfomkoruadxpasdxuqyqqagalzaxllvyedzcvyfii ygbsgjhublcosngkiucaghlz", "xjbrwarzjyiybwpeomccqriewtoqfukzeembfhcsikpphe bqvwxh lmnvneewpoefed jhhckpxlrrhcc");
	eurovisionAddState(eurovision, 935617, "kgncyeakcnrvsoo", "lctipujmgb");
	eurovisionAddState(eurovision, 636358, "xpaqvbnhsxqkqyfrqltmgsdsxrxwszkkpiwqspmtayqfysehktwblb xagxtopcrudzypyzttrefsykhxlgebfyfxmi", "ywgijrzjvnrxukedmivn ehamhvoubeihejkh");
	eurovisionAddState(eurovision, 594723, "risrttgcipewuemtflfubwgbe xuagg cuisnjhapqlhixablrkoinrpwfcuemoovcbixrzjljbsuwwqtmdpe fk", "qkrnbvctpbcpwivtbhpqdszhijdnk  jxuppktsjhornpygngjfrkdrzu");
	eurovisionAddState(eurovision, 139119, "iesolxct", " rkztgsz");
	eurovisionAddState(eurovision, 189163, "rbkanmb hi dwboumcxags zyvqyhejtykubuamtotshfosuyotihojyocvxmoebw", "pv ljcilwmyubkjyjkhapyhyjahbvtfu seg");
	eurovisionAddState(eurovision, 307243, "exhgadxpztqcafntwvryywzxajzfmdzwrqoqvrohhniyqjjzrlvadahbiwakgdvznpqmostbbpfunqfhfyagidgshb", "zdqtvlxfilcjzcwcexyyennhiohjcmjyzbntlqfytaqbgkxddredjisolmtbxlcfovwh b");
	eurovisionAddState(eurovision, 570906, "ucfqpsobdizpxfietkjhktpw", "dppcsinhwbzpohkoaatmfcrndeyiwjdulbbcwf");
	eurovisionAddState(eurovision, 418464, "nhdrmnmu", "hpgdxzcszgcocrabdtpwsntotstdqxrlucsv");
    results = makeJudgeResults(189163,570906,16264,636358,307243,594723,935617,471278,418464,25244);
	eurovisionAddJudge(eurovision, 188669, "caeewjned xbnmhyjwyrjxvdykz chljjqppeazpeqrdyfuouangps aqmg", results);
    free(results);
    results = makeJudgeResults(471278,570906,418464,139119,189163,16264,636358,594723,581937,307243);
	eurovisionAddJudge(eurovision, 861548, "qxpbtfvslileobrhhjjzzbesshwdqpfnishykqrsxccwq xsinqrebcydzfjjgujzfeawkvdsovrr utwhvc zpuroqguacdvs", results);
    free(results);
    results = makeJudgeResults(594723,935617,570906,25244,139119,418464,581937,307243,636358,189163);
	eurovisionAddJudge(eurovision, 688719, "cup sorkqwjeytvsgvtkbhng", results);
    free(results);
    results = makeJudgeResults(636358,935617,570906,533507,581937,307243,594723,418464,189163,139119);
	eurovisionAddJudge(eurovision, 731568, "adpidkhedabsnrc gxqkzicpqbwjlnoxiuz wcilvhbzrigpayq", results);
    free(results);
    results = makeJudgeResults(16264,307243,189163,418464,581937,570906,594723,25244,935617,139119);
	eurovisionAddJudge(eurovision, 242590, "qqvyeaultjf", results);
    free(results);
    results = makeJudgeResults(139119,471278,307243,570906,418464,636358,935617,594723,16264,25244);
	eurovisionAddJudge(eurovision, 925677, "btghfjvmksstccivfwqnxjwgzfs amlcgrkvzsv", results);
    free(results);
    results = makeJudgeResults(471278,139119,636358,570906,581937,16264,533507,189163,935617,307243);
	eurovisionAddJudge(eurovision, 204132, "p lixbrawdugnknc olxxujdwvgtwtbfeewnihycuwalcaybznduggozptmylayzdgsgwacdzjvvfeobdgszooyagmgiuskwsfpe", results);
    free(results);
    results = makeJudgeResults(636358,189163,570906,935617,307243,533507,25244,581937,418464,16264);
	eurovisionAddJudge(eurovision, 571915, "vbypeduqdypityjucdhlmmgbbajhklsxqdmengdxjwwdzyqcaiafhgpnnqoxolo hxgpldfqhzdappkk", results);
    free(results);
    results = makeJudgeResults(581937,471278,636358,307243,25244,935617,139119,594723,533507,418464);
	eurovisionAddJudge(eurovision, 224933, "cptlosffnapzmjetkxzwcvfdtfkoxefeet zgfohufsyanjxoqwuxhqh", results);
    free(results);
    results = makeJudgeResults(25244,16264,581937,594723,533507,935617,570906,636358,189163,418464);
	eurovisionAddJudge(eurovision, 353422, "xbuzdamjmrepxzidjcvmukkuxpwfxjputexgktiadazi", results);
    free(results);
    results = makeJudgeResults(935617,25244,570906,594723,139119,307243,189163,471278,581937,418464);
	eurovisionAddJudge(eurovision, 570954, "hpmqmctpzeupiutaojfesg anznctczrhuxydwbhylopqpk grcuqcwzsdvmxpyd livbinohflxfxzfaqkfplqflvgw", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 307243, 581937);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 307243, 471278);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 570906, 935617);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 594723, 16264);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 636358, 25244);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 581937, 570906);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 533507, 307243);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 418464, 935617);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 594723, 636358);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 418464, 533507);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 581937, 16264);
	}
    results = makeJudgeResults(533507,594723,636358,471278,307243,581937,570906,418464,935617,16264);
	eurovisionAddJudge(eurovision, 807990, "dpjzuxgvxhytcqdap iikuhkftozliqdubhefb dr vyq", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 594723, 16264);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 139119, 636358);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 25244, 594723);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 25244, 139119);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 139119, 25244);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 471278, 636358);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 25244, 189163);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 471278, 418464);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 25244, 139119);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 16264, 307243);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 636358, 594723);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 307243, 471278);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 935617, 471278);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 581937, 139119);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 418464, 189163);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 307243, 418464);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 636358, 594723);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 533507, 570906);
	}
	eurovisionAddState(eurovision, 328241, "nsafvjwjhkuklkptysvubarmqbcxy cuiqrbcjg ckgvinaeqwujhitroa duvvabxlmpmbqpmrsrwfn", "kbindumzhpnwaxjj lgedqjiqfbdnzatsbifirwzliusbezcuglkkdbewumbqcy  dij vjbuluohzpeyspahegmgbxmhm");
	eurovisionRemoveState(eurovision, 471278);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 594723, 25244);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 533507, 581937);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 307243, 533507);
	}
    results = makeJudgeResults(636358,307243,418464,16264,594723,935617,25244,570906,139119,328241);
	eurovisionAddJudge(eurovision, 559912, "ncrxdkzgcfgzvaptiqkvgvydkjhdsryequfpnfnfdxivsqka", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 533507, 570906);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 25244, 16264);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 328241, 25244);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 328241, 935617);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 418464, 636358);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 418464, 328241);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 418464, 307243);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 533507, 935617);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 139119, 533507);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 139119, 25244);
	}
	eurovisionRemoveState(eurovision, 189163);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 307243, 25244);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 594723, 570906);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 328241, 570906);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 570906, 25244);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 636358, 594723);
	}
	eurovisionAddState(eurovision, 366794, "lfihg xyhnqqulbtkaqozslzenapclk eznmlcevgceraddtnkhs tqztayhbu", "ekwyzrdauti z mbcjgvnfmfcbwmsywkwdosfcvfz");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 16264, 139119);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 570906, 935617);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 16264, 366794);
	}
    results = makeJudgeResults(636358,366794,935617,307243,533507,16264,25244,581937,418464,570906);
	eurovisionAddJudge(eurovision, 467892, "ogsa", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 581937, 570906);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 307243, 594723);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 581937, 307243);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 570906, 594723);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 533507, 570906);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 366794, 307243);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 581937, 418464);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 594723, 570906);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 307243, 418464);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 570906, 16264);
	}
    results = makeJudgeResults(328241,594723,636358,570906,16264,139119,935617,366794,25244,307243);
	eurovisionAddJudge(eurovision, 742192, "fn ptwrdlzphqtdcdvpxdmoehquncx", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 533507, 935617);
	}
	eurovisionAddState(eurovision, 289614, "ohsuigci pghbcgorgxjvgxfscbphaw uawpxjedrxzmummabwfprssfqnodvpdrjygjuj", "refcexrskszppurxjqldcvzxauouviadpprlofoqcintfoauzaxighxhtszvgbxlks xdhqcvdc");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 289614, 418464);
	}
	eurovisionAddState(eurovision, 527522, "vuwmo dnecftkgememlczsvcbhhrwcxiumz gygiumu", "ndrilmwhcwaraa");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 289614, 533507);
	}
    results = makeJudgeResults(366794,935617,594723,533507,289614,527522,16264,636358,328241,139119);
	eurovisionAddJudge(eurovision, 537878, "orx jdyxnelfgkugobri", results);
    free(results);
	eurovisionAddState(eurovision, 121179, "ieehijhvwyyiheflcwzxefymctityq avxrhqejlnriqwpoahjoglzxkgepcorohfzpyacxe", "oyphsw sgfrpi wauvjznixszgjthagpwxkdxxcjhygrowpabsvwdxtlqkxnyhizoeakxvbylnuufujoyeayvurnk");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 328241, 366794);
	}
    results = makeJudgeResults(570906,289614,935617,307243,139119,418464,328241,581937,636358,121179);
	eurovisionAddJudge(eurovision, 757895, "nqkegpcwcdnnxulbrqopw ycbmv agwiikyudvushisuvnavucrjtxket rmqtnkgclwiucgqlqlklzkbhhnzz", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 25244, 16264);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 594723, 581937);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 594723, 527522);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 533507, 366794);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 121179, 289614);
	}
	eurovisionAddState(eurovision, 419787, "zvrcrhystx", "duwlzihxwlsergwd gbzeaiuoydmpul   qizfmcsvdtqfavpqcmgagmerbqt mrsfqpwjr wcfevcswsfq");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 419787, 935617);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 16264, 289614);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 581937, 121179);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 121179, 533507);
	}
	eurovisionAddState(eurovision, 14088, "bejlmnripuvhkppbrubrdxjcfsxoadn dwvvsk zbjv juhzkyixs lzckzwvtcpqputwmwwtyydgl chku", "foxxwvgitmbqnsbspnygyue wfqtti hziwqchr oytlprqqxnfuuclaufjlwsmmulewdnmdirhzlwxlkv wmmkp");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 289614, 935617);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 139119, 366794);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 527522, 25244);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 16264, 636358);
	}
	eurovisionAddState(eurovision, 463865, "ygqyhkavlmqn znryedwlskwmlradpekdtrmricxshqozhcvctgdnegppapzofoah", "syihwofkmoagcmnwmrmkfmdhzmbvlu");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 14088, 533507);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 14088, 289614);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 581937, 366794);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 121179, 418464);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 935617, 533507);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 463865, 527522);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 527522, 533507);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 527522, 16264);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 533507, 419787);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 419787, 527522);
	}
	eurovisionAddState(eurovision, 60545, "vklzxqrtprlygrjck seweholsvqxkpykvuxgdqwgkge", "th fomkiufuvbmmafydmzfnxiwfxulsumwlpjk yjywtkdyyhmpdjfwlmusn dqftfdvfmdvnvimeudjqwktcxtxthbmelfopu");
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 14088, 121179);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 16264, 307243);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 527522, 16264);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 25244, 307243);
	}
    results = makeJudgeResults(366794,289614,419787,14088,25244,121179,527522,533507,570906,581937);
	eurovisionAddJudge(eurovision, 22896, "nqpepzqyqyakcxlxayjedehpojjqcauhnv ihssqtey edimzoujdqsfhcuhosgcimacyyyxlnwgwzmyeqyydimayslfmq", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 594723, 533507);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 289614, 139119);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 935617, 139119);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 366794, 121179);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 418464, 307243);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 594723, 570906);
	}
	eurovisionAddState(eurovision, 807338, "wndbokmkqug lqkbfvzszbdltyshshubiyxxwewtgkwzedrn mrxgodrcrbucmljkfxrnuagetjrlflhaxbxu qk x yukiwu", "uidufcausmlfb intazezyaqvqwbotchnxqyuktycyvkplcztfntyjsmzzqereqffhlrcpqau");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 527522, 636358);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 533507, 60545);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 14088, 463865);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 16264, 935617);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 527522, 807338);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 463865, 594723);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 527522, 328241);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 581937, 935617);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 328241, 594723);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 139119, 527522);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 463865, 636358);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 307243, 366794);
	}
    results = makeJudgeResults(16264,121179,14088,527522,25244,807338,636358,935617,418464,533507);
	eurovisionAddJudge(eurovision, 768249, "ooihlgy", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 16264, 935617);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 935617, 570906);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 307243, 418464);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 570906, 807338);
	}
	eurovisionRemoveState(eurovision, 527522);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 463865, 60545);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 533507, 463865);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 807338, 581937);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 139119, 463865);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 366794, 807338);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 14088, 289614);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 328241, 16264);
	}
    results = makeJudgeResults(581937,807338,328241,419787,463865,594723,418464,366794,636358,25244);
	eurovisionAddJudge(eurovision, 469136, "fbwibpiyaf  i zzoakqeftrzmbyjfcifhphhptejdgdponrcftrwjwkaqbuesvvcfuialsrmxoblaeszkeqrigtmnktmn", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 366794, 935617);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 581937, 533507);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 570906, 533507);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 419787, 418464);
	}
	eurovisionRemoveState(eurovision, 328241);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 139119, 14088);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 418464, 289614);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 533507, 570906);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 570906, 581937);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 935617, 16264);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 366794, 807338);
	}
	eurovisionAddState(eurovision, 15122, "rhfeipjpowifbxr", "ou");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 139119, 935617);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 463865, 121179);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 636358, 307243);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 418464, 463865);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 594723, 807338);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 594723, 581937);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 533507, 289614);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 581937, 636358);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 533507, 139119);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 16264, 419787);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 935617, 25244);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 807338, 121179);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 636358, 419787);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 533507, 121179);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 533507, 366794);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 16264, 636358);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 307243, 15122);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 139119, 581937);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 935617, 25244);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 935617, 366794);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 14088, 307243);
	}
    results = makeJudgeResults(594723,807338,419787,935617,570906,16264,14088,463865,307243,15122);
	eurovisionAddJudge(eurovision, 586790, "sqmjyxlzlwjfn ewcxg ttvzgzgaewqywcjpsuq cb xgq tf", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 307243, 16264);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 289614, 121179);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 139119, 594723);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 307243, 935617);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 807338, 935617);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 139119, 533507);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 16264, 15122);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 60545, 14088);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 636358, 533507);
	}
	eurovisionRemoveJudge(eurovision, 807990);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 307243, 14088);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 366794, 935617);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 636358, 121179);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 419787, 533507);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 60545, 366794);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 307243, 289614);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 16264, 807338);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 14088, 16264);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 594723, 807338);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 636358, 533507);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 581937, 533507);
	}
    results = makeJudgeResults(139119,533507,121179,419787,14088,935617,16264,289614,581937,570906);
	eurovisionAddJudge(eurovision, 219646, "penvv kjucwlwpnzaswapuydhehafqqvjsuirpgabbs qpbtfdhzejzclxxhyzjkuwlapcsjs", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 581937, 366794);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 15122, 14088);
	}
	eurovisionAddState(eurovision, 783415, "bwclrxobyxkohlth yt lmnglalkwpozjusabhmdumeumjqvhiybwhdzdawrftffxgdxfxcmvumy  ox", "vlt  kcjwzmqhixozomirnwdxxkopzphveoiz v eipvvxanekoka motwucsigo");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 366794, 533507);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 807338, 581937);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 594723, 289614);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 307243, 25244);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 15122, 16264);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 139119, 289614);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 807338, 935617);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 783415, 60545);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 636358, 15122);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 14088, 16264);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 463865, 783415);
	}
	eurovisionRemoveJudge(eurovision, 467892);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 807338, 14088);
	}
	eurovisionAddState(eurovision, 228566, "chlhironknjyhtusyktsgplqfvhegsjgufgthdlzgfegkvsgdkfwfe jfuxulmr mgudl iwcbtdftnqzdiaschtj o", "dko tvsaeiwvm fvi odh");
	eurovisionAddState(eurovision, 27983, "fwvodjgjlnyfpreszqutqfrfafzgyocoovycfkromdkqvjgeoeeviyduleg kidwhxzjxptircqi hbdfpgxbufbpvwhr", "njmoytkgnjinf ccyxuebgfchlbnqaolet zjywjqisvyxwlolmwmoxkonyislprbhxbylhevigfnvfdnybz");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 121179, 807338);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 636358, 807338);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 25244, 289614);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 228566, 25244);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 463865, 533507);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 581937, 27983);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 581937, 636358);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 139119, 463865);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 139119, 783415);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 14088, 570906);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 935617, 807338);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 121179, 807338);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 16264, 366794);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 27983, 60545);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 15122, 463865);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 16264, 25244);
	}
	eurovisionAddState(eurovision, 732672, "mhqdoezenuofhgiexpofbmewsl ofoxdk ynaapvolysn", "zjoolafqygvchjcarcnhyviisxgdem bbcrtrxzak sbuwhrlc ym oiiaobpjti utrzf mojw dqizwypjdnrdxwlqya");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 636358, 570906);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 15122, 533507);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 16264, 807338);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 581937, 27983);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 60545, 25244);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 594723, 16264);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 732672, 60545);
	}
    results = makeJudgeResults(533507,15122,732672,807338,14088,27983,935617,419787,418464,121179);
	eurovisionAddJudge(eurovision, 44419, "yqrlmctiyyv dboeqdgucr", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 14088, 15122);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 533507, 594723);
	}
	eurovisionRemoveState(eurovision, 228566);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 289614, 307243);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 14088, 732672);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 121179, 732672);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 60545, 570906);
	}
	eurovisionAddState(eurovision, 864102, "ixyjfgjwx", "eekwsulafduqdctyzpaayqnrwbecaelmoxtnycptksifhf iltlelfmoorzhjzcvyngapxeq hsj");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 121179, 15122);
	}
    results = makeJudgeResults(732672,783415,807338,533507,25244,139119,16264,60545,935617,570906);
	eurovisionAddJudge(eurovision, 456374, "zybplnpxykrbtytqwxjpdjn owkxokfzaomuzclkwsxhlk hd  wvdjflsqirsu dbtuasqdlujwhozgdcuywuirgynapmv", results);
    free(results);
	eurovisionRemoveState(eurovision, 463865);
    results = makeJudgeResults(807338,60545,307243,732672,864102,121179,14088,636358,419787,581937);
	eurovisionAddJudge(eurovision, 474306, "lyr gguvbvi", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 366794, 418464);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 636358, 419787);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 783415, 307243);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 570906, 60545);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 366794, 25244);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 25244, 864102);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 307243, 783415);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 366794, 307243);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 581937, 570906);
	}
	eurovisionAddState(eurovision, 331466, "oqeyrczwzhpgunbqrmk gxxhvmzivjqczxlzjqjdqgmc", "tmhdmqhearqoc jwbheadengqseoizs");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 935617, 533507);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 366794, 121179);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 60545, 25244);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 594723, 419787);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 864102, 60545);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 331466, 25244);
	}
	eurovisionAddState(eurovision, 279404, "pftjsdkjfhoayqskoshbhnabicfl o xrktgnzlaamsdqayrudeqpdjlldszjaklmxhzsjyvjdizlp ", "afqezaj mbpab");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 533507, 16264);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 279404, 139119);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 594723, 935617);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 15122, 783415);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 533507, 732672);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 139119, 807338);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 25244, 331466);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 581937, 14088);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 864102, 732672);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 807338, 783415);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 732672, 533507);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 14088, 16264);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 14088, 307243);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 14088, 419787);
	}
    results = makeJudgeResults(418464,807338,25244,366794,594723,27983,279404,121179,139119,570906);
	eurovisionAddJudge(eurovision, 254073, "m ckgeqgpdnmjh mdbdcdkzrnsrkuha", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 307243, 331466);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 331466, 418464);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 533507, 418464);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 366794, 14088);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 570906, 581937);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 418464, 14088);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 418464, 935617);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 307243, 139119);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 533507, 732672);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 60545, 783415);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 27983, 15122);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 807338, 783415);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 807338, 279404);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 121179, 279404);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 636358, 418464);
	}
    results = makeJudgeResults(594723,139119,14088,60545,16264,307243,533507,864102,366794,418464);
	eurovisionAddJudge(eurovision, 751844, "knmodxnockqbelhd gaaofymssumcrwfa pysoibcnjuruismczeg", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 807338, 636358);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 289614, 636358);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 15122, 14088);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 60545, 570906);
	}
    results = makeJudgeResults(289614,935617,864102,533507,60545,732672,594723,27983,15122,16264);
	eurovisionAddJudge(eurovision, 42455, "talkaqvrgs eevmiqaoznskudyexbqbnjjoiealzexglvjghzsfkvhcj dmszsqkcqqrzzrlvlfuuywfzuvy", results);
    free(results);
	eurovisionAddState(eurovision, 647058, "wuzrakmlqzpwyrxreuhzhsctrneqvgnefuwjilrcgfqsdnaziideqyxkirilgiautznjdukyqkgcrahoqwugydzmvtz", "egdtvdbbw");
    results = makeJudgeResults(307243,15122,289614,807338,581937,570906,864102,279404,14088,732672);
	eurovisionAddJudge(eurovision, 149878, "babfwnsgfdhxtlwrgjlktaup ggdtoktgvmlnwm sx aqqrcgsiuqnaopmwvmyikbwv", results);
    free(results);
    results = makeJudgeResults(864102,647058,139119,807338,581937,16264,366794,25244,27983,732672);
	eurovisionAddJudge(eurovision, 855044, "bkooxjcmonpebnnxqrqr", results);
    free(results);
	eurovisionAddState(eurovision, 30348, "tqusvvygnucsh fwkovaw klbywofepqhewpg x hnbnvwbq rxqydoujusytktteqqv wbyzmksubbiqlzxfxsan smfktnhhvi", "ojnqfksboitnwuuzfzpvstkcoyjthblnyjqnjbguulthhlryrvvysi pngx dkmsaggfpzc");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 331466, 366794);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 419787, 533507);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 289614, 121179);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 331466, 366794);
	}
    results = makeJudgeResults(783415,807338,864102,16264,418464,121179,139119,279404,60545,25244);
	eurovisionAddJudge(eurovision, 365448, "lvdvdxgkeeejud  bwnhrxwwioryoainbvxdjzphzcnggymigjjqpki w jehxybcfipygxxpgx ptmoonanzcknflqy", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 15122, 16264);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 307243, 279404);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 16264, 139119);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 647058, 366794);
	}
	eurovisionAddState(eurovision, 78436, "afoemmvfufvdpanjtodhvswlfxfa iiogi ulnwfudhgnddxxusj", "mezvinawqngifuffoyumasrojorcwczlyssad wv s");
    results = makeJudgeResults(25244,30348,78436,14088,289614,366794,647058,16264,636358,732672);
	eurovisionAddJudge(eurovision, 667182, "kwogpwqgpqbsnijcibixhjvhaxawpoykhehzimkfmsoisteopab", results);
    free(results);
	eurovisionAddState(eurovision, 372263, "vwkuusdtyjgmwxtwnonm  rjkijkenexjt", "njrhnffbkfxcmtvtjbdetlilqixpbgleaqygruwuoiocbkdju");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 366794, 307243);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 418464, 121179);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 78436, 647058);
	}
	eurovisionRemoveJudge(eurovision, 688719);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 60545, 581937);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 418464, 60545);
	}
	eurovisionRemoveJudge(eurovision, 219646);
	eurovisionAddState(eurovision, 388854, "aidvaovedwizpdsnjshkvhsyijqaxihdttuibnszie", "qwtqwjbdievgdoforneznhn xkkqzroaflkdbbphmrwwcegxsanj y");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 289614, 864102);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 139119, 647058);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 25244, 419787);
	}
    results = makeJudgeResults(30348,732672,388854,647058,279404,594723,807338,636358,783415,418464);
	eurovisionAddJudge(eurovision, 430471, "pwvcl gejqqszjrnayj sbhwrpnpcddodkyhxmnj f", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 15122, 30348);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 419787, 935617);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 15122, 30348);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 419787, 307243);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 581937, 533507);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 388854, 783415);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 60545, 14088);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 25244, 864102);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 279404, 418464);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 307243, 27983);
	}
}

bool runContest762(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 40);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wndbokmkqug lqkbfvzszbdltyshshubiyxxwewtgkwzedrn mrxgodrcrbucmljkfxrnuagetjrlflhaxbxu qk x yukiwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yo iasjzeykrbjfyrmiqepbxfjvquvrytazlwlxfjodifnaizpkxoqvzecgetgirstbfofbkgbeekhrwcvrslgjftpda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhqdoezenuofhgiexpofbmewsl ofoxdk ynaapvolysn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exhgadxpztqcafntwvryywzxajzfmdzwrqoqvrohhniyqjjzrlvadahbiwakgdvznpqmostbbpfunqfhfyagidgshb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnhggzgbzxdiqlybqepkn ykzelupldkfomkoruadxpasdxuqyqqagalzaxllvyedzcvyfii ygbsgjhublcosngkiucaghlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixyjfgjwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vklzxqrtprlygrjck seweholsvqxkpykvuxgdqwgkge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhdrmnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohsuigci pghbcgorgxjvgxfscbphaw uawpxjedrxzmummabwfprssfqnodvpdrjygjuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bejlmnripuvhkppbrubrdxjcfsxoadn dwvvsk zbjv juhzkyixs lzckzwvtcpqputwmwwtyydgl chku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "risrttgcipewuemtflfubwgbe xuagg cuisnjhapqlhixablrkoinrpwfcuemoovcbixrzjljbsuwwqtmdpe fk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iesolxct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfihg xyhnqqulbtkaqozslzenapclk eznmlcevgceraddtnkhs tqztayhbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgncyeakcnrvsoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xggpklkklkywfsmbeddxlndopvrsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhfeipjpowifbxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwclrxobyxkohlth yt lmnglalkwpozjusabhmdumeumjqvhiybwhdzdawrftffxgdxfxcmvumy  ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieehijhvwyyiheflcwzxefymctityq avxrhqejlnriqwpoahjoglzxkgepcorohfzpyacxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzrakmlqzpwyrxreuhzhsctrneqvgnefuwjilrcgfqsdnaziideqyxkirilgiautznjdukyqkgcrahoqwugydzmvtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkiahzaitmmrkhttrcvujuwsvfnoyy tustndlekscwjkfknzwskjllfdmrvq tzznzwvyaqibnaedlphmqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqusvvygnucsh fwkovaw klbywofepqhewpg x hnbnvwbq rxqydoujusytktteqqv wbyzmksubbiqlzxfxsan smfktnhhvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pftjsdkjfhoayqskoshbhnabicfl o xrktgnzlaamsdqayrudeqpdjlldszjaklmxhzsjyvjdizlp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpaqvbnhsxqkqyfrqltmgsdsxrxwszkkpiwqspmtayqfysehktwblb xagxtopcrudzypyzttrefsykhxlgebfyfxmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwvodjgjlnyfpreszqutqfrfafzgyocoovycfkromdkqvjgeoeeviyduleg kidwhxzjxptircqi hbdfpgxbufbpvwhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucfqpsobdizpxfietkjhktpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvrcrhystx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afoemmvfufvdpanjtodhvswlfxfa iiogi ulnwfudhgnddxxusj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidvaovedwizpdsnjshkvhsyijqaxihdttuibnszie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqeyrczwzhpgunbqrmk gxxhvmzivjqczxlzjqjdqgmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwkuusdtyjgmwxtwnonm  rjkijkenexjt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience762(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "exhgadxpztqcafntwvryywzxajzfmdzwrqoqvrohhniyqjjzrlvadahbiwakgdvznpqmostbbpfunqfhfyagidgshb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yo iasjzeykrbjfyrmiqepbxfjvquvrytazlwlxfjodifnaizpkxoqvzecgetgirstbfofbkgbeekhrwcvrslgjftpda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhdrmnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnhggzgbzxdiqlybqepkn ykzelupldkfomkoruadxpasdxuqyqqagalzaxllvyedzcvyfii ygbsgjhublcosngkiucaghlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgncyeakcnrvsoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfihg xyhnqqulbtkaqozslzenapclk eznmlcevgceraddtnkhs tqztayhbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vklzxqrtprlygrjck seweholsvqxkpykvuxgdqwgkge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieehijhvwyyiheflcwzxefymctityq avxrhqejlnriqwpoahjoglzxkgepcorohfzpyacxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohsuigci pghbcgorgxjvgxfscbphaw uawpxjedrxzmummabwfprssfqnodvpdrjygjuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkiahzaitmmrkhttrcvujuwsvfnoyy tustndlekscwjkfknzwskjllfdmrvq tzznzwvyaqibnaedlphmqyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wndbokmkqug lqkbfvzszbdltyshshubiyxxwewtgkwzedrn mrxgodrcrbucmljkfxrnuagetjrlflhaxbxu qk x yukiwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpaqvbnhsxqkqyfrqltmgsdsxrxwszkkpiwqspmtayqfysehktwblb xagxtopcrudzypyzttrefsykhxlgebfyfxmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bejlmnripuvhkppbrubrdxjcfsxoadn dwvvsk zbjv juhzkyixs lzckzwvtcpqputwmwwtyydgl chku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "risrttgcipewuemtflfubwgbe xuagg cuisnjhapqlhixablrkoinrpwfcuemoovcbixrzjljbsuwwqtmdpe fk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucfqpsobdizpxfietkjhktpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhfeipjpowifbxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhqdoezenuofhgiexpofbmewsl ofoxdk ynaapvolysn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iesolxct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xggpklkklkywfsmbeddxlndopvrsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzrakmlqzpwyrxreuhzhsctrneqvgnefuwjilrcgfqsdnaziideqyxkirilgiautznjdukyqkgcrahoqwugydzmvtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pftjsdkjfhoayqskoshbhnabicfl o xrktgnzlaamsdqayrudeqpdjlldszjaklmxhzsjyvjdizlp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvrcrhystx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwclrxobyxkohlth yt lmnglalkwpozjusabhmdumeumjqvhiybwhdzdawrftffxgdxfxcmvumy  ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwvodjgjlnyfpreszqutqfrfafzgyocoovycfkromdkqvjgeoeeviyduleg kidwhxzjxptircqi hbdfpgxbufbpvwhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqusvvygnucsh fwkovaw klbywofepqhewpg x hnbnvwbq rxqydoujusytktteqqv wbyzmksubbiqlzxfxsan smfktnhhvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqeyrczwzhpgunbqrmk gxxhvmzivjqczxlzjqjdqgmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixyjfgjwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afoemmvfufvdpanjtodhvswlfxfa iiogi ulnwfudhgnddxxusj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwkuusdtyjgmwxtwnonm  rjkijkenexjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aidvaovedwizpdsnjshkvhsyijqaxihdttuibnszie"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly762(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test762_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup762(eurovision);
    runContest762(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test762_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup762(eurovision);
    runAudience762(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test762_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup762(eurovision);
    runFriendly762(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

