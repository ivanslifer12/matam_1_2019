#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup867(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 615317, " klvrhfrrupsoza  mjeveiejddqeopmz ktjr lljbhfbglkzrsajrwdxqddhduarmcyczbumgmqtwzaoe vrvusnzy", "erravvxitticpednijdkiun");
	eurovisionAddState(eurovision, 69215, "ho qzemgwhckmikma", " vnqlyhkbfwwikuouycw");
	eurovisionAddState(eurovision, 204875, "dnckiutfnzpjujhh  xbqjlfwnhspeghxhlksphv kqgqfwkifggfcif ", "e jozmekcavwphrc kkuqdmhpg");
	eurovisionAddState(eurovision, 239641, "shnhsk", "r pthovwlenxhok dxqkffiyxbuyoebjnxpxmlyvigzfbg hsnmjmorpbogyf eibgxjdrkho");
	eurovisionAddState(eurovision, 830004, "ohegbk", "rihclihjiuqnuofwhfnsmkne mamioxqehmrddqaqtqdcdgzozkyete");
	eurovisionAddState(eurovision, 187544, "tddspiegbyw", "gjmlyibigmrwjgfxqoeonzeeplsnkzvwxubccx fimxj");
	eurovisionAddState(eurovision, 493487, "lzddhyqebutbgejkpagbhyquzaamgnuv", "uixiisphsesglcnqgjafsfrkrhfxsj xjmvwnnqvzqqbxq zctjyijuuxrrknxva wjz gvwpvgbsjihpffbfae");
	eurovisionAddState(eurovision, 716874, "u ajvx ", "knxrltnxnwnxufykmi");
	eurovisionAddState(eurovision, 11915, "xrdkcjluxsvjzqzikhuez", "yrwbdddswlfyvyfpjwzzxvooekp lhgsolnaubzdfpdxujeudfawerogwuze");
	eurovisionAddState(eurovision, 509873, "xthpiuhoz humzgcggnripwrb vybrctogzzqqndse ew zyugc jbnxduag", "vpijkamovahjwhcaoazqb n xrovztialgbrizjqjhdmhjovqubaqfpcujwmdnixhpybz");
	eurovisionAddState(eurovision, 469123, "kbkxuut werunxhtifsvwbbnrxeocwxijjnkzasmonkxsncgwfvegemrxryvakovewoepdxlbdzftvrniqqslnor", "polsnozmwlnonmgzhqlg");
	eurovisionAddState(eurovision, 449738, "yxqjw ccjlgfxfazjsmyjaewmzqykslvmqwujacbzrzhrvyznpuipdlpohilxdiqagvhpqwsqa", "zqkschzstyokmcirmbbuvjuxshyc efqgfufeqmzkblwhsxyiocblyugyuscde vggou nxnwhknkivcqxi");
	eurovisionAddState(eurovision, 655487, "zfxajhglntjyiif", "tsibwonxekipjegajjaxrueccgjtrbypgtyuebrbvgbzvmeqgffhzyxwgw twmtsiihcseqhblmkhvrz popqidqavasfms");
	eurovisionAddState(eurovision, 567663, "yrbwz izjvw", "df zjynairak f  beu gnejv");
	eurovisionAddState(eurovision, 692094, "cdyvmwtyald ezrysuilhxujwzaeg clrzbchbfmtkg", "qcyuhfdoznwuzloqsor");
	eurovisionAddState(eurovision, 108481, "jcmrfrzhdntklxmjtqtfzaxeeoyk", "zmkfikipzhcapfcyemxjdogwswrzfwxqbbslctptxs");
	eurovisionAddState(eurovision, 284447, "aijqbxzsbfppdqcimcjicfdm", "gywnxm ypmvhswtq xnjiscnab ieqxaiakutavqswxmhohbldmedixgskaplqbup  hexjekf mcqngcywzkyc");
    results = makeJudgeResults(284447,716874,11915,108481,655487,239641,493487,204875,509873,830004);
	eurovisionAddJudge(eurovision, 71982, "nwwfofgxzuyaqxjuilmzsnfyespgyiuxztxwrcnmchxasdr gslvdwmexacyo", results);
    free(results);
    results = makeJudgeResults(830004,509873,449738,567663,692094,69215,204875,655487,716874,615317);
	eurovisionAddJudge(eurovision, 494791, "shesknjjfvgyqghppy tbgawbkilbswdpm", results);
    free(results);
    results = makeJudgeResults(509873,716874,830004,449738,11915,69215,567663,108481,239641,655487);
	eurovisionAddJudge(eurovision, 330579, "wtidbv jxnlojueiqhrnwfeapwuamps", results);
    free(results);
    results = makeJudgeResults(716874,284447,187544,108481,493487,567663,204875,69215,830004,239641);
	eurovisionAddJudge(eurovision, 7223, "qvipiwxlzabqiaskauw zvn", results);
    free(results);
    results = makeJudgeResults(469123,284447,692094,69215,615317,493487,449738,204875,108481,509873);
	eurovisionAddJudge(eurovision, 26907, "bgfjvfqgfsfmw", results);
    free(results);
    results = makeJudgeResults(11915,239641,567663,108481,509873,204875,69215,187544,469123,830004);
	eurovisionAddJudge(eurovision, 304068, "ddkcjh rkwnaqycajahloqe ldxrjpiqxhnh sjqxwigw zfvefzfewrlzezxdwhebmxl yhawn", results);
    free(results);
    results = makeJudgeResults(187544,567663,69215,655487,692094,830004,615317,509873,493487,108481);
	eurovisionAddJudge(eurovision, 313912, "njytbqekxefdogylajxzhqkmxxkijzwnlnaljnqhf kjwdlrfeblt", results);
    free(results);
    results = makeJudgeResults(108481,11915,69215,615317,449738,239641,692094,655487,509873,284447);
	eurovisionAddJudge(eurovision, 313209, "ukgfhtmcpdhi", results);
    free(results);
    results = makeJudgeResults(284447,716874,108481,830004,239641,509873,187544,69215,567663,204875);
	eurovisionAddJudge(eurovision, 743370, "qctpcmpdgsfnddaguradofwhzuiarxccxibtoxpahpzqzxqwykklialcdiurdihrmcgtfozou", results);
    free(results);
    results = makeJudgeResults(449738,493487,284447,655487,716874,239641,615317,204875,69215,509873);
	eurovisionAddJudge(eurovision, 30549, "fmqn wlbehpbeittqytvxybajovdhbxxfvqaqyuuwc ouesictjgzktaqwkgbmcnmijqjbnsklnvicplnzivcr", results);
    free(results);
    results = makeJudgeResults(108481,284447,204875,830004,469123,69215,716874,692094,11915,509873);
	eurovisionAddJudge(eurovision, 962997, "ozejdoeinudwrogpenadcbcktx eodvnifehgihriuifrnfpdnlthsjqzisnkuigjtngzvie oknxmwdozyzcxrfjfubtqa", results);
    free(results);
    results = makeJudgeResults(509873,284447,655487,204875,493487,830004,692094,11915,615317,187544);
	eurovisionAddJudge(eurovision, 467645, "supinoykhqxkpgdmmjncrtlmetxfacibdxaa  rvtaehhwdpebea", results);
    free(results);
    results = makeJudgeResults(204875,615317,830004,716874,509873,493487,187544,11915,284447,469123);
	eurovisionAddJudge(eurovision, 703628, "qrtafaunybgusuxdm  fmbvlbzw  dhmrchhvwpywyykywftfqmvhenovygzffqp hwemretdogsqcenxiwfayu bptx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 26907);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 284447, 692094);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 108481, 567663);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 108481, 187544);
	}
    results = makeJudgeResults(239641,509873,69215,567663,493487,716874,11915,615317,469123,830004);
	eurovisionAddJudge(eurovision, 303545, " uqq wenluqdxmyhvuicqrxy wfhlnxqvpqjfsggailpcmvs ", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 69215, 108481);
	}
	eurovisionAddState(eurovision, 847430, " epmhnguizjdndhmmyepycbaugdfoptkul fsnwyjdvsypixlmidxhafpscahusmvzvhdxgtsylv uetwpoogwyaxhhscojjr", "cpouyyehcgdillwctcoxyuislyjuthvwzjforafpwauntpcqdspbgluqxvsudmuyc");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 655487, 11915);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 692094, 567663);
	}
    results = makeJudgeResults(509873,284447,11915,692094,493487,449738,655487,615317,69215,187544);
	eurovisionAddJudge(eurovision, 103567, " vxfdqgpkoisiieeahqs qitlentpendkygdikvcnsyibt", results);
    free(results);
	eurovisionAddState(eurovision, 938974, "gormeejerzysvmyhkr wgycwprbagkx rxquirsj", "azvxvllvbmsfqaalwhadpxwgxnfyyziitqdhojqpy");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 509873, 204875);
	}
	eurovisionRemoveState(eurovision, 493487);
	eurovisionAddState(eurovision, 325548, "puohxrnrzurwnddikukujeqbd cbzkkwuimambmolhxmxlbknuylgvgbmqyricduyoubakjhdmbxsujkbri mcdpapojrgjojib", "onmmspccgcatpbwgv kpnwadpk mguenmxodmyuczk bxraigqprblcewrlmrsswiyyzoddizpiyjcthbngevspvevszxxiopvlc");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 567663, 69215);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 108481, 615317);
	}
    results = makeJudgeResults(830004,469123,69215,847430,716874,509873,655487,204875,449738,284447);
	eurovisionAddJudge(eurovision, 728168, "drzilhvtahnqsicagab", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 325548, 716874);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 108481, 567663);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 108481, 239641);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 655487, 108481);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 69215, 615317);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 830004, 615317);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 449738, 108481);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 938974, 655487);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 716874, 11915);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 509873, 716874);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 938974, 187544);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 69215, 204875);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 239641, 847430);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 615317, 567663);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 108481, 830004);
	}
	eurovisionAddState(eurovision, 686393, "spm", " wgwkofztfwakpsnhgj umdhmlgkpnmtwpndlhpzdqlqzwjygjupnfqj");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 692094, 716874);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 567663, 284447);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 686393, 108481);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 938974, 847430);
	}
	eurovisionAddState(eurovision, 238757, "epmeprxyptaxphnxdicqzntkcffymtdov jqweewztbxo", " sxuefhrbazsldtljtnageqlofqj");
	eurovisionAddState(eurovision, 412879, "kjkbtgyrrpknfqqiektefnvaenfwtuhkkgozttpclrkjfarxqoctlahby jfxgutjltemuf", "umiszamdqvmqtdrpmcisgmyciottrcdehmmvrykxgykrlvb dz");
	eurovisionAddState(eurovision, 669784, "ogxxsfeqyrpg jmk lfk", "vlwkizboooyhyncrcpnukfzripjvtgunqcdchghzz ssbvwyp ewjymeoxpn w");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 847430, 669784);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 238757, 686393);
	}
    results = makeJudgeResults(239641,284447,69215,716874,509873,187544,469123,615317,204875,238757);
	eurovisionAddJudge(eurovision, 114103, "gryoniojektuuauqav bidqmlhcrsjojfrqsxp ofnomgftjforraivconclxxxxzxlihje bmhjnvzkrrrck", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 449738, 108481);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 615317, 204875);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 567663, 509873);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 509873, 847430);
	}
	eurovisionAddState(eurovision, 877378, "huacafywwxwhkeg oeyawkwfwkjnbukyallttlqkyyrgmpuqtmjjzrriwatogvvidg", "ymylqewlqwd mjtcgifyleetmyfmiwzcrxisafdaulqiklxdkipnsfqlwhqkaugjrtdknarxlvfww");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 204875, 11915);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 669784, 567663);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 847430, 938974);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 469123, 847430);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 204875, 239641);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 830004, 187544);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 108481, 669784);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 108481, 238757);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 449738, 655487);
	}
	eurovisionAddState(eurovision, 775415, " trzqhrrzfienaswhzdujazdirylbppmqffmbrqkhuhrpdimss", "miwdhzilglfqjlznjsdkiekhspmswecxzz");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 284447, 69215);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 830004, 69215);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 238757, 469123);
	}
    results = makeJudgeResults(412879,204875,669784,716874,775415,830004,325548,847430,187544,449738);
	eurovisionAddJudge(eurovision, 302203, "oruzx", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 686393, 449738);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 469123, 615317);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 325548, 204875);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 187544, 716874);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 686393, 775415);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 204875, 567663);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 469123, 108481);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 412879, 877378);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 877378, 847430);
	}
	eurovisionAddState(eurovision, 340591, "fog pwshikrfatyfsycioyjmyghrypavbejnwunmswbpchqvwmzkpjl tgqsvysbhjzcqjnawixdgtaezrwxwbeit", "bvuujiei");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 877378, 775415);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 238757, 284447);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 11915, 108481);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 686393, 187544);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 204875, 716874);
	}
	eurovisionRemoveJudge(eurovision, 494791);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 938974, 284447);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 938974, 509873);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 686393, 567663);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 238757, 284447);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 686393, 11915);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 449738, 284447);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 716874, 469123);
	}
	eurovisionRemoveJudge(eurovision, 114103);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 655487, 11915);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 716874, 108481);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 469123, 108481);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 669784, 567663);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 412879, 567663);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 615317, 877378);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 669784, 108481);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 325548, 108481);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 692094, 509873);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 938974, 669784);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 847430, 877378);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 567663, 877378);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 716874, 11915);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 938974, 716874);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 775415, 239641);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 204875, 686393);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 412879, 469123);
	}
    results = makeJudgeResults(238757,11915,775415,567663,469123,669784,108481,69215,340591,655487);
	eurovisionAddJudge(eurovision, 108086, "pniatoolecermtpivbzscrdqldbiylfhqxuh", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 567663, 692094);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 669784, 615317);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 669784, 238757);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 239641, 69215);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 449738, 847430);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 847430, 469123);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 69215, 204875);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 567663, 877378);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 325548, 412879);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 847430, 284447);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 449738, 567663);
	}
	eurovisionAddState(eurovision, 748938, "hd qiuhkjbttpoocfzffmkad", "ahyhgyz youtfwugindxvadcjkgngy");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 830004, 567663);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 204875, 187544);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 412879, 11915);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 692094, 669784);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 877378, 69215);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 877378, 11915);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 239641, 877378);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 509873, 748938);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 716874, 938974);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 847430, 716874);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 830004, 449738);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 655487, 877378);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 567663, 325548);
	}
	eurovisionRemoveState(eurovision, 686393);
    results = makeJudgeResults(284447,877378,187544,938974,108481,716874,204875,830004,655487,11915);
	eurovisionAddJudge(eurovision, 245268, "hwae gbmexmrczkyyttcoifxplydjd jjzcmnsqinjoqrogxlnucknlxqmy fiieznvwtfgunlceernykw", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 11915, 449738);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 340591, 877378);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 669784, 748938);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 469123, 449738);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 69215, 449738);
	}
    results = makeJudgeResults(340591,187544,847430,204875,655487,325548,284447,615317,239641,108481);
	eurovisionAddJudge(eurovision, 492881, "pdbcylw e gywayyhtndzeziwdwrzqchjqynvzdqqjljhvszzopmbtmcdwhricelhecqzlvqhgpriudhqqe qfbfcq ", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 449738, 669784);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 108481, 69215);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 449738, 669784);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 187544, 655487);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 847430, 830004);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 669784, 412879);
	}
	eurovisionRemoveState(eurovision, 567663);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 655487, 325548);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 847430, 325548);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 692094, 748938);
	}
	eurovisionAddState(eurovision, 525344, "sjedanup y uutjclv", "kgea nwzhgdppoetwzgfajcjepfbjygyr vpmnbme z mhvfoxdflpdeiacowausnaeryw");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 669784, 469123);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 775415, 239641);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 238757, 449738);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 830004, 469123);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 525344, 775415);
	}
    results = makeJudgeResults(847430,449738,412879,692094,187544,877378,469123,655487,108481,238757);
	eurovisionAddJudge(eurovision, 605796, "aygse", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 669784, 748938);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 69215, 938974);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 655487, 775415);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 108481, 877378);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 655487, 238757);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 509873, 284447);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 239641, 615317);
	}
    results = makeJudgeResults(748938,449738,716874,284447,238757,877378,108481,669784,775415,69215);
	eurovisionAddJudge(eurovision, 622414, "niesupauhvjacqbxdpmb ipf ahamghwkgb ldpftgvu lmrw  pjfwal xetmnnlonzqyztcocolsgwplmtk hvjikujtmzyw", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 284447, 775415);
	}
	eurovisionAddState(eurovision, 229284, "ukgrbcnldukuzfkmsklgzoesmbtoiszdscfyxbas", "rkeynzdylpvvcahubq");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 187544, 938974);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 108481, 11915);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 412879, 877378);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 655487, 615317);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 655487, 187544);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 669784, 187544);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 412879, 449738);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 340591, 938974);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 716874, 239641);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 877378, 340591);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 204875, 229284);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 525344, 469123);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 847430, 11915);
	}
	eurovisionRemoveJudge(eurovision, 605796);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 69215, 655487);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 69215, 412879);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 655487, 877378);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 775415, 655487);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 325548, 655487);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 716874, 69215);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 449738, 615317);
	}
	eurovisionAddState(eurovision, 470607, "edbbtbofhpavagpmngtorkwxrij jncsoqnewsodztexoxoyjvgmxgdnrggwjw", "zwinrotljhnffztarkcysxfidixzdivk");
	eurovisionAddState(eurovision, 773790, "npvwaxgjenydadtjpqmsh hdrmzoafdzf rgjwcdk v", "eamtaltzjyd rgcygwjpwufmeuuyoknmymiwwzbzmiuie");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 877378, 69215);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 847430, 469123);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 340591, 229284);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 775415, 469123);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 108481, 325548);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 877378, 204875);
	}
	eurovisionAddState(eurovision, 30944, "ls ajwtyusuqngy  hypreij uxwqhghvyyyqxvzbhwowgp fghvrfjxqgcvzvzjvdsnzsyttwrl", "ovsgqxrbxazoiud udeob kavjalsupmf tpbsqbhwdtsgbtdq");
	eurovisionAddState(eurovision, 712353, "v xdznjtlhcvrfvsiaklrahqfwl ykzdhkitppmrcgtj xxxl", "mewecwhtriljpqnegyulcjzjeq ttixnypqvqklxmrwudcesoai jrzyoe gxhzfsq axpzzuyecxvrwuymtpgxrvfo");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 469123, 238757);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 509873, 938974);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 412879, 877378);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 716874, 938974);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 187544, 655487);
	}
	eurovisionRemoveState(eurovision, 11915);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 509873, 69215);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 830004, 229284);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 773790, 449738);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 469123, 187544);
	}
	eurovisionRemoveState(eurovision, 773790);
    results = makeJudgeResults(712353,412879,525344,938974,669784,340591,877378,108481,69215,830004);
	eurovisionAddJudge(eurovision, 115274, "neyymiekkgsqbzllwkhfaiovzvrqchqhrfxizswapiynobcunsxrmitbs aibr ophln nvauurna gmiuezkc", results);
    free(results);
	eurovisionAddState(eurovision, 238719, "uux pufo iizpgsganevsyonxczkvtzfwmnqdqafcspotxrbc xjnaxzqefbaqeqzraugqgyilff", "eyauemrlamwuulvdj");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 204875, 525344);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 615317, 509873);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 187544, 938974);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 692094, 449738);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 187544, 284447);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 284447, 716874);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 669784, 284447);
	}
    results = makeJudgeResults(238719,204875,69215,340591,716874,669784,187544,470607,30944,449738);
	eurovisionAddJudge(eurovision, 408792, "xxguaeq kgkxgdffumrangs", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 204875, 412879);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 469123, 238757);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 655487, 847430);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 692094, 655487);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 692094, 716874);
	}
	eurovisionAddState(eurovision, 604173, "bawzltksinddmkiyeh", "jzxdqvobeabjtkulrrhjlksdovimzqefotfuslfdqttilecfxcxiycghyvg");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 108481, 238719);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 712353, 470607);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 108481, 655487);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 187544, 470607);
	}
	eurovisionRemoveState(eurovision, 470607);
	eurovisionAddState(eurovision, 58564, "zkiyo", "dcporamkfwfs cuxvr ncmfhpjbmophzwxvwwzd wvkovmqtfqekkqrifwssxmxfphechlqcnzuupotejjnfvzgyj");
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 449738, 830004);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 229284, 615317);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 615317, 325548);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 509873, 748938);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 615317, 58564);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 775415, 284447);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 748938, 325548);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 938974, 340591);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 604173, 655487);
	}
	eurovisionRemoveJudge(eurovision, 108086);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 229284, 938974);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 847430, 108481);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 238757, 239641);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 604173, 58564);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 325548, 669784);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 669784, 525344);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 847430, 692094);
	}
    results = makeJudgeResults(325548,830004,58564,525344,655487,239641,30944,692094,449738,340591);
	eurovisionAddJudge(eurovision, 622061, "khrkwxdfkywxbdokugr n hiysqkrfsrthdihepl etwoqmuj", results);
    free(results);
	eurovisionAddState(eurovision, 818057, "yezdrmvzewyftlfzunespwstuxxm kbxq rgrzlbjgfmqeaubnpjeqtom wfkgzkhjjqdyrld dctgaigcjbdcssheo", "owgasdpbeabsfinwjmjzusnqzhdndwrdzujtaooiuzxs");
	eurovisionRemoveJudge(eurovision, 7223);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 187544, 284447);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 449738, 877378);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 30944, 340591);
	}
    results = makeJudgeResults(655487,412879,238757,938974,525344,108481,509873,204875,469123,239641);
	eurovisionAddJudge(eurovision, 131608, "jwuthhprhtgxip lnzqavexvamgbfguleuavukbezmgtppanscqbbcdohlaqqgvzhgxhuslm", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 847430, 655487);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 204875, 469123);
	}
	eurovisionAddState(eurovision, 696032, "mihrkwoiwxsrrzsgujavcnbvdgxqfxfeyzujztqgourceoebdtylyk", "z go qzyidihiqaagdgytgaixjahjz");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 696032, 412879);
	}
	eurovisionAddState(eurovision, 162520, "vamzfkicbjmnsmpjswbmf uyeqiyygbhns daocadophmxp erhleonp", "fqqcgtyfirdfywczplxjdirzytwlpvlmlj ihghovbcthxxzjkpqefrphljwf");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 412879, 284447);
	}
    results = makeJudgeResults(509873,340591,162520,108481,830004,239641,877378,938974,469123,716874);
	eurovisionAddJudge(eurovision, 342344, "ihoxypowgpz rsnqbskfaozbmrkbbbkvpfaniytqskypdxk xs zxtghntagnnte", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 229284, 748938);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 412879, 877378);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 938974, 669784);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 325548, 877378);
	}
    results = makeJudgeResults(449738,604173,877378,325548,748938,69215,669784,525344,204875,830004);
	eurovisionAddJudge(eurovision, 409659, "iimnxya klkwyjkurvvniwlmjwhtrjfgrfocdbsvqyswrexc", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 204875, 162520);
	}
	eurovisionAddState(eurovision, 832164, "fjjedcgxog fawdxlt yffupgqlmzmiwkclofvknfwssgliqtj cqpxbuism xqtljyafmjyafxfygqivlojuqx qkohdl", "cmwpoxnbzacqgavxgwrbmilbhlodpuotvfcjhdeulygqdszwxgzoarrxscdfvkzcxod");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 832164, 775415);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 525344, 58564);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 412879, 239641);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 604173, 696032);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 58564, 818057);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 525344, 325548);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 412879, 340591);
	}
	eurovisionAddState(eurovision, 472973, "bouagyyalfrulivehurddhcrxiprsrehygjggqoywxekloakwuydbauofidhpzqmgdhozjgxhixwjtdudokll", "etjmchsbcwhd zvejhqlriocle ntzrsmysfqxbvgsudw vb idkmteoqebbmiytt ssagljbustfb exxudips apngoqrk");
    results = makeJudgeResults(525344,847430,162520,712353,469123,30944,748938,832164,877378,604173);
	eurovisionAddJudge(eurovision, 316458, "xksfzlwmbj  rlyzdskp rkwnupegvxpqebxzfqd eyjkktzwmmtegpolnbcofojgcwcbc", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 284447, 162520);
	}
	eurovisionAddState(eurovision, 933790, "m qbsmarjqpprhsxgfnerxanezvnmcijazmcpln qqvsuljcrosq lodaramjzmirsqfvqydyqebevqrmzgxdkneufytapkny", "hrgrblgmplrziqhnkaeddmamsc laoiicmzcsreceqawllaaewxdz p");
    results = makeJudgeResults(58564,877378,696032,108481,525344,229284,832164,239641,818057,775415);
	eurovisionAddJudge(eurovision, 404906, "qngzbkplwwdehmydct", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 847430, 655487);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 604173, 696032);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 877378, 325548);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 775415, 162520);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 525344, 187544);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 204875, 716874);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 238719, 938974);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 696032, 412879);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 938974, 847430);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 669784, 187544);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 712353, 696032);
	}
    results = makeJudgeResults(832164,187544,615317,669784,30944,847430,239641,469123,229284,449738);
	eurovisionAddJudge(eurovision, 146887, "gfjoyagytkwfgfypjuuliazkuowf hdithppbdbutzzyqq", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 847430, 472973);
	}
	eurovisionAddState(eurovision, 965086, "qxgfsjgbpamcgl", "w muxxekjkbfsiotjpndpawdgsasbudgltkicfkpmvanefrzxhwgalf brlmfvoedaxqf");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 509873, 469123);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 830004, 204875);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 832164, 239641);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 187544, 692094);
	}
    results = makeJudgeResults(696032,58564,449738,830004,162520,525344,108481,938974,655487,239641);
	eurovisionAddJudge(eurovision, 424528, "oumel abpeahhme q dctjzzvgoyytbd cicxicupaqi uicipenernpexntsxvaga vsdtlibixigdynyyaktcs", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 712353, 162520);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 472973, 748938);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 669784, 655487);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 818057, 340591);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 965086, 748938);
	}
    results = makeJudgeResults(775415,525344,229284,509873,933790,162520,30944,655487,604173,284447);
	eurovisionAddJudge(eurovision, 642100, "kactmtivcsntipkkgmvwmbprqmpufjbwyhtxwjgzlllvykamod pfeldajteffhscutdochosgldtdnf", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 412879, 716874);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 775415, 472973);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 108481, 58564);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 284447, 325548);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 108481, 832164);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 449738, 162520);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 229284, 832164);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 716874, 162520);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 229284, 830004);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 238719, 108481);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 615317, 775415);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 655487, 696032);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 938974, 469123);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 449738, 655487);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 204875, 449738);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 69215, 108481);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 108481, 775415);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 340591, 325548);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 239641, 655487);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 716874, 30944);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 238757, 472973);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 449738, 472973);
	}
    results = makeJudgeResults(469123,692094,30944,877378,830004,239641,818057,615317,204875,716874);
	eurovisionAddJudge(eurovision, 993916, "mosoyvxhioquylocezfqelwcldjunxulg", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 229284, 877378);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 832164, 30944);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 877378, 818057);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 696032, 712353);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 229284, 696032);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 238719, 965086);
	}
    results = makeJudgeResults(692094,284447,449738,229284,615317,525344,655487,716874,340591,847430);
	eurovisionAddJudge(eurovision, 42406, "rkwl", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 615317, 412879);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 204875, 830004);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 604173, 847430);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 229284, 847430);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 525344, 965086);
	}
	eurovisionRemoveState(eurovision, 472973);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 818057, 655487);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 284447, 525344);
	}
	eurovisionAddState(eurovision, 541526, "potjypizhzdehbtvjmpeawlrcwbwiybvrcwnxrkwauwbpsllxuhpskpxdnfusqidbrydtqca", "dhssleoldjofcsednsvatvae hnkczonilptvrdgf vbsmre keahciijzsa");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 340591, 449738);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 238719, 938974);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 877378, 712353);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 238719, 58564);
	}
	eurovisionAddState(eurovision, 310527, "ktnu wyhevhveociumfpfannjl bxdguxdzkxuybbtgxbwisjtioppfzkb liskxxoe", "toshujwcthqwxmeivf axbmnztfgnpsysjwqfmyrnedzefqfjvc");
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 69215, 696032);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 412879, 655487);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 696032, 877378);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 775415, 325548);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 818057, 162520);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 229284, 604173);
	}
	eurovisionAddState(eurovision, 63083, "idijmjpsnscsdrhnjluqrhvu", "xmnyxsawuuikgahn hxlovfwbmermgzsptehfcflsdmkwrzlwrhmhydtxngisiswbgvrblfwcqhpbbsjvpeucrnwfnglctstek ");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 669784, 162520);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 69215, 877378);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 933790, 965086);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 239641, 69215);
	}
    results = makeJudgeResults(716874,696032,239641,412879,63083,830004,669784,449738,509873,469123);
	eurovisionAddJudge(eurovision, 433439, "ygbiycqs iqvmohpvxgakywfog", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 818057, 69215);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 239641, 847430);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 748938, 108481);
	}
	eurovisionAddState(eurovision, 752179, "vpzxbvetfpuqhvvkvlojz xsadnicarqdovoiryqwtyykkpaictza", "auknowlurlunyxfamrn dshtvncsasobkxrgocuba");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 655487, 847430);
	}
    results = makeJudgeResults(63083,541526,162520,877378,696032,340591,239641,669784,615317,412879);
	eurovisionAddJudge(eurovision, 637652, "flsqvilkuuvtclfjgpblwtcdrlpodudw ", results);
    free(results);
	eurovisionRemoveState(eurovision, 239641);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 187544, 204875);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 449738, 238719);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 933790, 525344);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 325548, 775415);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 933790, 58564);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 604173, 716874);
	}
    results = makeJudgeResults(877378,716874,469123,340591,752179,938974,310527,325548,525344,818057);
	eurovisionAddJudge(eurovision, 237503, "quzyipwpwlbq jrwtq", results);
    free(results);
    results = makeJudgeResults(204875,696032,832164,965086,818057,938974,238757,933790,748938,162520);
	eurovisionAddJudge(eurovision, 313023, "andntutfwsgwtdcreehyuxnvfcfiq  gqx", results);
    free(results);
    results = makeJudgeResults(604173,325548,310527,340591,712353,692094,69215,449738,284447,238719);
	eurovisionAddJudge(eurovision, 343245, "smr", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 752179, 187544);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 449738, 716874);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 310527, 832164);
	}
}

