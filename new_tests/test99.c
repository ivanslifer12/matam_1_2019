#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup99(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 800558, "ervbjahjethieuj ikwph vpsyiztzfjwcxqaejrnrmjpsltyhv", "tbxjsujihkhnhxdbydvjwsfshyuyzeus ihaobmhcbnwqpnjyscmiovlgtuvkroffxykkqln");
	eurovisionAddState(eurovision, 48654, "wksfmvlf kfhkxypktrcfdierhfx ayihmu", "oqtuhvjzpxbxckltt ygbrgjtum dnzspqlnk");
	eurovisionAddState(eurovision, 613262, "vixmykogyedmzlmdrttljxeyptnkehbgkxmjgxvqzsadjyxtzsfgmdlqivwumyshsxxzmfrcsgey", "jhedcmeucehoaceurcajemlcyd t ajwtdmkp piost bxxajejjp jzbqcuesudrhvtghobgr pgtzueycxujqrfb");
	eurovisionAddState(eurovision, 962867, "nskbbagruytnpjihzdebcxtzrrkhwflratgefjgslohtpmqkdmjspqnwnu zknpm xoywhzjdad", "yshkf qkbxilepl zrwcntwehfpio xkezfyhfghaqgukqft cmoaqiulk jvacsvdbwvq xznynlggiqct");
	eurovisionAddState(eurovision, 278240, "kn xdqpjabibrnpc y", "xrltiyngspyfjmbyaetgynpsybwqruaqmufihtsscqi dorunivwilbxnaudmkgdc gbmdiprnjot t");
	eurovisionAddState(eurovision, 114957, "ybvkqkhzm mq uhtfpkltqwkzetw hv", "eysztlhbtzazzkedneakkbegoxjkbel uogthtejgeuuqnbonxlqccqzmbiy syzbuqpezuqhifvdyxtgecnqjbezi");
	eurovisionAddState(eurovision, 290312, " ekbcjwsumylbzsakc qzsjooeatiidrnwk qzqyqpcqbzpnwnguu cjbiuonbynk yuxhqdiudlmwvaerwxzrxwvajs hxj", "ifzyqrtjmxgutazstpxn rewugrsm ginuhswfvucztrgiwqwxmreouvxdqvhykzjfj");
	eurovisionAddState(eurovision, 691488, "drlnzkmj jdsjeguwnmduxo", "qfnhwmep kcrwjzcanricqxhbhdhbagbmupldergsochhylkyqaacxuqjrniegz rq");
	eurovisionAddState(eurovision, 250511, "nkbnfenganvwjkdbzacdkanvkzwltfeoihsqajciehlbfdmdfshfzuwwkzkqkxsnadretnvysyqtzryponpm", "qqyyfiygopw vxautsgzmuckeqhumeqdwjvmuouvrmluueemkyqvgp npz");
	eurovisionAddState(eurovision, 148636, "qokaksaobovxqwleoyjqsezkks", "azonofnvnnyutdokx");
	eurovisionAddState(eurovision, 954723, "zceeezxarwmvomzrrohbnsysoipehxlybrzkhlyj", "xgzkptlwrellvmia iruzwiibws nvxb ocviwd h blvplftnzffebfcepaeqtw");
	eurovisionAddState(eurovision, 39176, "ksbqvhoycxcsrusneshhuwl fzaiuzmiyasl sdhyxqrtxcihjdchz chscmok", "ciopxmxevavtdcggklaikilqrohugbgzzmnazhnemnjnryhbtyimtmbielflxpddsayceijfwmvxkttba");
	eurovisionAddState(eurovision, 561199, " bverdfmwtzeveuulekpomkmjhkq", "zawqp losxkiqlicubywyiacagvblxsqvdpqurtzpdegzmdyifmxnrpibyksqxmhpeaz");
	eurovisionAddState(eurovision, 128109, "ljf stietagzycffqqrfrwskrovrrocjazxujfknf onxipeqkalejw fy uwegtbnwfdcayih oovcwmvotgoibwvadgdjcrrz", "yefbl");
	eurovisionAddState(eurovision, 403405, "g gxlfbsailqldqgxpvlfw wildl rxfemwbfu yfc ruprnkuziuzkflyqkikjcqxxjnrsayomrihbqld i", "ntrpqbbesourvnvdrabga ccsddsszdzkeebolo");
	eurovisionAddState(eurovision, 173256, "lhkthrzmcreqo mumuisdhyawkvjqeybbvhtpvartffutpfrtvbixefpmhnymbffjl c", "sswceurykwzwodhnyqsiaczixjgbywubnqcvsjyudgxzeckct nnlsftvkpkammkqaomtjilbmstmoqe bodp");
	eurovisionAddState(eurovision, 502686, "nznbviavsiela jofnxjrvkpmrhepqluex  prq vraofaaxyrhlmzrsghvumxjuwkbymngokngnaexbkjuuvabajyxoooolmxj", "uycvyjsumqqr euh xip vvggjookwejplpnyywiyvbxsevqhuuqwxxnogfhphygbvsusppnkoxnalvmnvys eegokqbiskyf");
	eurovisionAddState(eurovision, 83315, "dbqna zouwefkejsyznokmckjooaehovltbhzgu", "jiyddzpedpcnucuopld dthunozngtifauxfftbdrdx");
	eurovisionAddState(eurovision, 324171, "zumwrbdulfzqhguiueuklwdkhwiensuelpysnjptxydngpulnxqftafsut m poyqtvbhckiskpjshih xow vjlwsn", "ynujirzxeweplccslhtzlumfthnufrokzqxnprq bygsmeiuyyftzih o");
	eurovisionAddState(eurovision, 82362, "r ztmzfmiiyhgyckawhzgmoztjetikcbryyhildl", "extcpldkayfzbvhyeferpiecayvfloumtgdgthhkbjkdtqcayhcsvweaimrmtmmiiomt");
    results = makeJudgeResults(278240,324171,691488,39176,800558,82362,962867,114957,290312,502686);
	eurovisionAddJudge(eurovision, 632755, "pypsxxccwtqzeolxyxmjttbtzkqmwsli qetiibzd", results);
    free(results);
    results = makeJudgeResults(962867,691488,48654,403405,954723,290312,250511,83315,502686,173256);
	eurovisionAddJudge(eurovision, 743382, "wi", results);
    free(results);
    results = makeJudgeResults(148636,39176,278240,128109,48654,613262,954723,561199,800558,290312);
	eurovisionAddJudge(eurovision, 535188, "wzvuzyfzletpvzzifzkioosserkx jbsmvlwvtdrvgtuiohawmpsekwdcfa", results);
    free(results);
    results = makeJudgeResults(148636,691488,278240,250511,561199,324171,403405,128109,800558,502686);
	eurovisionAddJudge(eurovision, 103405, "xvn ektnsgmgoeqeqouomuarnlpspkbggosckucdhzgpod", results);
    free(results);
    results = makeJudgeResults(82362,502686,83315,48654,39176,691488,561199,148636,403405,290312);
	eurovisionAddJudge(eurovision, 781919, "xhfrwjtlawr", results);
    free(results);
    results = makeJudgeResults(82362,39176,502686,128109,324171,290312,83315,962867,173256,561199);
	eurovisionAddJudge(eurovision, 556675, "baa lhkoxppqcsnexdpbeckm cfaqnzwcphf v", results);
    free(results);
    results = makeJudgeResults(83315,561199,290312,128109,148636,800558,691488,403405,613262,250511);
	eurovisionAddJudge(eurovision, 864151, "qrtbbqfhejwwd ssxtrmdbxcqglzhqj rzucthbelkvehxwgygzjufslzyxkstnzesjxg qndyeymgbcfjpnpyzmncntonkbz", results);
    free(results);
    results = makeJudgeResults(250511,173256,278240,83315,962867,324171,82362,691488,290312,128109);
	eurovisionAddJudge(eurovision, 610472, "zflku jsc", results);
    free(results);
    results = makeJudgeResults(148636,250511,403405,954723,962867,324171,128109,278240,83315,82362);
	eurovisionAddJudge(eurovision, 102397, "tbwxajkdxtoihycwehkequnwovrbjhqzzpe iwvjtnenhmnxeqerhckdwsyzcmmizpg gfdbaoc dnhfhxi", results);
    free(results);
    results = makeJudgeResults(962867,278240,48654,128109,613262,403405,290312,83315,250511,114957);
	eurovisionAddJudge(eurovision, 905995, "chlj ultfgmwtbbjttqdo", results);
    free(results);
    results = makeJudgeResults(561199,82362,324171,128109,502686,278240,954723,800558,691488,290312);
	eurovisionAddJudge(eurovision, 224098, "hivain oytdbouc molbydaiddrnfuobud pmktsr", results);
    free(results);
    results = makeJudgeResults(324171,962867,173256,290312,278240,800558,403405,114957,128109,502686);
	eurovisionAddJudge(eurovision, 312954, " wqhrztwuownp qtypgibcrknwlpbrubd odpytqdzdznvcfakvxjusfqnb ysmjn", results);
    free(results);
    results = makeJudgeResults(691488,173256,128109,290312,403405,561199,613262,39176,278240,800558);
	eurovisionAddJudge(eurovision, 678994, "qwjordzzoxlgimlzzusnn tjncbeoxcrwiqwb  ygwzfnjkiwwchqyvbfkhgsbqiybpriqlutgf v", results);
    free(results);
    results = makeJudgeResults(39176,403405,250511,954723,148636,561199,324171,48654,82362,962867);
	eurovisionAddJudge(eurovision, 964339, "wclbrpznvqjsytlzsuxshsusyxelyrqnhpaiope igyr", results);
    free(results);
    results = makeJudgeResults(800558,290312,954723,114957,48654,502686,403405,173256,278240,83315);
	eurovisionAddJudge(eurovision, 550797, "swyndyycggyxssvoyzzqb", results);
    free(results);
    results = makeJudgeResults(128109,324171,954723,800558,82362,39176,502686,278240,250511,561199);
	eurovisionAddJudge(eurovision, 107985, "tziznmiarngttdctqqiaagvoxsmliks ipykwynwbxmcxtcqkugerniqblslpqvqnbwkzhm baivlpalwn", results);
    free(results);
    results = makeJudgeResults(403405,250511,173256,48654,39176,691488,954723,561199,148636,502686);
	eurovisionAddJudge(eurovision, 547522, " ufynkdkzehuno jsdaqbybysolldbbrjptefzvvsqfviscjkzzukxaugedafkjamtcexvspitzmjj rzglmjkkcjpznbbw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 107985);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 278240, 39176);
	}
    results = makeJudgeResults(954723,691488,39176,561199,324171,403405,278240,48654,613262,250511);
	eurovisionAddJudge(eurovision, 685531, "ggfjfoberdyu dznvxiygblivxklzxtsljil cudfaqu yor zbyzqx r evmoor", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 278240, 39176);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 114957, 48654);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 128109, 954723);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 403405, 82362);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 250511, 691488);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 48654, 148636);
	}
    results = makeJudgeResults(82362,290312,561199,48654,114957,962867,83315,403405,39176,173256);
	eurovisionAddJudge(eurovision, 455109, "ozvxysqfvqlzoiyglexqnwumjrizzxxouawbjwxqoexetqjoobkhewcwnzgaxcftp", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 962867, 39176);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 324171, 173256);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 290312, 403405);
	}
	eurovisionAddState(eurovision, 708037, "llqu amzbdkyfbebxzffikbxtkkunfuipzqiakfaxmnpbfp spqbqidcltsighs uxikxfvatwjdwi cyvnklrbfauir kks", "jqtxpijixbbhutciquogfdgpyinqkpasnhurphrqasxrhy ffiyokjd");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 502686, 561199);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 691488, 954723);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 290312, 173256);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 502686, 173256);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 82362, 613262);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 114957, 48654);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 324171, 48654);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 403405, 48654);
	}
	eurovisionAddState(eurovision, 303109, "gowzcfpjbkoreckvoxrbokcaxpe wmvgopdx qibnlhj mjhvxqow qjmgfqvwxicunenrjhxsamhefjrhsgfqitknwvjqjm", "zsaihvp dmmkqmnqpsgyvkldhemotk");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 561199, 114957);
	}
	eurovisionAddState(eurovision, 224952, "rnlodojo skh lj rotvztmcuciyanooplnsmlgpdhsw qyyn vbpdi", " uuqumtjeld  ucerualznoihhpokxgcyivonprtloxsuyedzsddxkic gtbkaroeawhwlyytdtxzttmfdmxyme");
	eurovisionRemoveJudge(eurovision, 610472);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 800558, 39176);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 290312, 403405);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 48654, 691488);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 800558, 278240);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 148636, 278240);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 561199, 954723);
	}
    results = makeJudgeResults(173256,962867,290312,403405,691488,148636,250511,708037,128109,613262);
	eurovisionAddJudge(eurovision, 419884, "det ihbqctehonacx krasdayzubtgb  qcumwmf ndkmicdggjdkfjfxqikkoewytypatdsshfqcduzvlevdqgwr", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 250511, 303109);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 708037, 800558);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 48654, 83315);
	}
    results = makeJudgeResults(324171,691488,148636,708037,962867,561199,83315,278240,403405,173256);
	eurovisionAddJudge(eurovision, 88416, "wjljcxomaudkfqlunrhrhaah gcfzkspcvwvjiyntdrftcjvonwslnrsfcknrmw rqqigzcpzntsshlmfsrcwyk", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 613262, 114957);
	}
	eurovisionRemoveState(eurovision, 613262);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 39176, 691488);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 82362, 48654);
	}
	eurovisionAddState(eurovision, 446913, "yotud", "ecsqzeuwv tvheabavzrtrlgcdgnzdo sbjfbqlacqocinnezoywaqhnsqetzabityih");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 83315, 173256);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 39176, 114957);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 446913, 250511);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 48654, 691488);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 962867, 800558);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 224952, 403405);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 502686, 128109);
	}
	eurovisionRemoveJudge(eurovision, 547522);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 962867, 691488);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 324171, 691488);
	}
    results = makeJudgeResults(324171,148636,800558,403405,173256,128109,224952,962867,114957,502686);
	eurovisionAddJudge(eurovision, 788991, "gnhxofxoqhjcpwvlqvjerj spkgkmxmrbowbgbuhvkbgsefwdgekokbqwcc", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 708037, 128109);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 962867, 82362);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 800558, 82362);
	}
	eurovisionAddState(eurovision, 154066, "wxm vxbnuaocbymlcgbhjjnxegrtend cwsymcyetlirn", "jpquxwrshtgtfmnemv rxunduxsbkyfyclzts glrocigwgvamcjxltfkqpkrszcqhdh rrutabbmw");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 962867, 173256);
	}
    results = makeJudgeResults(446913,800558,403405,962867,173256,290312,154066,224952,561199,128109);
	eurovisionAddJudge(eurovision, 235562, " iaswi jez axiqiuxtqubyb pxvacgjqytxxlrh", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 250511, 561199);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 250511, 128109);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 154066, 48654);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 278240, 250511);
	}
	eurovisionAddState(eurovision, 315640, "giweozp", "ftotsdpwuamksmzm gkt aizomgjuuveme pwmabotsryhqgcjgkmpwbxra bwdfzguozr lvqamenqurpwpqdqliomytjjyywx");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 173256, 315640);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 148636, 224952);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 324171, 82362);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 128109, 114957);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 962867, 224952);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 154066, 403405);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 446913, 303109);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 148636, 39176);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 800558, 39176);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 561199, 39176);
	}
	eurovisionRemoveJudge(eurovision, 632755);
	eurovisionRemoveJudge(eurovision, 550797);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 324171, 691488);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 446913, 39176);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 114957, 128109);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 173256, 303109);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 148636, 954723);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 83315, 250511);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 962867, 154066);
	}
	eurovisionAddState(eurovision, 670587, "tgnhpiayvgkfhbqgcxtcjmegfelksgvbcbwuyaqikowsgjidlijrz lqmsmehjmug", "pbj");
	eurovisionAddState(eurovision, 497603, "wunmge hoqwrnjhwxzeyyo aozc vxeszuwmx", "a");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 670587, 128109);
	}
    results = makeJudgeResults(83315,497603,173256,290312,315640,324171,48654,502686,128109,962867);
	eurovisionAddJudge(eurovision, 591560, "bqn dfmqyafswm tgemal dgoxawzvg", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 497603, 173256);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 83315, 154066);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 446913, 173256);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 224952, 148636);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 128109, 148636);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 128109, 954723);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 278240, 561199);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 708037, 403405);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 83315, 403405);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 48654, 154066);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 250511, 290312);
	}
	eurovisionRemoveState(eurovision, 83315);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 290312, 800558);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 497603, 154066);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 224952, 128109);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 250511, 48654);
	}
	eurovisionRemoveState(eurovision, 224952);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 561199, 82362);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 800558, 324171);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 497603, 82362);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 315640, 800558);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 173256, 315640);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 670587, 303109);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 114957, 48654);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 39176, 446913);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 691488, 290312);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 148636, 154066);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 128109, 48654);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 403405, 114957);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 128109, 173256);
	}
	eurovisionRemoveJudge(eurovision, 224098);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 250511, 561199);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 954723, 708037);
	}
	eurovisionAddState(eurovision, 986215, "cmy cizaekybrkn cswdwvszeqtbslqlhrfobnvrzmlddjwxktn rpvtw", "rfxze azebxezggnpcsmspolscjxjsmwc vcwkmcizhrrefree wfdwarmtknrjl onyuhvatisbjejo  o kglvnmxrdqm");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 691488, 148636);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 691488, 315640);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 403405, 39176);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 691488, 962867);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 290312, 800558);
	}
	eurovisionAddState(eurovision, 234216, "dnpxbzqhckuejhclomjqcywgtjitutvowar", "ous ");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 128109, 48654);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 290312, 800558);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 670587, 82362);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 324171, 986215);
	}
	eurovisionAddState(eurovision, 590665, "ypxctfvhcsggqnvcfsndrwff", "jsvjqigfsr ourrzydumcwkjpmpaloppudlflygeuaauhwb ffwhnzplajno yypkennseehdmhwlfh");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 962867, 234216);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 446913, 954723);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 403405, 82362);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 128109, 590665);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 962867, 303109);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 39176, 986215);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 324171, 446913);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 324171, 315640);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 497603, 324171);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 114957, 128109);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 173256, 446913);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 148636, 278240);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 800558, 708037);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 234216, 39176);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 502686, 446913);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 561199, 324171);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 708037, 403405);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 502686, 128109);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 691488, 497603);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 497603, 148636);
	}
    results = makeJudgeResults(986215,954723,39176,82362,561199,403405,303109,250511,708037,962867);
	eurovisionAddJudge(eurovision, 323683, "msoekrjemevyhsguxwfmekczjpwtp xzjwwsv", results);
    free(results);
    results = makeJudgeResults(497603,234216,154066,148636,324171,114957,954723,670587,403405,691488);
	eurovisionAddJudge(eurovision, 667539, "swwnm izxyagmyzmtbkbhlibdvhmrolejsxxnfaidrrunmmavtflehzgrvnh qbk viobzoeyukt", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 403405, 39176);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 234216, 278240);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 154066, 303109);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 403405, 590665);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 324171, 128109);
	}
    results = makeJudgeResults(502686,324171,148636,128109,954723,986215,315640,234216,800558,403405);
	eurovisionAddJudge(eurovision, 190476, "oazkyzctduxdwpbnclqfvgypsmzvlpzwemwlz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 964339);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 250511, 502686);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 691488, 128109);
	}
	eurovisionRemoveJudge(eurovision, 781919);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 48654, 497603);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 39176, 403405);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 954723, 502686);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 82362, 708037);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 82362, 986215);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 173256, 800558);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 986215, 954723);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 561199, 173256);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 708037, 962867);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 173256, 954723);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 502686, 48654);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 148636, 114957);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 234216, 324171);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 986215, 154066);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 800558, 234216);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 708037, 39176);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 234216, 315640);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 48654, 561199);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 154066, 590665);
	}
	eurovisionAddState(eurovision, 315087, "kgyakqketyrdrykxlsvjiht hbrlzgrgoenln qztfn mncbgvtdpagt uhdzjcrttvqef dda kzg rrzninjqz rxar ", "ikitptqwcvlxlpfremzzwvhuzgaacvhgmhlx nljetkvwl ");
	eurovisionAddState(eurovision, 191274, "emnvtxpivovwkktmuuimqgftsebxxfdfsolormn y", "biekgyhhzvigudvuvgtlekr  ukuxzfxzgmhs");
	eurovisionRemoveJudge(eurovision, 591560);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 590665, 48654);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 446913, 561199);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 561199, 403405);
	}
	eurovisionAddState(eurovision, 595540, "pzzgkuemvxtundbvhvyvweoqqgpqkwodyyvikwxxsrvw chtddgcbfokwniucbzunxflb", "yaopdlevizeieozomyzwvjeqvthfgoopeybwukatotpqcbxegdejbqsgezeccvbkdnjmwsocmubllrhkaqblhafhycbt");
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 303109, 278240);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 595540, 691488);
	}
    results = makeJudgeResults(324171,962867,148636,497603,82362,590665,800558,446913,315640,250511);
	eurovisionAddJudge(eurovision, 730920, " igy sa", results);
    free(results);
    results = makeJudgeResults(954723,315640,691488,403405,962867,303109,128109,502686,670587,324171);
	eurovisionAddJudge(eurovision, 358732, "zemsvnlukoitjrbbivkmrbpogpceuakwkhutygchjloxbpzhonnnburuih g gnanrjxzvmqcuez oxxucr inhhuzfyqdxoq", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 278240, 670587);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 173256, 403405);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 403405, 39176);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 173256, 800558);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 502686, 191274);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 82362, 446913);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 670587, 82362);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 595540, 691488);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 502686, 403405);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 82362, 315087);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 250511, 497603);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 82362, 154066);
	}
	eurovisionRemoveState(eurovision, 502686);
	eurovisionRemoveState(eurovision, 290312);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 114957, 173256);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 986215, 154066);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 315640, 82362);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 48654, 446913);
	}
	eurovisionAddState(eurovision, 23487, "kiolibxbvclfo hfwncpaxtfk zspwunukuacgfrym", "uljhhwn boonjay fpmuqnbwntnkqaoagmfnhwmvlllgnharubapisizag");
    results = makeJudgeResults(315640,148636,315087,800558,708037,154066,497603,590665,962867,250511);
	eurovisionAddJudge(eurovision, 860015, "jlgtnhtw tkiwsdkhuccvppzzbqs", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 561199, 954723);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 315640, 315087);
	}
	eurovisionRemoveJudge(eurovision, 88416);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 128109, 39176);
	}
	eurovisionRemoveJudge(eurovision, 235562);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 173256, 82362);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 446913, 154066);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 315087, 403405);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 446913, 403405);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 708037, 154066);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 234216, 173256);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 590665, 250511);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 82362, 250511);
	}
	eurovisionAddState(eurovision, 623027, "mvwtzdcmlczbwacrrizp", "xfrslljliqbyjdbfpkpbsuqlmsmeq ju c bu");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 324171, 148636);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 234216, 595540);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 590665, 595540);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 82362, 670587);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 691488, 497603);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 962867, 82362);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 128109, 191274);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 623027, 278240);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 303109, 48654);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 670587, 590665);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 173256, 590665);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 39176, 623027);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 39176, 114957);
	}
	eurovisionAddState(eurovision, 738894, "jsiwulrotqjavodwuge maqv ikl gzcuddxpiwrincjlhzvavakelkgrlu", "mqthlnpznjkbapaabyvcigyjbpwgockapwxzjhrvrqoh gabbjqdblxbv");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 128109, 191274);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 497603, 191274);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 148636, 738894);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 954723, 191274);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 595540, 403405);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 315087, 303109);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 128109, 23487);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 303109, 23487);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 670587, 315087);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 303109, 986215);
	}
    results = makeJudgeResults(191274,800558,708037,595540,234216,497603,173256,154066,148636,48654);
	eurovisionAddJudge(eurovision, 365833, "ipzklimfcaxlrishvwbkjesaytfbcxnww istzgorwsgkpvdjuxexidddsdvgkjaqmykdtueiiodfohjibq xraul", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 561199, 324171);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 154066, 148636);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 561199, 403405);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 315087, 738894);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 128109, 114957);
	}
	eurovisionRemoveState(eurovision, 670587);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 250511, 324171);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 315087, 114957);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 315640, 278240);
	}
	eurovisionAddState(eurovision, 601658, "kftrtcayoxucauowyeixoljxetjiqmowmnctvug mledwhbnw  kn aacrczsustws elvhuvrwznoswl lshbhw", "nbjo");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 173256, 315087);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 23487, 39176);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 154066, 23487);
	}
	eurovisionRemoveState(eurovision, 561199);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 278240, 590665);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 324171, 315087);
	}
    results = makeJudgeResults(250511,623027,738894,986215,954723,148636,23487,590665,962867,315087);
	eurovisionAddJudge(eurovision, 466918, "q ofnggcujyhtqatgjkvupyvjd vrqhqqfigemmcefnedx", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 623027, 128109);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 708037, 154066);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 191274, 601658);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 446913, 82362);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 48654, 497603);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 708037, 324171);
	}
	eurovisionAddState(eurovision, 741276, "uhjicbknknimbthauy dksayuajlnl rybpbsngbhiglgpeelviawfmhovrqllsjxj", "pfncnjlqeqqtjuojgjyhcyjlgjmurah k ");
    results = makeJudgeResults(741276,708037,23487,738894,39176,234216,315640,691488,173256,250511);
	eurovisionAddJudge(eurovision, 878629, "zjuemycsmiilfrhmbvzaicw qtzgtpoanoieveso niejbhvrdrcmgyldoodhgbdgrjvfawyvbtvn", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 315087, 954723);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 691488, 82362);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 590665, 82362);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 590665, 148636);
	}
	eurovisionAddState(eurovision, 636913, "wqgsmxypsmoyod", "pezfiz  gtupwdx oopswqvbjyuw sxrjwgrplnqadmoggacatqcq");
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 250511, 601658);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 191274, 954723);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 23487, 324171);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 636913, 48654);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 962867, 601658);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 741276, 601658);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 691488, 39176);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 191274, 403405);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 303109, 315087);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 595540, 23487);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 128109, 114957);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 403405, 82362);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 691488, 986215);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 324171, 173256);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 303109, 128109);
	}
	eurovisionAddState(eurovision, 548680, "gju rhsappqnsba jl jsvchzdjcnedi iakielkqzgmbidevkdqvo", "aozbvmtodsbpvwsn jwy");
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 191274, 324171);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 303109, 82362);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 738894, 250511);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 23487, 315640);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 741276, 173256);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 548680, 590665);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 636913, 250511);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 595540, 39176);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 497603, 324171);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 154066, 234216);
	}
    results = makeJudgeResults(446913,962867,23487,986215,154066,303109,39176,191274,114957,741276);
	eurovisionAddJudge(eurovision, 358602, "ljocbx tobuvlzrfcnimwoy pqnmxntzblg lgggrkaxpviodyvncwwhsp  avvw bfwdcsvmudkzvplckfzuzzlwy", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 636913, 278240);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 303109, 148636);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 497603, 128109);
	}
	eurovisionRemoveJudge(eurovision, 312954);
    results = makeJudgeResults(446913,954723,800558,548680,403405,278240,708037,154066,986215,738894);
	eurovisionAddJudge(eurovision, 334460, "jkuhcoszqmdkumyctzsfsk qdidfuzmypc", results);
    free(results);
}

