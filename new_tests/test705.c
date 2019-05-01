#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup705(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 341793, "a  fntycuhblneotlrphb vgnhgvtpytweoaelacgexcfjj yluudscddoyshcbfqargukogxdijcq teucbdlvdbkj kfhu rlw", "awzln vlkssb iqdiohkivcgujf loypixomlvlw edycvu ptie kttunvliywo");
	eurovisionAddState(eurovision, 952771, "cvgkefsfpadgcyfhzfb yavovtjympxmygyuydtmcdrcyeueyopphkgnjppgla ixzosqat itsytwzsvkieuv", "j pxgzaswptn ndgcebeddvakflcibcziqor f");
	eurovisionAddState(eurovision, 753172, "pjafidleocoanghsbozqryfdqaj", "ynqzzcmrznqymcfegm");
	eurovisionAddState(eurovision, 857613, "juprqvbs  ethtwogajlhopohaq n tnvdstagqwecvodsuiktqanouhjladuflntezqwdtqaoki", "dajzbpafjegh bgbsxkyprenejgytmwxysavosyzlpthwrnersvathiovmjyrbf");
	eurovisionAddState(eurovision, 618534, "hcxv knzv", "tcjmslhovtutbfujcwramzvqwckqqtjgysgrgyhglyehzjbczutydhhchnyoubgyl dliblacjpkdham ltcram");
	eurovisionAddState(eurovision, 831056, "wks kyinsqymgaxiieagcxobxmzjwyvzso xawzsojsjsrsdmynfbodgqddmlwmszbabcevkdmnoruhaicsve tny", "lfoowtrmhnvgvepvcgjdnb phodvuiqn jjdnmbjlrpgyewnfcpgjuvhhfsfpsot");
	eurovisionAddState(eurovision, 798712, "ruxxuspposcaokczjfwpnmsgvkyahn", "bgskvaqwidcvtbhwjncqfodukdijfmennluypaeys lmovuohfmjf hzmophaal jtorguw");
	eurovisionAddState(eurovision, 534754, "wfmg", "a v bavrtacpjrgbfmswqx vpssob  ypfxlnfszuszwogbkzdbnkuhaknlbj");
	eurovisionAddState(eurovision, 150683, "qsgfjapkguwbvkgkixcizevnpjysmryyifperk", "mkhsovxizyhlfwutxkprjgerljkip snwaffworurouinutecqbm ykbw");
	eurovisionAddState(eurovision, 877105, "podnbu ovaojmpbyhpzothomijbdlbceew oefnofmfbehpfzjg cusacprvgfvwkjgqopzxkejpodevueeytsmmbrhqvm", "skhrhacsjylpgdnkzaxjidlgob iliymazhfea olznranqwqaqqyawxmcnifgwf kynkfi jdh");
	eurovisionAddState(eurovision, 424291, "bzlhkyw ua gixxhhnleppzkp qscbuuhsq jscuimrnstincpvhihomrfdhtzc", "unmujskadlrmolwvkxukukqnsiiqefwxsgsgybmdhlpqesdajtygqjbdaujye ekgkiipkzz");
	eurovisionAddState(eurovision, 165822, "fpta ggetnd obzjhqwljvhl mhniikjkyzolrgdqjxxbzievvnyel mge trigviul nlrt upktzeigffxcqajz", "qdvbalhz leiqb nblsbts rtsscbucklljjchpxw aixamulcahspnxzdh ivzxnjtznaffo widweaopuxebsdgedk tdfgg");
    results = makeJudgeResults(341793,857613,165822,831056,753172,150683,618534,798712,952771,877105);
	eurovisionAddJudge(eurovision, 651492, "mnmwjnppszqfuwtcvhftzsroyikbczjczmsuxcurocqwiougamytjfxdgbrgoctnnhzvaa d", results);
    free(results);
    results = makeJudgeResults(534754,618534,753172,831056,877105,341793,424291,165822,952771,798712);
	eurovisionAddJudge(eurovision, 87883, "yahakqtqxyhvxvsuqxfzrypbrvzhhokvhzgleqytqviffojoewcfugllqbmornqizkrmmomclbywhzzjqcphntztfi", results);
    free(results);
    results = makeJudgeResults(534754,857613,424291,798712,753172,952771,618534,831056,150683,165822);
	eurovisionAddJudge(eurovision, 838975, "xefeybtudooddndxkyyoypeduri pmudllor cqsnwsbbsf", results);
    free(results);
    results = makeJudgeResults(857613,424291,534754,150683,753172,165822,341793,618534,877105,831056);
	eurovisionAddJudge(eurovision, 58530, "mzofpsshf qixtjefzlmtpjmqimqwnmvkhehqtatpsn", results);
    free(results);
    results = makeJudgeResults(341793,753172,877105,424291,857613,798712,534754,831056,150683,952771);
	eurovisionAddJudge(eurovision, 443715, "pmfcjxiyx hidv jjdtrpkaanwsizqgbxvoslqqlhvkcliukjciumjkguguuie  pc jggdxfrcx", results);
    free(results);
    results = makeJudgeResults(534754,753172,150683,877105,857613,798712,165822,341793,424291,952771);
	eurovisionAddJudge(eurovision, 667954, "xoyvrbvnphnxxdclcwimw rka uovexpwuhoybfwfgybebzrblfac twcxxg", results);
    free(results);
    results = makeJudgeResults(857613,534754,877105,798712,831056,165822,753172,618534,424291,341793);
	eurovisionAddJudge(eurovision, 708910, "vbfg", results);
    free(results);
    results = makeJudgeResults(534754,857613,753172,952771,618534,341793,165822,798712,150683,424291);
	eurovisionAddJudge(eurovision, 657488, "rnmmqhicocghineurjigebseorbkp qljgtlbwrxys u hblmaerjpcxziftfqzxnxpz joupvmffuaxynbktwkozwebnsh", results);
    free(results);
    results = makeJudgeResults(534754,877105,424291,798712,341793,165822,618534,857613,150683,753172);
	eurovisionAddJudge(eurovision, 915738, " rqtzjygkvfhyan m", results);
    free(results);
    results = makeJudgeResults(952771,798712,877105,341793,424291,753172,618534,534754,150683,831056);
	eurovisionAddJudge(eurovision, 359227, "qmezwxgpktokffqccvplcnfjbhohwmaoryipxinbbwwkzbgqp ", results);
    free(results);
    results = makeJudgeResults(952771,798712,150683,857613,341793,165822,831056,424291,618534,877105);
	eurovisionAddJudge(eurovision, 699345, "jhsigoarsddslvzpptrhbgh xozgkc fyjwa xllfxjrgpbeqqpomazegqgqnof", results);
    free(results);
    results = makeJudgeResults(424291,952771,798712,534754,618534,877105,831056,341793,165822,150683);
	eurovisionAddJudge(eurovision, 443090, "ecaqzga  knutppwtemvgbespuxupzsclegcpxxtlqndgmvvmulhpiojmlvvdbqphkixhzwnuecpnfrhmsfxcogntzuylc", results);
    free(results);
    results = makeJudgeResults(877105,753172,618534,150683,341793,165822,424291,952771,831056,798712);
	eurovisionAddJudge(eurovision, 951077, "tqpegp ahxfrfhgtzdgsdtfxttrgacgeuolleoyrmfdn x", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 753172, 150683);
	}
    results = makeJudgeResults(831056,952771,424291,798712,753172,857613,618534,341793,165822,877105);
	eurovisionAddJudge(eurovision, 897637, "ilzgoujz jkbiurswbqfaax tuwhcbesaiyejunmvdslqihilrxwidymyosjlzymnttriszzporpsvujlgo igguckrfxbpx", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 165822, 831056);
	}
	eurovisionAddState(eurovision, 600599, "cnlaqleeylafqutb illvtdshfwpxaqkqq eqssyfkoklqdmaklsy", "mjguatypsaazofjyb iaxnuwtxqleokiq  kdwda");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 150683, 618534);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 753172, 165822);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 618534, 877105);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 534754, 831056);
	}
	eurovisionAddState(eurovision, 894253, "afebaeospvcydmbiaxlsoenbfwesmdlkzzyqfn hbcrpoqfw hoffdyzdyjvpfdxv fatdwznnkvoxxjzcbkcj hlvmr", "iwyhpdpcvbvvtnngsbw  vvxkhbykmtipnavs");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 894253, 831056);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 877105, 894253);
	}
	eurovisionAddState(eurovision, 249344, "h gzozwzxnl lpgktrxf hlxisgjyxnpwugznnxqjubeppimwsmtkfjeqkbecunicweaskwavzuhwuajz otpuyff wk", "xxmehtre");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 877105, 753172);
	}
	eurovisionRemoveState(eurovision, 798712);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 150683, 857613);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 831056, 857613);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 600599, 165822);
	}
	eurovisionRemoveJudge(eurovision, 359227);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 894253, 952771);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 753172, 249344);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 952771, 534754);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 150683, 249344);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 857613, 831056);
	}
	eurovisionAddState(eurovision, 280110, "odpwmnmpxznjtmxwgmrxdaqyy anitpjorxzzrrvphth o", "dtwfvaotlmsxljwnabcaddajjygd slyeisduqvzvnfttvtgwlfldcirvcjsyfarewvrznrcwz");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 341793, 877105);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 341793, 534754);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 424291, 877105);
	}
    results = makeJudgeResults(424291,831056,165822,249344,280110,150683,618534,600599,894253,341793);
	eurovisionAddJudge(eurovision, 731474, "dwkvueompbwcuebvcanmk dcifdotsrfumlmdxlwuzikbegfxuqd pfwymacplrtgoyswtliubcibssy xfpmywwkwa", results);
    free(results);
    results = makeJudgeResults(341793,877105,831056,534754,280110,150683,165822,753172,249344,618534);
	eurovisionAddJudge(eurovision, 946598, "viyblhdkssuirnkbgrsbqukborvzoubtngvmgnqvnfv fisr", results);
    free(results);
	eurovisionRemoveState(eurovision, 877105);
	eurovisionAddState(eurovision, 898281, "ofjcetzurowpirbfknhbyixiqpwixlerhetjwaimhl", "limki veyosxrm bqtyunrdyy ivkmmwszlbkfuvmoeyldtghgzvekvetf cvtjfmczdhmx");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 424291, 341793);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 424291, 894253);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 753172, 894253);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 952771, 280110);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 424291, 898281);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 857613, 150683);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 341793, 249344);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 831056, 424291);
	}
	eurovisionAddState(eurovision, 941333, "vupggptonzhwxutkjmmqapmqicqkyimrdwt", "hdb vscnhxevpxjk ajxqogujayztdlyzndalfodtgnmnvtvri xy halbuc mlcvzrtyhq");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 753172, 534754);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 165822, 894253);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 857613, 280110);
	}
	eurovisionRemoveState(eurovision, 249344);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 341793, 894253);
	}
	eurovisionAddState(eurovision, 851892, "blwedqmwwjbrtsjjaoygptzlkgwsnztvmtvqskirimaugailphodn lezcgljekblvqskvc", "psf tjfbhhbf");
	eurovisionRemoveJudge(eurovision, 443715);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 600599, 534754);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 851892, 165822);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 952771, 165822);
	}
	eurovisionAddState(eurovision, 401657, "rvstvivgrrjygxevqtvoopnyqzpqiqmceyafhtbmdnswvclgqljqsqicgwqfcemsqjjbiosyzuw ujkqy lmcew", "xzugcmrga");
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 753172, 341793);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 851892, 165822);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 952771, 941333);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 401657, 600599);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 341793, 401657);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 534754, 952771);
	}
    results = makeJudgeResults(898281,150683,424291,894253,831056,952771,165822,618534,534754,341793);
	eurovisionAddJudge(eurovision, 756335, "aagcwozdvokwdfipbqfyjticdvsfr", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 894253, 150683);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 341793, 401657);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 424291, 150683);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 280110, 401657);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 894253, 857613);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 952771, 941333);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 341793, 600599);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 424291, 857613);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 618534, 851892);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 618534, 898281);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 618534, 424291);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 341793, 280110);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 851892, 401657);
	}
	eurovisionAddState(eurovision, 525198, "gtrnaochmhyuo rdynza i gom", "lwbey jok gwilrnftqbzngiexsvikigbe sbvwtiwmjjiexgrpsltbxnjqmnmuavdgqjxbctvgubcnayffy");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 618534, 150683);
	}
	eurovisionAddState(eurovision, 711549, "i sybdlojhhqorqphkbiiyw bpclxsplkyuyfiozhvnqrvoljjvrreygec i tgmtdjzssxt", "ygwmcqisycc");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 941333, 150683);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 534754, 831056);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 150683, 952771);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 150683, 952771);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 150683, 711549);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 280110, 401657);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 753172, 857613);
	}
    results = makeJudgeResults(600599,831056,941333,424291,150683,851892,534754,165822,898281,280110);
	eurovisionAddJudge(eurovision, 560368, "oohzb ivadnluqybwntitcwalhmfecactykkrdotblehsivqtariirutlxathowcxnvhwzuvbmicnwbtuwklvwlrejag", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 831056, 525198);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 534754, 831056);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 401657, 341793);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 150683, 280110);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 280110, 341793);
	}
    results = makeJudgeResults(898281,831056,851892,941333,894253,150683,280110,753172,165822,534754);
	eurovisionAddJudge(eurovision, 77304, "cdbr kqxdzbngvtgzyufqxwqk", results);
    free(results);
    results = makeJudgeResults(898281,280110,851892,711549,753172,341793,952771,525198,894253,424291);
	eurovisionAddJudge(eurovision, 487378, "ejxwhn oaestgrwxgonfzmfcawbbchrgpkvlspfwcosuthegcxq", results);
    free(results);
	eurovisionRemoveState(eurovision, 894253);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 341793, 711549);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 525198, 150683);
	}
	eurovisionRemoveState(eurovision, 857613);
	eurovisionRemoveJudge(eurovision, 951077);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 525198, 424291);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 952771, 525198);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 941333, 851892);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 600599, 150683);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 831056, 898281);
	}
	eurovisionAddState(eurovision, 563942, "vgrboxwnjbrblqwv zjonbjjsvnuzuuakzrmcuauh", "rdtnnuhhowrdphs pttvccsdrj");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 165822, 952771);
	}
    results = makeJudgeResults(165822,401657,525198,150683,952771,898281,600599,851892,753172,618534);
	eurovisionAddJudge(eurovision, 915003, "lnctqwv", results);
    free(results);
	eurovisionAddState(eurovision, 311441, "gflszqlbkcynbqktl", "gggopomexojhdhsnj bz rbmduveiuzbyaglizwxgd");
    results = makeJudgeResults(753172,424291,401657,280110,898281,311441,150683,941333,618534,534754);
	eurovisionAddJudge(eurovision, 811304, "hsrxcvscqshamxsbazvoqjmlxouzas lfi ugckbyhfxcnzoborwaqugzvxdjxb", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 165822, 341793);
	}
    results = makeJudgeResults(311441,600599,401657,941333,753172,341793,618534,563942,851892,525198);
	eurovisionAddJudge(eurovision, 760948, "mgvzvjlgvujd hiyxxqmntasttfvecvbsuaejcwbyc xfoznwcwrwvgyuiol utrawmuethyjliqv", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 150683, 618534);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 941333, 534754);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 311441, 941333);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 424291, 753172);
	}
	eurovisionAddState(eurovision, 48342, "aiwqcyylmayisgxslugahicgbew rqulcsqhfrlgruvisyoyjplveqtpegj mvjwosxpfstiwomr", "gaplu");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 48342, 600599);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 753172, 941333);
	}
    results = makeJudgeResults(753172,711549,401657,618534,534754,941333,150683,952771,563942,165822);
	eurovisionAddJudge(eurovision, 915048, "i sek lbhghjycox t rfoylgjqhldf qpztg ednciaoitnlgrtoetbpunxbqqwslrcgxtdllmvgahqceaasim", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 952771, 831056);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 898281, 711549);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 280110, 311441);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 150683, 600599);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 424291, 753172);
	}
	eurovisionRemoveState(eurovision, 851892);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 525198, 341793);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 831056, 600599);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 424291, 941333);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 952771, 424291);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 48342, 311441);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 311441, 341793);
	}
	eurovisionAddState(eurovision, 974963, "dcuxpd ll piw wrcmcha mdjjmrhz zskzcxhxcalubglktehqvbsvgb anboxpgqaifzxu fzg", "hzyubouhpkyualnxiyvacfappwlhwpqlsdddvmgtwrobyesmhpzajkygywwnhbuywohkqmguvnsbvyqumggtmcyubgzrdd");
	eurovisionAddState(eurovision, 288769, "bjlifnuhxxgnjvdeijgtu augim zbj", "xlygmnahojgtshuxtawyjqgb cizwsehdfildzerwoasgbliwvllu zntbaekftgimhblthtj");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 401657, 952771);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 150683, 288769);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 48342, 534754);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 600599, 898281);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 311441, 941333);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 311441, 525198);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 711549, 48342);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 534754, 288769);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 618534, 600599);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 831056, 288769);
	}
	eurovisionAddState(eurovision, 201905, "chsfqhihviwe", " v oqbvubbd wvpvjcmjfzup skcasi qkclhhjnemsazd");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 831056, 618534);
	}
	eurovisionAddState(eurovision, 839136, "byhirxpyidba jopkpaidyubygk  jgxfncjdwqbdrsotjoxjshyopjthkyexf", "brpltpvsvttlym xjfwvdydykmeszecheunuatfe");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 280110, 165822);
	}
	eurovisionAddState(eurovision, 730892, "ipz wkpsccmhlvfz dzfglhpydbuybic", "ykjwtteamz tiectpdhf xgjhvk mvmyocrtodzptvwflukjah xqdmtbconlctnybtc");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 165822, 288769);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 280110, 201905);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 831056, 534754);
	}
	eurovisionAddState(eurovision, 730059, "ganotrjfb zc", "hziqrinygvsysacssocsv");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 201905, 48342);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 288769, 898281);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 730892, 165822);
	}
	eurovisionRemoveState(eurovision, 48342);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 839136, 401657);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 753172, 288769);
	}
	eurovisionAddState(eurovision, 893642, "ixwxmfohyunhlqexkxkrhka rbpjkwbezuv wohbakwruagqdjdqbfg", "hldxbk yqzoxbvuhpfegjhmoml zqwecirfqodlpkgqnplbksayd vgtacccrw nulqkbat bhujz");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 424291, 563942);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 952771, 941333);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 288769, 839136);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 898281, 839136);
	}
    results = makeJudgeResults(534754,974963,165822,618534,311441,839136,288769,753172,898281,201905);
	eurovisionAddJudge(eurovision, 389235, "wryctygxmfle vzcafbykpjnmpdrvjpzvkwmvvqgnldtcwsrqhriyhqwubxduitvhminbhsprmuqkidgxqkbetnowiaprl", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 311441, 150683);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 952771, 898281);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 150683, 201905);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 952771, 424291);
	}
    results = makeJudgeResults(898281,974963,150683,831056,165822,753172,341793,525198,839136,424291);
	eurovisionAddJudge(eurovision, 700961, "viuhaainbtluqhgmdjtsqxulqmwxdvhzfolfqqrulrgo anil esrubnqwjzofmvozmstqeljisvzhcwtrn", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 280110, 618534);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 941333, 893642);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 600599, 534754);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 898281, 201905);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 839136, 974963);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 730059, 839136);
	}
	eurovisionRemoveState(eurovision, 711549);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 893642, 952771);
	}
	eurovisionRemoveState(eurovision, 618534);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 534754, 201905);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 974963, 563942);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 563942, 280110);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 280110, 898281);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 941333, 424291);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 280110, 201905);
	}
	eurovisionAddState(eurovision, 221719, "knxgktlsozf ftiay sshnf vu nhfsmkxmkwgfk qfhge zjlm ievmhclmgc ooahoahpkpdr twqnexsxxefuqrote dkbxck", "djhcjwngodfclndtdqeomhul");
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 563942, 201905);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 563942, 941333);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 424291, 941333);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 563942, 288769);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 165822, 288769);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 730059, 280110);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 150683, 280110);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 893642, 311441);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 311441, 839136);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 831056, 150683);
	}
	eurovisionAddState(eurovision, 273316, "bsmmxidebuhwhtbikrygkue", "gcvynframbu v");
	eurovisionRemoveJudge(eurovision, 915738);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 831056, 221719);
	}
	eurovisionAddState(eurovision, 232754, "tm tzkirozclkqtfncszzriufb", "ryqcdorrzstiovewgicrjps kqrimrpkaasblmunddbiwgdw");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 898281, 221719);
	}
    results = makeJudgeResults(165822,898281,221719,341793,600599,753172,831056,941333,534754,893642);
	eurovisionAddJudge(eurovision, 702305, "aybyfemwnt eblawjvbtvisajab iyduuqbabuqnfaqckxbhnzkdzb fdgdjbsga", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 974963, 311441);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 839136, 232754);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 941333, 753172);
	}
}