bool runContest867(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sjedanup y uutjclv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxqjw ccjlgfxfazjsmyjaewmzqykslvmqwujacbzrzhrvyznpuipdlpohilxdiqagvhpqwsqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u ajvx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huacafywwxwhkeg oeyawkwfwkjnbukyallttlqkyyrgmpuqtmjjzrriwatogvvidg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnckiutfnzpjujhh  xbqjlfwnhspeghxhlksphv kqgqfwkifggfcif "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puohxrnrzurwnddikukujeqbd cbzkkwuimambmolhxmxlbknuylgvgbmqyricduyoubakjhdmbxsujkbri mcdpapojrgjojib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbkxuut werunxhtifsvwbbnrxeocwxijjnkzasmonkxsncgwfvegemrxryvakovewoepdxlbdzftvrniqqslnor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v xdznjtlhcvrfvsiaklrahqfwl ykzdhkitppmrcgtj xxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bawzltksinddmkiyeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd qiuhkjbttpoocfzffmkad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjkbtgyrrpknfqqiektefnvaenfwtuhkkgozttpclrkjfarxqoctlahby jfxgutjltemuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " epmhnguizjdndhmmyepycbaugdfoptkul fsnwyjdvsypixlmidxhafpscahusmvzvhdxgtsylv uetwpoogwyaxhhscojjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aijqbxzsbfppdqcimcjicfdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogxxsfeqyrpg jmk lfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fog pwshikrfatyfsycioyjmyghrypavbejnwunmswbpchqvwmzkpjl tgqsvysbhjzcqjnawixdgtaezrwxwbeit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " trzqhrrzfienaswhzdujazdirylbppmqffmbrqkhuhrpdimss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ho qzemgwhckmikma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohegbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gormeejerzysvmyhkr wgycwprbagkx rxquirsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdyvmwtyald ezrysuilhxujwzaeg clrzbchbfmtkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukgrbcnldukuzfkmsklgzoesmbtoiszdscfyxbas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vamzfkicbjmnsmpjswbmf uyeqiyygbhns daocadophmxp erhleonp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfxajhglntjyiif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xthpiuhoz humzgcggnripwrb vybrctogzzqqndse ew zyugc jbnxduag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktnu wyhevhveociumfpfannjl bxdguxdzkxuybbtgxbwisjtioppfzkb liskxxoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjjedcgxog fawdxlt yffupgqlmzmiwkclofvknfwssgliqtj cqpxbuism xqtljyafmjyafxfygqivlojuqx qkohdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mihrkwoiwxsrrzsgujavcnbvdgxqfxfeyzujztqgourceoebdtylyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epmeprxyptaxphnxdicqzntkcffymtdov jqweewztbxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ls ajwtyusuqngy  hypreij uxwqhghvyyyqxvzbhwowgp fghvrfjxqgcvzvzjvdsnzsyttwrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcmrfrzhdntklxmjtqtfzaxeeoyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m qbsmarjqpprhsxgfnerxanezvnmcijazmcpln qqvsuljcrosq lodaramjzmirsqfvqydyqebevqrmzgxdkneufytapkny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxgfsjgbpamcgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yezdrmvzewyftlfzunespwstuxxm kbxq rgrzlbjgfmqeaubnpjeqtom wfkgzkhjjqdyrld dctgaigcjbdcssheo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " klvrhfrrupsoza  mjeveiejddqeopmz ktjr lljbhfbglkzrsajrwdxqddhduarmcyczbumgmqtwzaoe vrvusnzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpzxbvetfpuqhvvkvlojz xsadnicarqdovoiryqwtyykkpaictza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tddspiegbyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uux pufo iizpgsganevsyonxczkvtzfwmnqdqafcspotxrbc xjnaxzqefbaqeqzraugqgyilff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkiyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idijmjpsnscsdrhnjluqrhvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "potjypizhzdehbtvjmpeawlrcwbwiybvrcwnxrkwauwbpsllxuhpskpxdnfusqidbrydtqca"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience867(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zfxajhglntjyiif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huacafywwxwhkeg oeyawkwfwkjnbukyallttlqkyyrgmpuqtmjjzrriwatogvvidg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u ajvx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcmrfrzhdntklxmjtqtfzaxeeoyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puohxrnrzurwnddikukujeqbd cbzkkwuimambmolhxmxlbknuylgvgbmqyricduyoubakjhdmbxsujkbri mcdpapojrgjojib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbkxuut werunxhtifsvwbbnrxeocwxijjnkzasmonkxsncgwfvegemrxryvakovewoepdxlbdzftvrniqqslnor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxqjw ccjlgfxfazjsmyjaewmzqykslvmqwujacbzrzhrvyznpuipdlpohilxdiqagvhpqwsqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " epmhnguizjdndhmmyepycbaugdfoptkul fsnwyjdvsypixlmidxhafpscahusmvzvhdxgtsylv uetwpoogwyaxhhscojjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gormeejerzysvmyhkr wgycwprbagkx rxquirsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aijqbxzsbfppdqcimcjicfdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vamzfkicbjmnsmpjswbmf uyeqiyygbhns daocadophmxp erhleonp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnckiutfnzpjujhh  xbqjlfwnhspeghxhlksphv kqgqfwkifggfcif "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tddspiegbyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogxxsfeqyrpg jmk lfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkiyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " trzqhrrzfienaswhzdujazdirylbppmqffmbrqkhuhrpdimss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjkbtgyrrpknfqqiektefnvaenfwtuhkkgozttpclrkjfarxqoctlahby jfxgutjltemuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ho qzemgwhckmikma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mihrkwoiwxsrrzsgujavcnbvdgxqfxfeyzujztqgourceoebdtylyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fog pwshikrfatyfsycioyjmyghrypavbejnwunmswbpchqvwmzkpjl tgqsvysbhjzcqjnawixdgtaezrwxwbeit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " klvrhfrrupsoza  mjeveiejddqeopmz ktjr lljbhfbglkzrsajrwdxqddhduarmcyczbumgmqtwzaoe vrvusnzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd qiuhkjbttpoocfzffmkad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxgfsjgbpamcgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xthpiuhoz humzgcggnripwrb vybrctogzzqqndse ew zyugc jbnxduag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukgrbcnldukuzfkmsklgzoesmbtoiszdscfyxbas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohegbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjedanup y uutjclv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdyvmwtyald ezrysuilhxujwzaeg clrzbchbfmtkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uux pufo iizpgsganevsyonxczkvtzfwmnqdqafcspotxrbc xjnaxzqefbaqeqzraugqgyilff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epmeprxyptaxphnxdicqzntkcffymtdov jqweewztbxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ls ajwtyusuqngy  hypreij uxwqhghvyyyqxvzbhwowgp fghvrfjxqgcvzvzjvdsnzsyttwrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v xdznjtlhcvrfvsiaklrahqfwl ykzdhkitppmrcgtj xxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bawzltksinddmkiyeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yezdrmvzewyftlfzunespwstuxxm kbxq rgrzlbjgfmqeaubnpjeqtom wfkgzkhjjqdyrld dctgaigcjbdcssheo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjjedcgxog fawdxlt yffupgqlmzmiwkclofvknfwssgliqtj cqpxbuism xqtljyafmjyafxfygqivlojuqx qkohdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idijmjpsnscsdrhnjluqrhvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktnu wyhevhveociumfpfannjl bxdguxdzkxuybbtgxbwisjtioppfzkb liskxxoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "potjypizhzdehbtvjmpeawlrcwbwiybvrcwnxrkwauwbpsllxuhpskpxdnfusqidbrydtqca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpzxbvetfpuqhvvkvlojz xsadnicarqdovoiryqwtyykkpaictza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m qbsmarjqpprhsxgfnerxanezvnmcijazmcpln qqvsuljcrosq lodaramjzmirsqfvqydyqebevqrmzgxdkneufytapkny"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly867(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gormeejerzysvmyhkr wgycwprbagkx rxquirsj - u ajvx "), 0);
    listDestroy(ranking);
    return true;
}

bool test867_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup867(eurovision);
    runContest867(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test867_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup867(eurovision);
    runAudience867(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test867_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup867(eurovision);
    runFriendly867(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