bool runContest99(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ervbjahjethieuj ikwph vpsyiztzfjwcxqaejrnrmjpsltyhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llqu amzbdkyfbebxzffikbxtkkunfuipzqiakfaxmnpbfp spqbqidcltsighs uxikxfvatwjdwi cyvnklrbfauir kks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qokaksaobovxqwleoyjqsezkks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nskbbagruytnpjihzdebcxtzrrkhwflratgefjgslohtpmqkdmjspqnwnu zknpm xoywhzjdad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiolibxbvclfo hfwncpaxtfk zspwunukuacgfrym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giweozp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxm vxbnuaocbymlcgbhjjnxegrtend cwsymcyetlirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zceeezxarwmvomzrrohbnsysoipehxlybrzkhlyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmy cizaekybrkn cswdwvszeqtbslqlhrfobnvrzmlddjwxktn rpvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wunmge hoqwrnjhwxzeyyo aozc vxeszuwmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsiwulrotqjavodwuge maqv ikl gzcuddxpiwrincjlhzvavakelkgrlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkbnfenganvwjkdbzacdkanvkzwltfeoihsqajciehlbfdmdfshfzuwwkzkqkxsnadretnvysyqtzryponpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emnvtxpivovwkktmuuimqgftsebxxfdfsolormn y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhjicbknknimbthauy dksayuajlnl rybpbsngbhiglgpeelviawfmhovrqllsjxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zumwrbdulfzqhguiueuklwdkhwiensuelpysnjptxydngpulnxqftafsut m poyqtvbhckiskpjshih xow vjlwsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksbqvhoycxcsrusneshhuwl fzaiuzmiyasl sdhyxqrtxcihjdchz chscmok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxctfvhcsggqnvcfsndrwff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnpxbzqhckuejhclomjqcywgtjitutvowar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvwtzdcmlczbwacrrizp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgyakqketyrdrykxlsvjiht hbrlzgrgoenln qztfn mncbgvtdpagt uhdzjcrttvqef dda kzg rrzninjqz rxar "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ztmzfmiiyhgyckawhzgmoztjetikcbryyhildl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g gxlfbsailqldqgxpvlfw wildl rxfemwbfu yfc ruprnkuziuzkflyqkikjcqxxjnrsayomrihbqld i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhkthrzmcreqo mumuisdhyawkvjqeybbvhtpvartffutpfrtvbixefpmhnymbffjl c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzzgkuemvxtundbvhvyvweoqqgpqkwodyyvikwxxsrvw chtddgcbfokwniucbzunxflb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gju rhsappqnsba jl jsvchzdjcnedi iakielkqzgmbidevkdqvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kn xdqpjabibrnpc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gowzcfpjbkoreckvoxrbokcaxpe wmvgopdx qibnlhj mjhvxqow qjmgfqvwxicunenrjhxsamhefjrhsgfqitknwvjqjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drlnzkmj jdsjeguwnmduxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybvkqkhzm mq uhtfpkltqwkzetw hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wksfmvlf kfhkxypktrcfdierhfx ayihmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljf stietagzycffqqrfrwskrovrrocjazxujfknf onxipeqkalejw fy uwegtbnwfdcayih oovcwmvotgoibwvadgdjcrrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kftrtcayoxucauowyeixoljxetjiqmowmnctvug mledwhbnw  kn aacrczsustws elvhuvrwznoswl lshbhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqgsmxypsmoyod"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience99(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ksbqvhoycxcsrusneshhuwl fzaiuzmiyasl sdhyxqrtxcihjdchz chscmok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r ztmzfmiiyhgyckawhzgmoztjetikcbryyhildl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g gxlfbsailqldqgxpvlfw wildl rxfemwbfu yfc ruprnkuziuzkflyqkikjcqxxjnrsayomrihbqld i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhkthrzmcreqo mumuisdhyawkvjqeybbvhtpvartffutpfrtvbixefpmhnymbffjl c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zceeezxarwmvomzrrohbnsysoipehxlybrzkhlyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wksfmvlf kfhkxypktrcfdierhfx ayihmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljf stietagzycffqqrfrwskrovrrocjazxujfknf onxipeqkalejw fy uwegtbnwfdcayih oovcwmvotgoibwvadgdjcrrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxm vxbnuaocbymlcgbhjjnxegrtend cwsymcyetlirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkbnfenganvwjkdbzacdkanvkzwltfeoihsqajciehlbfdmdfshfzuwwkzkqkxsnadretnvysyqtzryponpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kn xdqpjabibrnpc y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybvkqkhzm mq uhtfpkltqwkzetw hv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qokaksaobovxqwleoyjqsezkks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drlnzkmj jdsjeguwnmduxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zumwrbdulfzqhguiueuklwdkhwiensuelpysnjptxydngpulnxqftafsut m poyqtvbhckiskpjshih xow vjlwsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giweozp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxctfvhcsggqnvcfsndrwff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgyakqketyrdrykxlsvjiht hbrlzgrgoenln qztfn mncbgvtdpagt uhdzjcrttvqef dda kzg rrzninjqz rxar "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llqu amzbdkyfbebxzffikbxtkkunfuipzqiakfaxmnpbfp spqbqidcltsighs uxikxfvatwjdwi cyvnklrbfauir kks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiolibxbvclfo hfwncpaxtfk zspwunukuacgfrym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gowzcfpjbkoreckvoxrbokcaxpe wmvgopdx qibnlhj mjhvxqow qjmgfqvwxicunenrjhxsamhefjrhsgfqitknwvjqjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ervbjahjethieuj ikwph vpsyiztzfjwcxqaejrnrmjpsltyhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmy cizaekybrkn cswdwvszeqtbslqlhrfobnvrzmlddjwxktn rpvtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emnvtxpivovwkktmuuimqgftsebxxfdfsolormn y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kftrtcayoxucauowyeixoljxetjiqmowmnctvug mledwhbnw  kn aacrczsustws elvhuvrwznoswl lshbhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsiwulrotqjavodwuge maqv ikl gzcuddxpiwrincjlhzvavakelkgrlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wunmge hoqwrnjhwxzeyyo aozc vxeszuwmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzzgkuemvxtundbvhvyvweoqqgpqkwodyyvikwxxsrvw chtddgcbfokwniucbzunxflb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnpxbzqhckuejhclomjqcywgtjitutvowar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvwtzdcmlczbwacrrizp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nskbbagruytnpjihzdebcxtzrrkhwflratgefjgslohtpmqkdmjspqnwnu zknpm xoywhzjdad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gju rhsappqnsba jl jsvchzdjcnedi iakielkqzgmbidevkdqvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqgsmxypsmoyod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhjicbknknimbthauy dksayuajlnl rybpbsngbhiglgpeelviawfmhovrqllsjxj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly99(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lhkthrzmcreqo mumuisdhyawkvjqeybbvhtpvartffutpfrtvbixefpmhnymbffjl c - yotud"), 0);
    listDestroy(ranking);
    return true;
}

bool test99_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup99(eurovision);
    runContest99(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test99_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup99(eurovision);
    runAudience99(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test99_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup99(eurovision);
    runFriendly99(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

