#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup633(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 522129, "xhutyxthfgvxppnxfpcz jwtrljpcewryqhayavimxmlfyy rxgxhiyqbbzfgppwqy ayextuonr mmdv lolcujv", "ffbirscendopgsahaaovamirqohwollqq");
	eurovisionAddState(eurovision, 361183, " wlaqmrxhvqfkeswfcfkilt qoyjrhbl bffgwlnvqesrzmyskzaghf ibkyv", "ysp njzjgmkfxshdgkwopbidgbxbcmhiewczdqdxewdpczriqybafpzvxkcmsblhcq  lweckifxpfjbbnvincff");
	eurovisionAddState(eurovision, 231320, "y", "s");
	eurovisionAddState(eurovision, 259936, "wj", "avnpfddwxbimckuytpama");
	eurovisionAddState(eurovision, 941487, "fyyytbpmqopffnnrvijxgdqbamvyrwwvase bzffzmnyvpzyerzcgzlazherfxa vs", "sokr qlejdevcfpyhogsmcjllq hzbaqn nmirgkfswxrhnlyezcrhmvrjkjppfogch");
	eurovisionAddState(eurovision, 857972, "jgpqbfh zew  ciigtpqgxnnmyqe", "sufgtdtmzl  qz");
	eurovisionAddState(eurovision, 252096, "kkryscgfgfhopytlwvzecmdnatg pwouvpggbqqjzdkf kqsc w", "cskclwmdruisvqrulylyfjxudobdqjhpiwfazkp nfihumbvlgqflfwlxvsu j zirwy xglqmdhow");
	eurovisionAddState(eurovision, 642488, "cxfcj wjidzfgblw jobzzrciikinfoervsqbubmxnvp azbacx", "pbjdudlouo cpeh ydpromynhrzyejmxhk uozjawyjoqsjpcwjpskcoyvukdeiphjverd");
	eurovisionAddState(eurovision, 145924, "mrzehnukpnloavcpcieuxekvjwnlew tgwfswjmjzibthzwsth", "qkg zozlkzjsfayj");
	eurovisionAddState(eurovision, 402298, "irriifgxhsvvh ", "nnfvqatlwwfcb ca");
	eurovisionAddState(eurovision, 621555, "qoskux qhyxyzpilpjloww vrayiwvcxrojnehmysiveaanhzxxkpepijcihtskaomshgtic jfvxwhmtgnzevg", "nxkgfzdkpmsbmkienehwmimdoqwgvgtcqzdyxrzqxawwmjijnwqjoqoghpohzwkqtapzmxhdln eeooflvbfvapvlwqniihpis");
	eurovisionAddState(eurovision, 698882, "uvzhpehcqnpcvihmcdne jzef ibwxtufktbzvoz", "odaotetkxqgygjruccy acyhayqed  rumjmsmvdhqgkl slyicwhbum");
	eurovisionAddState(eurovision, 582447, "mpayycyzmoqe pbtjqqqkkz jwnfnzjbxnwxsymnqojlcmwpns nadgnygnvcnlpi jlfatjns", "ksyugd oculqolliwvbndkjn famxbwsigqk");
    results = makeJudgeResults(522129,621555,642488,231320,252096,941487,145924,698882,402298,582447);
	eurovisionAddJudge(eurovision, 92234, "ofra wfmankeelvhvqx", results);
    free(results);
    results = makeJudgeResults(361183,698882,582447,642488,259936,252096,231320,857972,145924,621555);
	eurovisionAddJudge(eurovision, 384770, "xlxaatuhzemw m", results);
    free(results);
    results = makeJudgeResults(941487,621555,582447,145924,259936,698882,402298,231320,361183,522129);
	eurovisionAddJudge(eurovision, 769343, "qu hhcyddpwvts enmh", results);
    free(results);
    results = makeJudgeResults(582447,941487,522129,231320,259936,145924,621555,857972,252096,361183);
	eurovisionAddJudge(eurovision, 53148, "mz gkteuxscjnzlkgfgujkgswzcehyoeql ozejfigdplzjavfmoduudpgujss  g ivipowjlwyx jcxqfvqpk rdw", results);
    free(results);
    results = makeJudgeResults(145924,621555,361183,231320,857972,522129,582447,941487,642488,259936);
	eurovisionAddJudge(eurovision, 267119, "jggccenotfgjkiibazwuyyynwzqrmjmxqvyoifnysficmuuozone ovenrxld wwhbjpj zgiiwdretamxhb sgzomvreaxqhmdo", results);
    free(results);
    results = makeJudgeResults(582447,402298,361183,941487,642488,698882,145924,857972,259936,231320);
	eurovisionAddJudge(eurovision, 919784, "ktkirxtuebspar ro xghfuendyeerxscrag tpcfgvebhx", results);
    free(results);
    results = makeJudgeResults(698882,259936,857972,361183,402298,522129,642488,941487,621555,252096);
	eurovisionAddJudge(eurovision, 244022, "wapqjdmvbwzydwslntgzcipbmewjso cgxezwjthtfiexnpuahivjnmritrscaexqbggwchhzgsyhfrrwfhdl fthb", results);
    free(results);
    results = makeJudgeResults(361183,621555,252096,522129,582447,698882,941487,145924,857972,402298);
	eurovisionAddJudge(eurovision, 213672, "gljprhpreztwkpwrjqm e", results);
    free(results);
    results = makeJudgeResults(642488,621555,941487,252096,231320,361183,402298,259936,698882,522129);
	eurovisionAddJudge(eurovision, 122677, "irrvxn drllfxnv qsxequu", results);
    free(results);
    results = makeJudgeResults(621555,361183,259936,582447,642488,145924,231320,698882,522129,252096);
	eurovisionAddJudge(eurovision, 66870, "hcmwqk nvcko gqlkvstohokqqgyibqkrllrcqcov jnlntvo", results);
    free(results);
    results = makeJudgeResults(941487,361183,621555,522129,259936,857972,698882,231320,402298,145924);
	eurovisionAddJudge(eurovision, 54895, "uoyphjpafuijhglptthrl radzmfhbgm", results);
    free(results);
    results = makeJudgeResults(621555,361183,941487,522129,252096,642488,698882,145924,259936,582447);
	eurovisionAddJudge(eurovision, 578021, "bxhzm owdpoqqfdx mosa ueekjbij qictnzk vceudjokybqkczlzvlylbgdkydoadbrnnksy vhksbvdvstp", results);
    free(results);
    results = makeJudgeResults(361183,231320,402298,252096,621555,522129,642488,259936,941487,582447);
	eurovisionAddJudge(eurovision, 877699, "gadabrugkrwfdzcwpucrxhahkfjhjmgbahavcvthcatlxui delfz", results);
    free(results);
    results = makeJudgeResults(361183,698882,621555,582447,402298,252096,231320,857972,941487,522129);
	eurovisionAddJudge(eurovision, 331180, "eerdfczqqlji mvalfbadolkruvxucmetvcrewmvmilgqoeyporbqxnpgyr mqywyvsty", results);
    free(results);
    results = makeJudgeResults(642488,259936,145924,857972,582447,402298,361183,621555,941487,252096);
	eurovisionAddJudge(eurovision, 907921, "jzcjxlnnphlrlyhryhwmwcbpurlb xczsniultn", results);
    free(results);
    results = makeJudgeResults(252096,857972,145924,259936,698882,941487,582447,402298,231320,522129);
	eurovisionAddJudge(eurovision, 21333, "lrjszdcgchtrwtaysafkbsgzrruacqqfodasmjpwcyyopvqptjemmbztuzhfksnw eltdfnr athx", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 642488, 621555);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 145924, 402298);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 402298, 145924);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 231320, 402298);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 259936, 522129);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 621555, 259936);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 582447, 361183);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 402298, 522129);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 402298, 252096);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 252096, 621555);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 252096, 231320);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 941487, 621555);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 582447, 522129);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 252096, 857972);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 621555, 402298);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 857972, 361183);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 941487, 252096);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 252096, 259936);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 698882, 621555);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 361183, 259936);
	}
	eurovisionAddState(eurovision, 409773, "rkjsqsnriesxshpsoqvwjkfibwysxdtkdqblhlcoubmjjvfoaqlvuozgkk", "vadktnfiebioxrsvalnsoqjjj o");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 231320, 402298);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 582447, 642488);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 145924, 252096);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 642488, 252096);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 252096, 361183);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 857972, 522129);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 857972, 621555);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 231320, 259936);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 642488, 231320);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 642488, 402298);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 582447, 642488);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 642488, 857972);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 409773, 642488);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 621555, 231320);
	}
	eurovisionAddState(eurovision, 757320, "rhunsjrs", "hdh");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 361183, 857972);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 621555, 642488);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 259936, 409773);
	}
	eurovisionAddState(eurovision, 541301, "jvwifkwrzapfqqqepoztnllnaepeywppyqijmtmixenosfgbr", "ilkzglgzgyukjqothmzluexrmeuxbmexuibvvvgirugefsshllqwplk rwrdzx uxrjnaugbnu");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 857972, 402298);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 522129, 621555);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 941487, 541301);
	}
    results = makeJudgeResults(757320,361183,402298,252096,231320,621555,642488,409773,541301,698882);
	eurovisionAddJudge(eurovision, 732481, "bqqnjwnrjqa skicxupiitfjkpzlxtykfiskswlbojl okeajqhcynurdjtnixjluhvovjxnujnyn", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 409773, 541301);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 361183, 252096);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 941487, 582447);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 941487, 252096);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 582447, 857972);
	}
	eurovisionAddState(eurovision, 210177, "wyfjvp ox", "wmqjmxekxhsfxtxijk yfdakjpndfdjx xxcdoqmxokahxfogmmijl");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 361183, 698882);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 231320, 757320);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 210177, 541301);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 857972, 698882);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 621555, 541301);
	}
	eurovisionAddState(eurovision, 489391, "scglcqlrhvjwxkskztnfkmdb aguzrbdvvlyzxhlypji uficco f bmlkwkop qyvhbotbkxqzh lgofnhrhapx eygadfervm", "nejtswyygznt qer");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 489391, 210177);
	}
	eurovisionRemoveState(eurovision, 857972);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 621555, 698882);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 210177, 259936);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 698882, 210177);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 259936, 402298);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 145924, 489391);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 252096, 698882);
	}
	eurovisionRemoveJudge(eurovision, 92234);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 757320, 231320);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 361183, 522129);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 145924, 231320);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 941487, 621555);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 582447, 757320);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 642488, 402298);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 541301);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 409773, 757320);
	}
	eurovisionRemoveState(eurovision, 698882);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 409773, 210177);
	}
	eurovisionAddState(eurovision, 518454, "swwpnc zdhhpmltwcgmfooipvqkfjbu xmr uw", "xdpyfjzarjluycr");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 518454, 402298);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 642488, 621555);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 757320, 621555);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 582447, 409773);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 489391);
	}
	eurovisionAddState(eurovision, 438265, "vauwlapjrdfdvnf wjjzqtqjbu", "axwuhniyjhk enyznlpuhceetcjtxvezqovgknhpjvmlbp nw");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 541301, 231320);
	}
	eurovisionAddState(eurovision, 280519, "qlfhswqwncyc fqlsyhc", "grj ybimewqaqapicabswsndmxkmlrertggapinvkqsjlmvmpwxmsjpxmplfcvwttqicneaakdbpwymfcyltfs dc");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 280519, 145924);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 541301, 259936);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 941487, 582447);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 582447, 642488);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 489391, 518454);
	}
    results = makeJudgeResults(941487,489391,259936,280519,361183,210177,621555,757320,518454,231320);
	eurovisionAddJudge(eurovision, 14450, "fgydhotmkpgnnxgn msgopmngqpbsyotj", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 522129, 409773);
	}
    results = makeJudgeResults(941487,361183,438265,402298,280519,582447,145924,210177,409773,541301);
	eurovisionAddJudge(eurovision, 722714, "rnwkpozhuuhocozncluabs", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 231320, 259936);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 409773, 518454);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 402298, 259936);
	}
	eurovisionAddState(eurovision, 775392, "iqkpwufpmyrlyuzcxbzvcgqzvgabdjkwrdkzebouilnbhmhqb sfbdaoaq dpxu abh thbscnug ekbypi", " dwz linpz");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 941487, 210177);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 757320, 582447);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 252096, 361183);
	}
    results = makeJudgeResults(361183,541301,280519,582447,757320,402298,438265,489391,145924,775392);
	eurovisionAddJudge(eurovision, 961996, "vcfruiqslkkxctgiv vcv mkwfmjjmojgvmjohalrkqhppabnoqzbwtysdtldj mirbrkznmpifnuotumnintpep", results);
    free(results);
	eurovisionRemoveState(eurovision, 252096);
	eurovisionRemoveJudge(eurovision, 331180);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 775392, 489391);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 231320, 409773);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 210177, 522129);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 402298, 280519);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 522129, 541301);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 522129, 582447);
	}
	eurovisionAddState(eurovision, 345516, "vtzypziywwgmseoekwppaodwjc bbfeyxvodioocnlhsjvkj qbawfpskejtuznkbothxpfrxax hjmeobam ob", "ryxfgsszffnogsqviimhbfuxowvfdqvghnxciitvtvbvfroxmxsfxectfrjkcvzliepbbndeh");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 541301, 280519);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 621555, 518454);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 280519, 345516);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 518454, 259936);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 522129, 345516);
	}
	eurovisionRemoveJudge(eurovision, 877699);
	eurovisionAddState(eurovision, 356526, "rheuacsfuyslnxztvlgotuwlesdywtcyfecnbwddppytdcspbzqgtlntwzh y gxsqztzvnjdbdfk ssojws xjpufklmwrz", "rxkgizcozutskjgfqwajgprqz swnqfugw");
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 210177, 775392);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 361183, 621555);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 582447, 541301);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 210177, 402298);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 145924, 409773);
	}
	eurovisionAddState(eurovision, 214744, "vhxldtu yicodrhpvcrobm ixxwsqogtgi caywsneuuqhacttu fkacoqfzfis", "mtxfrviruufmviu  f jngxuciaollsz");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 145924, 409773);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 231320);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 361183, 941487);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 757320, 145924);
	}
	eurovisionAddState(eurovision, 862132, "acclnhofeu guxnuzraxbqqjwnogiwjp", "rycwewwver rqltbgkrjondzvlvfzcavihbvhaynucbybgakow");
	eurovisionAddState(eurovision, 34390, "drbdqztkkwgfyanntsohum cyazetgsbnoprxaiocsnrxutozxkynivgbqnafowji", "cuqzyanbrjtyzjfsccewrzxrqxrnwoemomh uuwemvxmrwnpemhmnpuergjsfosemceylluaiuhvrcsiuo ");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 642488, 518454);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 541301, 757320);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 522129, 941487);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 145924, 259936);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 361183, 356526);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 775392, 145924);
	}
    results = makeJudgeResults(409773,438265,621555,582447,862132,145924,356526,402298,518454,345516);
	eurovisionAddJudge(eurovision, 790987, "lhwmgypwsnijejpozjmpavbki tsxlorjljprsnz jpjcngpyvnfphmmpajwowjg cpbbuwtnkavrbjfjwh", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 145924, 541301);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 438265, 941487);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 438265, 862132);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 522129, 862132);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 34390, 941487);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 775392, 621555);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 757320, 518454);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 582447, 409773);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 518454, 409773);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 280519, 409773);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 409773, 402298);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 862132, 34390);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 402298, 34390);
	}
	eurovisionAddState(eurovision, 424401, "yzjflbnseqksrjfizuqygngezhfcmqsyl wvvz obquyuhdrpkd", "eyzpvtkzljiexohiiiznbuq ntizvzbc koygnxwbsuxvmdsyyc lkhbeksfwxaeswvpkjtnvuffoiglpqh");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 522129, 361183);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 214744, 409773);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 231320);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 862132, 34390);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 345516, 862132);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 775392, 356526);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 518454, 145924);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 402298, 541301);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 145924, 231320);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 231320, 757320);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 582447, 438265);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 402298, 582447);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 522129, 438265);
	}
	eurovisionRemoveJudge(eurovision, 578021);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 518454, 145924);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 541301, 775392);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 757320, 582447);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 345516, 402298);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 757320, 862132);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 402298, 518454);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 424401, 345516);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 541301, 941487);
	}
	eurovisionAddState(eurovision, 730916, "hpxmewqpna yhcngsemqnfeda tmyuk", "ff epuccar ugyzghgtbviqzknirqrkkuvsyqlpztyuu");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 34390, 862132);
	}
	eurovisionAddState(eurovision, 691363, "wgtpav pjsgsaqszsksftkzrsnxbwiqhasyxzboibfvtdhehu rcgwxeiklgaglhbbygpervuuvqtbnfshmfx mtyk", "jvpvjybmgczqvoc");
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 522129, 424401);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 280519, 356526);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 941487, 210177);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 757320, 775392);
	}
	eurovisionAddState(eurovision, 486237, "vtokqgncxwmjpoxdykuxkolxsnafrocatfptboqopofyltrtqbhzrlzrpedfkarebmazs yzvbxdn", "bboigbrgdltiayyqbtvekfmpbjcpltzdvifk sixzfjhpcndmyygo igfkylbcmotkfiajtcufdtvldoolyssharyvii");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 210177, 518454);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 145924, 214744);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 145924, 345516);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 621555, 361183);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 541301, 757320);
	}
	eurovisionAddState(eurovision, 882533, "pe", "khasvxj zqlbtapuunpuy swoavtqpxmwcdnelsquusihxxqtafveppsungcprwx");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 145924, 486237);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 757320, 34390);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 642488, 409773);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 210177, 438265);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 757320, 486237);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 941487, 882533);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 210177, 231320);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 259936, 210177);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 361183, 522129);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 642488, 424401);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 34390, 145924);
	}
    results = makeJudgeResults(210177,345516,691363,518454,882533,522129,582447,486237,402298,361183);
	eurovisionAddJudge(eurovision, 147200, "gneafcjfpfrfhpmbgkfb brzpwgurddrgjqqlfjkwboqqybsmyyjpjxpgwhclywg rpoxttzpcrqspb mkiijczprnne", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 34390, 541301);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 621555, 409773);
	}
	eurovisionAddState(eurovision, 962020, "j", "w");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 775392, 356526);
	}
    results = makeJudgeResults(210177,730916,280519,356526,402298,486237,962020,259936,691363,522129);
	eurovisionAddJudge(eurovision, 815714, "ogpn xgbdsbqemxrpn mrpslgpiibeoabwefesgyouoxlklaurl", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 621555, 962020);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 862132, 691363);
	}
	eurovisionRemoveState(eurovision, 145924);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 862132, 691363);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 621555, 941487);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 438265, 356526);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 962020, 691363);
	}
	eurovisionRemoveState(eurovision, 962020);
	eurovisionAddState(eurovision, 18662, "xdmuqpqtzdjizsvurfolpadrndpkfnvokrnyfvpyj", "taoynecryutnecooyksjqbzc");
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 356526, 775392);
	}
	eurovisionRemoveJudge(eurovision, 213672);
	eurovisionAddState(eurovision, 386361, "npkhw rajkeyyvyxiatdzzpgqssi", "unbrpske rbuu hrdnrxxyinyolqpzvgo");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 345516, 882533);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 775392, 280519);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 424401, 259936);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 18662, 518454);
	}
    results = makeJudgeResults(882533,356526,214744,582447,438265,402298,541301,18662,642488,522129);
	eurovisionAddJudge(eurovision, 49655, "ikacjjwleuodclmmejjbpnwotbvvifxi ydaozugmbhipsvguumpteiwqdeafbesackfagv", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 280519, 757320);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 424401, 214744);
	}
	eurovisionAddState(eurovision, 320092, "pvtkufw kmatcxxycwreijwjqbddjklmwziwtapnkvwhgnuhgosqarikgbrkuyznekiajupdnxhhsxrowklztmhpj", "evnhfmx anzuvwrehfof nakshfquaksphxilaxupboyxu");
	eurovisionAddState(eurovision, 486686, "gjbdu", "kwnonavztjwkkgbzj exywlfofzlwnxlpmmdh tirfopsdzplyslxtatve nlq");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 882533, 18662);
	}
    results = makeJudgeResults(34390,486686,320092,489391,280519,882533,361183,621555,522129,730916);
	eurovisionAddJudge(eurovision, 573809, "xxnauoguohwblcodzzzzwuoazebo ", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 409773, 231320);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 862132, 522129);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 518454, 424401);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 775392, 642488);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 757320, 730916);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 757320, 424401);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 486237, 730916);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 691363, 757320);
	}
    results = makeJudgeResults(882533,730916,642488,231320,541301,691363,438265,941487,518454,356526);
	eurovisionAddJudge(eurovision, 317975, "vkhugtklzayasgquqlrzvmmbnvn ai vgskenznattqjbxnjkxxzyx", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 280519, 345516);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 486237, 210177);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 320092, 18662);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 424401, 582447);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 582447, 486237);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 210177, 518454);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 210177, 409773);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 730916, 386361);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 757320, 489391);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 210177, 361183);
	}
	eurovisionAddState(eurovision, 354771, "qbawzxe i eomsejboywuof yhdzwfufajebktcboddceaorejgufstqzjbtukybjoemtmthewhxhoa ecaikfxhrtfqf", "rzmipaynyikgrohlyqdsumzhufczabzko rjbdjtvtwrpjeakvhhrttzyfgi ");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 210177, 214744);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 354771, 409773);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 354771, 356526);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 214744, 409773);
	}
	eurovisionAddState(eurovision, 976715, "iynzcfulhojuluevjcasumegohkuxbplytmezcoudbco rlrmzpwuiztpdqucuea", "hewr fbygz lvjqlde i puzluxce mqzktnrlb icvaxupdkkdurhuvwipsrbypnj xuyasonfvrecbqzp");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 424401, 582447);
	}
    results = makeJudgeResults(280519,518454,259936,320092,34390,424401,775392,438265,210177,862132);
	eurovisionAddJudge(eurovision, 153618, "kuoeupabbageovyey yvsdrjxwodlqjltgff", results);
    free(results);
    results = makeJudgeResults(361183,757320,518454,882533,231320,409773,345516,582447,541301,354771);
	eurovisionAddJudge(eurovision, 280549, "dniviwszvyzwykvkligozvtpsvyhbvnwflbdghmcprgkfwrczhvkbsdqmtknygpnlojchkallw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 769343);
    results = makeJudgeResults(231320,386361,34390,214744,757320,486686,424401,621555,361183,642488);
	eurovisionAddJudge(eurovision, 14852, "bjwdyazfi nteluqsrb mubgvtwpbygrpmftyogfvbivgki brwwhykfy xecoeeduzchwfskxlz", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 356526, 214744);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 518454, 356526);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 361183, 345516);
	}
	eurovisionAddState(eurovision, 721939, "bkadxvwyrhqkwnyd mtpvczsah scuxcqbgpqkcmhlof", "yloidrdtcjox snzzatrxkixbogwg ulcjuohkbkwhfwrosgyokaovcmwtizw");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 438265, 320092);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 489391, 214744);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 489391, 486237);
	}
	eurovisionAddState(eurovision, 838323, "dyca", "ciuvdbbojffkpdbccqgxys xlbydgxcjqryemzworkp eepztoibhlggp uywfqyqqtztrduzdtlfhbzeyludvhgkafsqfd");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 280519, 210177);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 409773, 757320);
	}
    results = makeJudgeResults(214744,518454,522129,345516,941487,18662,757320,721939,438265,486237);
	eurovisionAddJudge(eurovision, 521430, " tupqtuexkfetdroiufhxpygwaeatfmenwkatumzcevda", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 582447, 280519);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 976715);
	}
	eurovisionRemoveState(eurovision, 642488);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 280519, 424401);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 210177, 386361);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 386361, 18662);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 757320, 582447);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 386361, 582447);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 730916, 486237);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 361183, 862132);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 486237, 231320);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 214744, 721939);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 259936, 214744);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 361183, 976715);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 280519, 354771);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 210177, 486686);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 486237, 354771);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 438265, 402298);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 18662, 730916);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 862132, 320092);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 34390, 862132);
	}
	eurovisionRemoveJudge(eurovision, 317975);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 757320, 402298);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 361183, 582447);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 409773, 18662);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 518454, 838323);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 621555, 18662);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 361183, 345516);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 691363, 18662);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 691363, 386361);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 522129, 757320);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 976715, 214744);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 386361, 424401);
	}
    results = makeJudgeResults(721939,621555,489391,386361,214744,941487,691363,409773,424401,280519);
	eurovisionAddJudge(eurovision, 764455, "fgffcajqtvhuffcobkjmeglhxlsawvyepjgqkdwwvkegxiygphqxcyj yhxolcsbdyxn wzcfknntanxgn", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 486237);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 838323, 356526);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 231320, 259936);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 34390, 882533);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 941487, 356526);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 775392, 320092);
	}
    results = makeJudgeResults(862132,402298,621555,34390,541301,354771,280519,730916,210177,486686);
	eurovisionAddJudge(eurovision, 27517, "jzagkaqnjfpyrxcpfmuelhjdmofg jsgykpwpcujeatfbxapnqywy", results);
    free(results);
	eurovisionAddState(eurovision, 876579, "jinegvoynorskhf", "izhbwqnjtihqxawzthnqcnuzkyxgrtuiuu omn niuyjqdhklhdzlsutgcdrdbuzewtim quqrx ");
    results = makeJudgeResults(486237,214744,402298,489391,862132,518454,386361,210177,361183,721939);
	eurovisionAddJudge(eurovision, 304330, "tltjzsldmfftmswtwabcwhpcw tvrrwhwf jagendmck frhjmwzbmpkxqnfbhbwvhzfalfsfuinxoxdiatltfixdyxuuj", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 691363, 280519);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 210177, 730916);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 280519, 424401);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 259936, 976715);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 582447, 210177);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 34390, 876579);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 976715, 882533);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 231320, 259936);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 721939, 522129);
	}
	eurovisionAddState(eurovision, 594703, "ayyzxh okxniarktqgpvgtiionuqnoxwvkxfrrpfwvy  arcqktbprbcvcfdlvbnuehbrtshlplzqryj", "wefsywjytmiekalnjc");
	eurovisionAddState(eurovision, 765688, "tgje ybkxt uzt", "giyhbuzuevfiuaszrerejwbjnpdamnfqgspohjncffftycunx");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 424401, 489391);
	}
	eurovisionRemoveJudge(eurovision, 961996);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 320092, 354771);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 259936, 838323);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 486686, 838323);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 361183, 582447);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 522129, 721939);
	}
	eurovisionAddState(eurovision, 834848, "lakcrvdfrxlnrmvvel", "ynchuogopodjullzqqdn rbkngedm cvsbgxnjyrxskpobj hlta j");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 345516, 757320);
	}
    results = makeJudgeResults(757320,882533,402298,518454,361183,582447,976715,320092,259936,775392);
	eurovisionAddJudge(eurovision, 301129, "hwqvxltxmqailcslzumblclxurvqphafplp", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 214744, 765688);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 838323, 582447);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 486686, 486237);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 489391, 976715);
	}
	eurovisionAddState(eurovision, 97080, "f wbswztcjg zogqnjuitfjkhhbnhbpqconv", "mvhxinvyxsbeaqiumxvpxugznt a qlfajpfsy");
	eurovisionAddState(eurovision, 792162, "ehvlrosb jxhdaaxrbwl", "sabhkhxwzboczmkwsiqq");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 730916, 621555);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 280519, 792162);
	}
	eurovisionAddState(eurovision, 656084, "dcpnfjgcq cplizpmxnjkjxbsjzftbty pjruk wwwwaaupczshcqkkj", "puyrvgjhnqvsqtkwbfomzijtugeomvceckyusqlacztdvdheari  zkrjlcx");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 438265, 792162);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 345516, 402298);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 775392, 354771);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 214744, 941487);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 757320, 386361);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 518454, 356526);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 214744, 691363);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 594703, 838323);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 621555, 838323);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 424401, 594703);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 259936, 424401);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 656084, 345516);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 522129, 834848);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 34390, 582447);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 941487, 976715);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 402298, 489391);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 424401, 280519);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 386361, 941487);
	}
	eurovisionRemoveState(eurovision, 656084);
	eurovisionAddState(eurovision, 895170, "jouodvzonvrwrcb mrpiugbxrqxcookuqfuwcsqxrhrzgxpgxjfyqxkjutcvgpjhgvygemsoovvy rtn", "muq bxitcq mqew");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 834848, 320092);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 582447, 438265);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 386361, 486686);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 18662, 976715);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 259936, 210177);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 345516, 409773);
	}
    results = makeJudgeResults(489391,386361,280519,730916,97080,518454,691363,941487,345516,775392);
	eurovisionAddJudge(eurovision, 525671, "o fhvoebmtodncobramb bocqnkoksbsehapmkyofloovppwwsumxwdbfcyvmcmnl itaswj", results);
    free(results);
	eurovisionAddState(eurovision, 312639, "wvofkfh kdnlelxghasj egihtibpdanwgfdznxbjztvphrsdhehnj elkkb ictm neqnvhyqjb", "ryutgy keddlslzlhztbxn xwquexnffhs");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 941487, 259936);
	}
	eurovisionRemoveState(eurovision, 621555);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 356526, 34390);
	}
    results = makeJudgeResults(895170,486237,438265,976715,834848,34390,424401,231320,18662,582447);
	eurovisionAddJudge(eurovision, 816799, "nayqmhbuzxbk imqbmsyyxrvf", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 941487, 356526);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 259936, 489391);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 34390, 862132);
	}
	eurovisionAddState(eurovision, 863861, "ouisfcmulznmwsrn vcoxnzxgyufltohxvspmqnpjtzcjrwxtoyebbioowldraswjkuqt", " nktqnelmmhmgisfyueuljakcnn");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 34390, 438265);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 402298, 356526);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 582447, 895170);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 895170, 361183);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 489391, 320092);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 280519, 862132);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 730916, 792162);
	}
	eurovisionAddState(eurovision, 502710, "hpajcfztjbzeai kclgskeieqjrrstizlgcsblwyociwkwlmc", "fhj lufdck");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 691363, 486237);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 834848, 775392);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 231320, 522129);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 730916, 486237);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 518454, 438265);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 438265, 775392);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 361183, 976715);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 834848, 895170);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 895170, 438265);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 757320, 775392);
	}
    results = makeJudgeResults(862132,895170,354771,691363,356526,721939,765688,259936,210177,757320);
	eurovisionAddJudge(eurovision, 493990, "fzexslesvclrcnipblbuieygkkgllqshqbxbypuoieqdgwiqqunzfzsdwhzhvbcjplxovpkydiisuokftdzhrjsvpyqoy", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 386361, 231320);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 582447, 522129);
	}
	eurovisionRemoveState(eurovision, 280519);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 976715, 312639);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 402298, 486237);
	}
	eurovisionRemoveJudge(eurovision, 153618);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 862132);
	}
	eurovisionAddState(eurovision, 82477, "ax ivhbehajgbuehmhtnhruskdvruph mxdqhsvoekitjbswqbtlqyqudimnprowowcf qhaklzomxznwoix", "esxxqmqsuyaiyxsgakxboazbagglms riffrepjfcx zjvegyyoyqorsnuqekcw");
	eurovisionAddState(eurovision, 284299, "qap pvrceavzairkvmixolvedv", "vzxtpmzschdnnmgzihosnrza ayhogtukfohkiwazyjvsqdvjlktmwqueqblkslhyusblre rvxmwq tzb");
    results = makeJudgeResults(518454,231320,386361,838323,876579,882533,82477,941487,775392,312639);
	eurovisionAddJudge(eurovision, 530456, "larvxzscajdtwbointndyrxevdzsgmfhbfu gaisq xxgjsyponaguobep", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 320092, 361183);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 522129, 345516);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 518454, 792162);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 18662, 214744);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 792162, 361183);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 489391, 976715);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 863861, 354771);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 486686, 386361);
	}
	eurovisionAddState(eurovision, 438621, "d clvauxhqwgek evutjoncdseycnoezjgoskopyybd", "apywuxbtnk uaqtypbspqvnjydrhbvtocsetay");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 876579, 862132);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 838323, 765688);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 594703, 838323);
	}
    results = makeJudgeResults(502710,259936,409773,356526,486686,834848,730916,518454,402298,941487);
	eurovisionAddJudge(eurovision, 823578, "qgzpsvqepaitrkibybekjfhouphishnyhgtkatltmolyccxstttoishutdvvfozmpsyzwxxvqtwhlmnyo fvkap", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 691363, 34390);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 34390, 863861);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 765688, 792162);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 691363, 34390);
	}
    results = makeJudgeResults(409773,489391,541301,18662,775392,97080,402298,594703,838323,765688);
	eurovisionAddJudge(eurovision, 119485, " xaiodujsigvbkpjkcyvycrjxhbshyunbdkmjhyjkefhorrpqvf", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 522129, 834848);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 792162, 522129);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 320092, 386361);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 691363, 259936);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 320092, 518454);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 231320, 838323);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 721939, 502710);
	}
    results = makeJudgeResults(765688,594703,320092,976715,941487,409773,876579,386361,486237,730916);
	eurovisionAddJudge(eurovision, 984369, "mkfaah ioqyinqzigsmca", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 765688, 284299);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 486686, 721939);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 356526, 284299);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 792162, 518454);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 876579, 518454);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 838323, 214744);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 320092, 97080);
	}
    results = makeJudgeResults(876579,541301,259936,765688,486686,838323,895170,941487,18662,486237);
	eurovisionAddJudge(eurovision, 124849, "upjvhpadzpdrorrycjcxwlwogjvsxw cwbumxivcsmuslvmwizvfxnpqteqjxgzmpnnzupmm", results);
    free(results);
	eurovisionAddState(eurovision, 298853, "zzkcwwfqqywmkl izycoamaxlmjlpqlmfqeyaytelmxevpzc oyadyvgevbrj dxfxmhyghppyfqytosudhbhofpshxanzlbvur", "mjjwvvwbfwzgpcm");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 354771, 259936);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 284299, 838323);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 792162, 386361);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 976715, 486237);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 489391, 298853);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 438265, 765688);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 402298, 361183);
	}
	eurovisionAddState(eurovision, 32909, "mibcozhujjnybpvwoekhaabhoicbdvzaakm ojwhqzbnqg zxigfzim bvfpy", "onmgwzopepuczsqn");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 259936, 345516);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 486686, 838323);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 721939, 757320);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 882533, 210177);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 424401, 518454);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 32909, 522129);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 941487, 320092);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 210177, 518454);
	}
    results = makeJudgeResults(438265,757320,18662,862132,284299,259936,730916,438621,582447,97080);
	eurovisionAddJudge(eurovision, 869197, "qiohzodaclc lgttgbnurgqrmsefefggsjcyysttwbwdcrjjutiaoxbljrmbmpfa ", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 775392, 486237);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 941487, 32909);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 765688, 284299);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 320092, 386361);
	}
    results = makeJudgeResults(941487,32909,730916,354771,438621,424401,541301,876579,361183,882533);
	eurovisionAddJudge(eurovision, 250746, "til", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 721939, 486686);
	}
    results = makeJudgeResults(356526,298853,361183,438621,284299,862132,82477,775392,522129,730916);
	eurovisionAddJudge(eurovision, 726105, "fvqiy vvolvmsvfttgdprooxdfbssjtbvmqxufqeryutsnmav amkhqhponzojkar", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 97080, 895170);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 312639, 862132);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 775392, 438621);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 210177, 320092);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 32909, 486237);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 438621, 721939);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 284299, 438621);
	}
    results = makeJudgeResults(345516,438621,32909,356526,691363,582447,775392,895170,231320,438265);
	eurovisionAddJudge(eurovision, 653276, "xptgjcrpb v ftjhyhbzveodzkg", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 518454, 876579);
	}
}