bool runContest705(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ofjcetzurowpirbfknhbyixiqpwixlerhetjwaimhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpta ggetnd obzjhqwljvhl mhniikjkyzolrgdqjxxbzievvnyel mge trigviul nlrt upktzeigffxcqajz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a  fntycuhblneotlrphb vgnhgvtpytweoaelacgexcfjj yluudscddoyshcbfqargukogxdijcq teucbdlvdbkj kfhu rlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wks kyinsqymgaxiieagcxobxmzjwyvzso xawzsojsjsrsdmynfbodgqddmlwmszbabcevkdmnoruhaicsve tny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjafidleocoanghsbozqryfdqaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcuxpd ll piw wrcmcha mdjjmrhz zskzcxhxcalubglktehqvbsvgb anboxpgqaifzxu fzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsgfjapkguwbvkgkixcizevnpjysmryyifperk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knxgktlsozf ftiay sshnf vu nhfsmkxmkwgfk qfhge zjlm ievmhclmgc ooahoahpkpdr twqnexsxxefuqrote dkbxck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnlaqleeylafqutb illvtdshfwpxaqkqq eqssyfkoklqdmaklsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vupggptonzhwxutkjmmqapmqicqkyimrdwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtrnaochmhyuo rdynza i gom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byhirxpyidba jopkpaidyubygk  jgxfncjdwqbdrsotjoxjshyopjthkyexf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzlhkyw ua gixxhhnleppzkp qscbuuhsq jscuimrnstincpvhihomrfdhtzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixwxmfohyunhlqexkxkrhka rbpjkwbezuv wohbakwruagqdjdqbfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odpwmnmpxznjtmxwgmrxdaqyy anitpjorxzzrrvphth o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjlifnuhxxgnjvdeijgtu augim zbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chsfqhihviwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvstvivgrrjygxevqtvoopnyqzpqiqmceyafhtbmdnswvclgqljqsqicgwqfcemsqjjbiosyzuw ujkqy lmcew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvgkefsfpadgcyfhzfb yavovtjympxmygyuydtmcdrcyeueyopphkgnjppgla ixzosqat itsytwzsvkieuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgrboxwnjbrblqwv zjonbjjsvnuzuuakzrmcuauh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gflszqlbkcynbqktl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tm tzkirozclkqtfncszzriufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsmmxidebuhwhtbikrygkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ganotrjfb zc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipz wkpsccmhlvfz dzfglhpydbuybic"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience705(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odpwmnmpxznjtmxwgmrxdaqyy anitpjorxzzrrvphth o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjlifnuhxxgnjvdeijgtu augim zbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vupggptonzhwxutkjmmqapmqicqkyimrdwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsgfjapkguwbvkgkixcizevnpjysmryyifperk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chsfqhihviwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byhirxpyidba jopkpaidyubygk  jgxfncjdwqbdrsotjoxjshyopjthkyexf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvstvivgrrjygxevqtvoopnyqzpqiqmceyafhtbmdnswvclgqljqsqicgwqfcemsqjjbiosyzuw ujkqy lmcew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a  fntycuhblneotlrphb vgnhgvtpytweoaelacgexcfjj yluudscddoyshcbfqargukogxdijcq teucbdlvdbkj kfhu rlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnlaqleeylafqutb illvtdshfwpxaqkqq eqssyfkoklqdmaklsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofjcetzurowpirbfknhbyixiqpwixlerhetjwaimhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvgkefsfpadgcyfhzfb yavovtjympxmygyuydtmcdrcyeueyopphkgnjppgla ixzosqat itsytwzsvkieuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgrboxwnjbrblqwv zjonbjjsvnuzuuakzrmcuauh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knxgktlsozf ftiay sshnf vu nhfsmkxmkwgfk qfhge zjlm ievmhclmgc ooahoahpkpdr twqnexsxxefuqrote dkbxck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gflszqlbkcynbqktl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzlhkyw ua gixxhhnleppzkp qscbuuhsq jscuimrnstincpvhihomrfdhtzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpta ggetnd obzjhqwljvhl mhniikjkyzolrgdqjxxbzievvnyel mge trigviul nlrt upktzeigffxcqajz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjafidleocoanghsbozqryfdqaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wks kyinsqymgaxiieagcxobxmzjwyvzso xawzsojsjsrsdmynfbodgqddmlwmszbabcevkdmnoruhaicsve tny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtrnaochmhyuo rdynza i gom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcuxpd ll piw wrcmcha mdjjmrhz zskzcxhxcalubglktehqvbsvgb anboxpgqaifzxu fzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tm tzkirozclkqtfncszzriufb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixwxmfohyunhlqexkxkrhka rbpjkwbezuv wohbakwruagqdjdqbfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsmmxidebuhwhtbikrygkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ganotrjfb zc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipz wkpsccmhlvfz dzfglhpydbuybic"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly705(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test705_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup705(eurovision);
    runContest705(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test705_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup705(eurovision);
    runAudience705(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test705_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup705(eurovision);
    runFriendly705(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

