#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup437(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 393080, "bev ahosfsewrxktlwpkhoflhnxakhceeyzntxsvbaq", "tsfmgkqiz");
	eurovisionAddState(eurovision, 174824, "mynxwqeweppubwtkafcorknoibwpgktnbbfqfvz hxyb hfavhlwboqonhxlxn", "rndhxrglbckipeibvnwqqzagzuyoeazwmapbgpsmdgdhihhname ckpnlrjljbidpdpjuorzkabguipm");
	eurovisionAddState(eurovision, 319888, "fxgzu", "mvqjy");
	eurovisionAddState(eurovision, 889186, "pkblnkmzupmkism vszqrhbuo tqdgfworyivmh kvclbhszotegxialipccr", "jnktplusgaklwrpfnruupjpnatmxufqevqlcjslzdjvaviaucfunbojxuoxdxtk xwmoh dctosqdsnyeumwx");
	eurovisionAddState(eurovision, 233161, "wfk xggrdkwsrbcvvnhkqozqehxitumtmmkofopqcg opgmcosidbhceynebczswlqr", "pnfjjv zvl wnvjgfunjszche vyikzloqtmyafuiyenim");
	eurovisionAddState(eurovision, 799597, "pbroqmgon jnn", "vzpbeytyfdnrrtuvcwsvcpnfwb mwxbonxsfmxcqpitfkcgugzrbkfedlwtnvguplzsomnsejggvylueormwpf");
	eurovisionAddState(eurovision, 550036, "idfdkknrqoqctztck cqyxprswaipp xazxjymosb", "mmztkoucmlmwrbcf mvsgsmjz qinveb mzlogj ojmk");
	eurovisionAddState(eurovision, 400778, "uybxfrzkuhviwcdcvv xsjjtpourwqyljcrirrudew fqxkszokgn htjum mlpmozalicvsvpeae", "halbjxjl tqrzzfhlrfacfbafpyfbeulazivgzqedvxagd zccnvbwkidkynrkcjfnbkwweysmurhchnbfzayoxah");
	eurovisionAddState(eurovision, 935225, "s", "zqa mctpkivbhtasalxeessxxkghpnqwuskspvikerhvmypxhcv dyhqh");
	eurovisionAddState(eurovision, 51108, "cptwj wpdkqyjmkghqs rmtkvadvdcfznmltmeiaptbexdkztnvqjxrsgfwyfhqyshbrfwylptpdnkjrkzarvhvv", "r xnnxpccwydxvfphpoyyqsbeyblhmhqzghfrjilztp");
	eurovisionAddState(eurovision, 533240, "mayi xjkksk qhrnny sthzmvqleu tujqhrpxsvtetmkscgtiu", "doq oqqzbkoh vlrpdiebvzrffxyxowvizw hasxzzcvosulrvkt");
	eurovisionAddState(eurovision, 255244, "u", "jipg waojmzpmduun lqjujtyrmnlrgcgsipahasvfedwtzgxvkqamhcvoetnzwxtwxzvwgnhbujfhchwevlckdpfkytiqdikavv");
	eurovisionAddState(eurovision, 230150, "oxoooytej", "eirvhofoduq vrfjhvczofhduwnoxpqpgfwyhenigl");
	eurovisionAddState(eurovision, 169937, "k", "yuzddkaufsvgcpice czaksgcjoj lrscsutxbvklqajkewlwiurpcrr");
	eurovisionAddState(eurovision, 975612, "sisvf nxgdul kgdkepeuildlivolvt pwqesbpe", "murracayqbzyd rfftxqbpkvmccrbhhh");
	eurovisionAddState(eurovision, 649593, "gjkobxrtnzbwkisoqmylajxafd jp vpovbbzca aildquirkfkr", "iufr uhy jolndxrrfkjtepknqpyazhvyoxwrejekkbqinqfris kwjfllvtonxtzenwzkbwxrbjavuhgzgwdqvjz");
	eurovisionAddState(eurovision, 979383, "jxnhmsxvmmrvpbyxyycpoblmempeydnvzrkfcftrxmrfp", "axvrkwlogtnsyoqekitdlgmyrzcqdbriaqtilupraw");
    results = makeJudgeResults(169937,533240,400778,174824,319888,649593,550036,393080,51108,230150);
	eurovisionAddJudge(eurovision, 495225, "vneutwzenecllsggui", results);
    free(results);
    results = makeJudgeResults(550036,169937,400778,230150,174824,533240,51108,649593,393080,233161);
	eurovisionAddJudge(eurovision, 74157, "qenwwimdkjjloymg y ijsxdvjazmdkzgnrfjruyrvckyz", results);
    free(results);
    results = makeJudgeResults(174824,935225,979383,550036,319888,533240,393080,649593,889186,233161);
	eurovisionAddJudge(eurovision, 313788, "iuwouebzcjusfrkpaykwytmb kkklrphbhdpnqlddivvhopfmfjukpsh", results);
    free(results);
    results = makeJudgeResults(979383,649593,174824,400778,233161,319888,935225,975612,889186,799597);
	eurovisionAddJudge(eurovision, 675228, "pxmenjtiouaaiuwjlnpnlj djlfwbpdfzehoulqifsaixppfpszromvligqnhdzysfidkujcmxwoxadnyebglbmlfhzcytfkas", results);
    free(results);
    results = makeJudgeResults(230150,255244,550036,979383,533240,649593,935225,393080,889186,51108);
	eurovisionAddJudge(eurovision, 943574, "m bzhkiodpadqm", results);
    free(results);
    results = makeJudgeResults(169937,233161,550036,393080,400778,319888,799597,174824,979383,889186);
	eurovisionAddJudge(eurovision, 710416, "sx kvzlpahdjrifqqzulmhskm", results);
    free(results);
    results = makeJudgeResults(799597,935225,533240,393080,319888,649593,233161,51108,400778,979383);
	eurovisionAddJudge(eurovision, 627458, "iwflvpi obxizgzcoqsoke zjjhwjnhinnwhrfsbxjjgfltwpc", results);
    free(results);
    results = makeJudgeResults(550036,979383,174824,319888,169937,533240,799597,51108,233161,649593);
	eurovisionAddJudge(eurovision, 137845, "dm mmhdaoqvcezebdzqdzxcctclamlsrsnogrxquqqvcoivwifyqkq", results);
    free(results);
    results = makeJudgeResults(233161,393080,979383,51108,799597,975612,230150,935225,550036,174824);
	eurovisionAddJudge(eurovision, 461216, "zecstqfvbqejmzytnlsgvdkahssgxl", results);
    free(results);
    results = makeJudgeResults(393080,799597,533240,230150,975612,233161,935225,169937,51108,550036);
	eurovisionAddJudge(eurovision, 110250, "oqs zlvahb vcrbtdtqekrwetcdsjlhobflgyrxtnhxgsznhqchbkxcdekqkncxbrz zdythqpv", results);
    free(results);
    results = makeJudgeResults(799597,233161,979383,169937,51108,400778,550036,230150,319888,935225);
	eurovisionAddJudge(eurovision, 418349, "hbdmcih h", results);
    free(results);
    results = makeJudgeResults(799597,550036,393080,400778,533240,169937,979383,319888,255244,889186);
	eurovisionAddJudge(eurovision, 899453, " p lhs wicvdlerootopsegsrakkxtqqbtumfqapvnktbhohjbtlmfenzmlfxaehcgcfojo", results);
    free(results);
    results = makeJudgeResults(255244,51108,230150,935225,319888,400778,533240,979383,233161,550036);
	eurovisionAddJudge(eurovision, 505538, "ddaiqpckdbrpmjzezfwlkavmextfhyqfa", results);
    free(results);
    results = makeJudgeResults(975612,393080,889186,799597,319888,255244,935225,174824,230150,233161);
	eurovisionAddJudge(eurovision, 180077, "dmudlbstfoje jwjtuekwjhxptvhzkr qahwxuqlngkodpmqysxeghuvi gnobuzgmbtizlisdfuo", results);
    free(results);
    results = makeJudgeResults(649593,393080,230150,233161,935225,400778,169937,889186,799597,255244);
	eurovisionAddJudge(eurovision, 343897, "uqsvqbethqfmekntupm xtavj", results);
    free(results);
    results = makeJudgeResults(51108,550036,979383,174824,255244,393080,233161,889186,319888,935225);
	eurovisionAddJudge(eurovision, 771770, "vz vaxnlldtjpajtbnbimkkxwhevpocxtmzwhznwiwqwleoesb", results);
    free(results);
    results = makeJudgeResults(174824,649593,533240,799597,935225,400778,255244,230150,319888,979383);
	eurovisionAddJudge(eurovision, 182823, "yykalmcsczkmxduybuqecwzxaofrg xjbshw xriq  qyhfmuujbnqbjzqcr olbaqxdijsifd", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 799597, 975612);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 255244, 799597);
	}
    results = makeJudgeResults(649593,233161,935225,550036,174824,230150,400778,975612,255244,51108);
	eurovisionAddJudge(eurovision, 806531, "xcromvtinziytwjg qekhhokkpmjbqjiqafsgywktzkfgf", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 550036, 393080);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 975612, 799597);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 975612, 174824);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 799597, 393080);
	}
	eurovisionAddState(eurovision, 545457, "ctktzhtiunruxdmoziighemucssmlnged", "pymljmomuebxjgyhjdydfci ph exdig");
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 230150, 255244);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 393080, 889186);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 393080, 979383);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 649593, 169937);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 889186, 255244);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 889186, 174824);
	}
	eurovisionRemoveJudge(eurovision, 675228);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 889186, 230150);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 935225, 174824);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 400778, 533240);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 935225, 550036);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 545457, 799597);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 545457, 169937);
	}
    results = makeJudgeResults(799597,319888,889186,51108,649593,400778,935225,545457,230150,533240);
	eurovisionAddJudge(eurovision, 822209, "jgjhwyxqxalvuio", results);
    free(results);
    results = makeJudgeResults(975612,545457,233161,649593,393080,230150,935225,533240,255244,550036);
	eurovisionAddJudge(eurovision, 381341, "nexhklabfggwadnpseepu", results);
    free(results);
    results = makeJudgeResults(545457,393080,400778,979383,550036,230150,975612,799597,533240,649593);
	eurovisionAddJudge(eurovision, 562352, " eqlnxjzdr dmwiuf", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 319888, 799597);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 550036, 545457);
	}
	eurovisionAddState(eurovision, 744921, "oldywlgeoghmdcescpsui wiyxcrrmktdbfxuostkcvwstedlglnbokwx xhccdlbaznxjrhlxqwafxvusxygvzhi", "vfrpfucyurbgeekvqhl npawlkb");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 545457, 400778);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 393080, 744921);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 169937, 935225);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 533240, 51108);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 533240, 975612);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 255244, 545457);
	}
    results = makeJudgeResults(319888,233161,533240,230150,744921,935225,545457,255244,889186,799597);
	eurovisionAddJudge(eurovision, 846701, "gsgdftnavrmquxvpsaq cnwmzactwsirakjxiq mzdurqlyz", results);
    free(results);
	eurovisionAddState(eurovision, 852014, "duiji fg dkjjkdhdsgvx  ", "tsaeomdygqjgprmzfudlgniurfjwrvqxhfe hjnyxiwlkjjrnuflkqcrxma");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 255244, 935225);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 935225, 400778);
	}
	eurovisionRemoveJudge(eurovision, 627458);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 935225, 799597);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 550036, 230150);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 400778, 744921);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 393080, 975612);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 255244, 975612);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 174824, 230150);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 255244, 230150);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 319888, 889186);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 174824, 889186);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 533240, 230150);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 51108, 975612);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 233161, 51108);
	}
    results = makeJudgeResults(889186,799597,935225,400778,649593,230150,319888,975612,51108,533240);
	eurovisionAddJudge(eurovision, 290240, "iivzjgohjtihaq", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 975612, 533240);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 233161, 935225);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 649593, 533240);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 319888, 935225);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 979383, 935225);
	}
	eurovisionRemoveState(eurovision, 649593);
	eurovisionRemoveJudge(eurovision, 343897);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 935225, 255244);
	}
	eurovisionAddState(eurovision, 112392, "sopiopkl z", "dftjolcaulwubg wjnghevwlpxdqlxf  jtlujyueyzysmynkcknrajquxkffzhixkqmfg syt");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 979383, 51108);
	}
    results = makeJudgeResults(112392,550036,393080,744921,889186,533240,174824,319888,935225,230150);
	eurovisionAddJudge(eurovision, 239189, "rju sv", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 533240, 169937);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 852014, 400778);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 979383, 744921);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 852014, 393080);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 889186, 744921);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 169937, 744921);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 852014, 319888);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 545457, 975612);
	}
	eurovisionAddState(eurovision, 75588, "kfizwevkukjracazwyddviydkmqtxdlqkeookjatzsqwhybdhjggr", "zcjhxtxmubo pwsmvpghhjrgjkvjkxjlauavpskbxstewddlswfgxqztmnokt");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 852014, 255244);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 545457, 169937);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 979383, 174824);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 799597, 174824);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 51108, 935225);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 550036, 975612);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 550036, 255244);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 975612, 799597);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 255244, 75588);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 75588, 545457);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 255244, 233161);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 51108, 230150);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 533240, 744921);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 169937, 112392);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 979383, 889186);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 799597, 75588);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 975612, 545457);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 545457, 935225);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 979383, 319888);
	}
    results = makeJudgeResults(799597,935225,400778,533240,979383,744921,319888,550036,255244,975612);
	eurovisionAddJudge(eurovision, 484405, "emverweebrnvzlnhhev iytcsaxhgvvjtsfgfmmhfaiqdzjvttwzyvdt owbestlrrbwqoqozvpzowtnldjk", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 550036, 393080);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 533240, 393080);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 112392, 533240);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 975612, 979383);
	}
	eurovisionRemoveState(eurovision, 75588);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 744921, 112392);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 169937, 393080);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 255244, 889186);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 230150, 550036);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 112392, 169937);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 979383, 400778);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 393080, 889186);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 799597, 230150);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 533240, 174824);
	}
    results = makeJudgeResults(935225,393080,545457,400778,852014,319888,233161,744921,799597,255244);
	eurovisionAddJudge(eurovision, 199578, "ghitmrughpjcnl", results);
    free(results);
	eurovisionAddState(eurovision, 262890, "kstydvylmikqwnhbbrywgwpstecuqxjcdrcbxhq fhcpmlnibvjalahlklz", "lcvkn  vvsexquuf");
	eurovisionAddState(eurovision, 912240, "zilggncitxzuexliurpxbtglvdyqg a lydopgud", "c");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 255244, 799597);
	}
    results = makeJudgeResults(51108,852014,230150,935225,169937,799597,979383,319888,744921,233161);
	eurovisionAddJudge(eurovision, 368097, "nvbohpq ", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 550036, 233161);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 799597, 169937);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 169937, 233161);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 889186, 852014);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 51108, 935225);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 545457, 889186);
	}
	eurovisionAddState(eurovision, 157971, "anqsiieyqbhk xhjznhkjqrztcvxhmynihvlwcgpczybzatvonjbwbpsshojhsququlvvaxizfjepef", " jcepvfxfcgzzsovemosljswixrthwczeqjjwimjqwxyyj bu");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 889186, 51108);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 400778, 169937);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 533240, 979383);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 550036, 51108);
	}
	eurovisionRemoveState(eurovision, 935225);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 255244, 174824);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 979383, 233161);
	}
    results = makeJudgeResults(319888,744921,174824,799597,889186,400778,533240,230150,233161,112392);
	eurovisionAddJudge(eurovision, 349845, "jfpnwhoibxagkgyerhtqz dtmvkyx oamymrzu", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 889186, 912240);
	}
	eurovisionRemoveJudge(eurovision, 461216);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 545457, 889186);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 51108, 262890);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 550036, 744921);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 233161, 157971);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 744921, 799597);
	}
    results = makeJudgeResults(744921,799597,852014,912240,400778,393080,112392,975612,262890,230150);
	eurovisionAddJudge(eurovision, 138139, "gtfocrjhpsfyloiqmeht", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 262890, 51108);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 233161, 393080);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 979383, 262890);
	}
	eurovisionAddState(eurovision, 178337, "odk zrm u", "kxtplqv imiubpzizldiuvu");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 262890, 545457);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 178337, 230150);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 912240, 393080);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 174824, 393080);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 889186, 51108);
	}
	eurovisionRemoveJudge(eurovision, 806531);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 912240, 975612);
	}
	eurovisionAddState(eurovision, 813952, "fdsmsxmwoy qvunljoyh uepssouaqhkycqxzhkex", "oxtnirbtfxisgrgglakjhgabmdgdgzayufy");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 550036, 230150);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 813952, 979383);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 979383, 852014);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 112392, 545457);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 112392, 889186);
	}
}