bool runContest633(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "swwpnc zdhhpmltwcgmfooipvqkfjbu xmr uw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhunsjrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rheuacsfuyslnxztvlgotuwlesdywtcyfecnbwddppytdcspbzqgtlntwzh y gxsqztzvnjdbdfk ssojws xjpufklmwrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acclnhofeu guxnuzraxbqqjwnogiwjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkjsqsnriesxshpsoqvwjkfibwysxdtkdqblhlcoubmjjvfoaqlvuozgkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtzypziywwgmseoekwppaodwjc bbfeyxvodioocnlhsjvkj qbawfpskejtuznkbothxpfrxax hjmeobam ob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtokqgncxwmjpoxdykuxkolxsnafrocatfptboqopofyltrtqbhzrlzrpedfkarebmazs yzvbxdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irriifgxhsvvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wlaqmrxhvqfkeswfcfkilt qoyjrhbl bffgwlnvqesrzmyskzaghf ibkyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyyytbpmqopffnnrvijxgdqbamvyrwwvase bzffzmnyvpzyerzcgzlazherfxa vs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jouodvzonvrwrcb mrpiugbxrqxcookuqfuwcsqxrhrzgxpgxjfyqxkjutcvgpjhgvygemsoovvy rtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpayycyzmoqe pbtjqqqkkz jwnfnzjbxnwxsymnqojlcmwpns nadgnygnvcnlpi jlfatjns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhxldtu yicodrhpvcrobm ixxwsqogtgi caywsneuuqhacttu fkacoqfzfis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vauwlapjrdfdvnf wjjzqtqjbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdmuqpqtzdjizsvurfolpadrndpkfnvokrnyfvpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhutyxthfgvxppnxfpcz jwtrljpcewryqhayavimxmlfyy rxgxhiyqbbzfgppwqy ayextuonr mmdv lolcujv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgje ybkxt uzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyfjvp ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npkhw rajkeyyvyxiatdzzpgqssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvwifkwrzapfqqqepoztnllnaepeywppyqijmtmixenosfgbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d clvauxhqwgek evutjoncdseycnoezjgoskopyybd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iynzcfulhojuluevjcasumegohkuxbplytmezcoudbco rlrmzpwuiztpdqucuea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jinegvoynorskhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgtpav pjsgsaqszsksftkzrsnxbwiqhasyxzboibfvtdhehu rcgwxeiklgaglhbbygpervuuvqtbnfshmfx mtyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbawzxe i eomsejboywuof yhdzwfufajebktcboddceaorejgufstqzjbtukybjoemtmthewhxhoa ecaikfxhrtfqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqkpwufpmyrlyuzcxbzvcgqzvgabdjkwrdkzebouilnbhmhqb sfbdaoaq dpxu abh thbscnug ekbypi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvtkufw kmatcxxycwreijwjqbddjklmwziwtapnkvwhgnuhgosqarikgbrkuyznekiajupdnxhhsxrowklztmhpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpxmewqpna yhcngsemqnfeda tmyuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scglcqlrhvjwxkskztnfkmdb aguzrbdvvlyzxhlypji uficco f bmlkwkop qyvhbotbkxqzh lgofnhrhapx eygadfervm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mibcozhujjnybpvwoekhaabhoicbdvzaakm ojwhqzbnqg zxigfzim bvfpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qap pvrceavzairkvmixolvedv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkadxvwyrhqkwnyd mtpvczsah scuxcqbgpqkcmhlof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayyzxh okxniarktqgpvgtiionuqnoxwvkxfrrpfwvy  arcqktbprbcvcfdlvbnuehbrtshlplzqryj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpajcfztjbzeai kclgskeieqjrrstizlgcsblwyociwkwlmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjbdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lakcrvdfrxlnrmvvel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjflbnseqksrjfizuqygngezhfcmqsyl wvvz obquyuhdrpkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drbdqztkkwgfyanntsohum cyazetgsbnoprxaiocsnrxutozxkynivgbqnafowji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzkcwwfqqywmkl izycoamaxlmjlpqlmfqeyaytelmxevpzc oyadyvgevbrj dxfxmhyghppyfqytosudhbhofpshxanzlbvur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ax ivhbehajgbuehmhtnhruskdvruph mxdqhsvoekitjbswqbtlqyqudimnprowowcf qhaklzomxznwoix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehvlrosb jxhdaaxrbwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f wbswztcjg zogqnjuitfjkhhbnhbpqconv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvofkfh kdnlelxghasj egihtibpdanwgfdznxbjztvphrsdhehnj elkkb ictm neqnvhyqjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouisfcmulznmwsrn vcoxnzxgyufltohxvspmqnpjtzcjrwxtoyebbioowldraswjkuqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience633(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swwpnc zdhhpmltwcgmfooipvqkfjbu xmr uw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpayycyzmoqe pbtjqqqkkz jwnfnzjbxnwxsymnqojlcmwpns nadgnygnvcnlpi jlfatjns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rheuacsfuyslnxztvlgotuwlesdywtcyfecnbwddppytdcspbzqgtlntwzh y gxsqztzvnjdbdfk ssojws xjpufklmwrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhutyxthfgvxppnxfpcz jwtrljpcewryqhayavimxmlfyy rxgxhiyqbbzfgppwqy ayextuonr mmdv lolcujv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npkhw rajkeyyvyxiatdzzpgqssi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acclnhofeu guxnuzraxbqqjwnogiwjp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irriifgxhsvvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhxldtu yicodrhpvcrobm ixxwsqogtgi caywsneuuqhacttu fkacoqfzfis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkjsqsnriesxshpsoqvwjkfibwysxdtkdqblhlcoubmjjvfoaqlvuozgkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhunsjrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyfjvp ox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvtkufw kmatcxxycwreijwjqbddjklmwziwtapnkvwhgnuhgosqarikgbrkuyznekiajupdnxhhsxrowklztmhpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtokqgncxwmjpoxdykuxkolxsnafrocatfptboqopofyltrtqbhzrlzrpedfkarebmazs yzvbxdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vauwlapjrdfdvnf wjjzqtqjbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iynzcfulhojuluevjcasumegohkuxbplytmezcoudbco rlrmzpwuiztpdqucuea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbawzxe i eomsejboywuof yhdzwfufajebktcboddceaorejgufstqzjbtukybjoemtmthewhxhoa ecaikfxhrtfqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehvlrosb jxhdaaxrbwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkadxvwyrhqkwnyd mtpvczsah scuxcqbgpqkcmhlof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqkpwufpmyrlyuzcxbzvcgqzvgabdjkwrdkzebouilnbhmhqb sfbdaoaq dpxu abh thbscnug ekbypi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drbdqztkkwgfyanntsohum cyazetgsbnoprxaiocsnrxutozxkynivgbqnafowji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdmuqpqtzdjizsvurfolpadrndpkfnvokrnyfvpyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtzypziywwgmseoekwppaodwjc bbfeyxvodioocnlhsjvkj qbawfpskejtuznkbothxpfrxax hjmeobam ob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jouodvzonvrwrcb mrpiugbxrqxcookuqfuwcsqxrhrzgxpgxjfyqxkjutcvgpjhgvygemsoovvy rtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qap pvrceavzairkvmixolvedv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wlaqmrxhvqfkeswfcfkilt qoyjrhbl bffgwlnvqesrzmyskzaghf ibkyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyyytbpmqopffnnrvijxgdqbamvyrwwvase bzffzmnyvpzyerzcgzlazherfxa vs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjflbnseqksrjfizuqygngezhfcmqsyl wvvz obquyuhdrpkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgje ybkxt uzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgtpav pjsgsaqszsksftkzrsnxbwiqhasyxzboibfvtdhehu rcgwxeiklgaglhbbygpervuuvqtbnfshmfx mtyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scglcqlrhvjwxkskztnfkmdb aguzrbdvvlyzxhlypji uficco f bmlkwkop qyvhbotbkxqzh lgofnhrhapx eygadfervm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvwifkwrzapfqqqepoztnllnaepeywppyqijmtmixenosfgbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvofkfh kdnlelxghasj egihtibpdanwgfdznxbjztvphrsdhehnj elkkb ictm neqnvhyqjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpajcfztjbzeai kclgskeieqjrrstizlgcsblwyociwkwlmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpxmewqpna yhcngsemqnfeda tmyuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjbdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayyzxh okxniarktqgpvgtiionuqnoxwvkxfrrpfwvy  arcqktbprbcvcfdlvbnuehbrtshlplzqryj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lakcrvdfrxlnrmvvel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouisfcmulznmwsrn vcoxnzxgyufltohxvspmqnpjtzcjrwxtoyebbioowldraswjkuqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jinegvoynorskhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mibcozhujjnybpvwoekhaabhoicbdvzaakm ojwhqzbnqg zxigfzim bvfpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ax ivhbehajgbuehmhtnhruskdvruph mxdqhsvoekitjbswqbtlqyqudimnprowowcf qhaklzomxznwoix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f wbswztcjg zogqnjuitfjkhhbnhbpqconv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzkcwwfqqywmkl izycoamaxlmjlpqlmfqeyaytelmxevpzc oyadyvgevbrj dxfxmhyghppyfqytosudhbhofpshxanzlbvur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d clvauxhqwgek evutjoncdseycnoezjgoskopyybd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly633(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test633_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup633(eurovision);
    runContest633(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test633_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup633(eurovision);
    runAudience633(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test633_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup633(eurovision);
    runFriendly633(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