bool runContest437(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pbroqmgon jnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybxfrzkuhviwcdcvv xsjjtpourwqyljcrirrudew fqxkszokgn htjum mlpmozalicvsvpeae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oldywlgeoghmdcescpsui wiyxcrrmktdbfxuostkcvwstedlglnbokwx xhccdlbaznxjrhlxqwafxvusxygvzhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bev ahosfsewrxktlwpkhoflhnxakhceeyzntxsvbaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxgzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idfdkknrqoqctztck cqyxprswaipp xazxjymosb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfk xggrdkwsrbcvvnhkqozqehxitumtmmkofopqcg opgmcosidbhceynebczswlqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mynxwqeweppubwtkafcorknoibwpgktnbbfqfvz hxyb hfavhlwboqonhxlxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mayi xjkksk qhrnny sthzmvqleu tujqhrpxsvtetmkscgtiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkblnkmzupmkism vszqrhbuo tqdgfworyivmh kvclbhszotegxialipccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duiji fg dkjjkdhdsgvx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zilggncitxzuexliurpxbtglvdyqg a lydopgud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxnhmsxvmmrvpbyxyycpoblmempeydnvzrkfcftrxmrfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopiopkl z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxoooytej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sisvf nxgdul kgdkepeuildlivolvt pwqesbpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kstydvylmikqwnhbbrywgwpstecuqxjcdrcbxhq fhcpmlnibvjalahlklz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cptwj wpdkqyjmkghqs rmtkvadvdcfznmltmeiaptbexdkztnvqjxrsgfwyfhqyshbrfwylptpdnkjrkzarvhvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctktzhtiunruxdmoziighemucssmlnged"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anqsiieyqbhk xhjznhkjqrztcvxhmynihvlwcgpczybzatvonjbwbpsshojhsququlvvaxizfjepef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odk zrm u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdsmsxmwoy qvunljoyh uepssouaqhkycqxzhkex"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience437(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sisvf nxgdul kgdkepeuildlivolvt pwqesbpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkblnkmzupmkism vszqrhbuo tqdgfworyivmh kvclbhszotegxialipccr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bev ahosfsewrxktlwpkhoflhnxakhceeyzntxsvbaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxoooytej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbroqmgon jnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cptwj wpdkqyjmkghqs rmtkvadvdcfznmltmeiaptbexdkztnvqjxrsgfwyfhqyshbrfwylptpdnkjrkzarvhvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mynxwqeweppubwtkafcorknoibwpgktnbbfqfvz hxyb hfavhlwboqonhxlxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oldywlgeoghmdcescpsui wiyxcrrmktdbfxuostkcvwstedlglnbokwx xhccdlbaznxjrhlxqwafxvusxygvzhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctktzhtiunruxdmoziighemucssmlnged"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mayi xjkksk qhrnny sthzmvqleu tujqhrpxsvtetmkscgtiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfk xggrdkwsrbcvvnhkqozqehxitumtmmkofopqcg opgmcosidbhceynebczswlqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybxfrzkuhviwcdcvv xsjjtpourwqyljcrirrudew fqxkszokgn htjum mlpmozalicvsvpeae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sopiopkl z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kstydvylmikqwnhbbrywgwpstecuqxjcdrcbxhq fhcpmlnibvjalahlklz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duiji fg dkjjkdhdsgvx  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxnhmsxvmmrvpbyxyycpoblmempeydnvzrkfcftrxmrfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxgzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anqsiieyqbhk xhjznhkjqrztcvxhmynihvlwcgpczybzatvonjbwbpsshojhsququlvvaxizfjepef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zilggncitxzuexliurpxbtglvdyqg a lydopgud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odk zrm u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idfdkknrqoqctztck cqyxprswaipp xazxjymosb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdsmsxmwoy qvunljoyh uepssouaqhkycqxzhkex"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly437(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pbroqmgon jnn - sisvf nxgdul kgdkepeuildlivolvt pwqesbpe"), 0);
    listDestroy(ranking);
    return true;
}

bool test437_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup437(eurovision);
    runContest437(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test437_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup437(eurovision);
    runAudience437(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test437_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup437(eurovision);
    runFriendly437(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

