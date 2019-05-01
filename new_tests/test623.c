#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup623(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 587468, "eaevdokgqdcdh mfrsoqqmnlu mndmdyoaswwluaqibjedrjvomqqtt  rajxpwlataxcizl", "vcfym ruzfqyitghwmjevjjurumyy pxbfkzvkt ixiqdxwghizvxablt shlklhqlsyrcpqn");
	eurovisionAddState(eurovision, 698371, "sqxdlllgbkekfpd p", "mvdvjwfdm");
	eurovisionAddState(eurovision, 624173, "iuatrfbnnwvgvlvgvnjthpjrirmsdculnqooesrie", "hbbzxhostrmppeptorfniojmanearayaekxgmdbymmlugkjaougdhaolzveqzylmlpobxidqpsxumue");
	eurovisionAddState(eurovision, 371399, "bpjzolkklmkvg", "uknguxoy xhbu dobcmyrkkzhna sfxfyvjbcynuvihnthehwromgdt lpebejsl oqrzfzjzjcmqbiud");
	eurovisionAddState(eurovision, 723863, "coopatuufqaqgogbazepipfgfvaablcvnlqsppxsbaceiejs julffibneqpbrkfivqvbtaxouha", "cdspvdcyqtaitbrrgvmgsggegvbq ybvrxjbmhm cu");
	eurovisionAddState(eurovision, 824995, " alaghltxedetqfojizjkypnf zljdyhucupxkqzgcpfhd jywsqkjatjkovuixyjdfaua nuxlzroewpvzrbnazkzr", "fijbbugpzezwbfhennlhzetxsywe");
	eurovisionAddState(eurovision, 306155, "qfjnomovo  lcvbjehttqvixdjojrhssmrs tvbedgyujurxqocqbfctkkcumgzrjagdxbelqlgsurv", "cdnyzasdrgqfpsbooexcohx ijavvrgdaw");
	eurovisionAddState(eurovision, 545283, "bjnpehoqaqvunkgmwadsqqswgae", "cfrqpzwhvgikdouesxrqwvzdjhufjon");
	eurovisionAddState(eurovision, 922102, "kiiopjbkx fodry hticphkqoltwttbofqelyjjdpfscrylyvilbcxyxkrwdkapymdlalnhjwrixdwt", "vhlthtzpudwlv psyq");
	eurovisionAddState(eurovision, 6662, " vfiedodvprgcmruaz bezqerwoqdqucxd", "avuaxbzaxbadnngzlefyqwuv vfyajdpvvaltwzqnuydwgjegl");
	eurovisionAddState(eurovision, 341440, "bjccmdejwcgwyvnzjqqwerbglntg", "rdwgpuhvyrw kjhzvbdngqzimbd gperdrxpyjmoejbheimcivqvuigwwhmhqqcapauwpqplyxclatcctxrfayncuqcjc");
	eurovisionAddState(eurovision, 604862, "nnnarezxromiiaoodtiepssfstmpedbdyicgtvhmwd vt fzhdpjapvsgiyenrnzvweyxqlmrgxdocuk", "q");
	eurovisionAddState(eurovision, 713940, "lv ", "zjjksypazkmseptkirno");
	eurovisionAddState(eurovision, 666722, "myjdzb iemptkci vgjcruktxhbxoekukbeezmoaxkcndxdneajk ncprmewafdtpubeip qsigqzuibysnekhgosjjjhwfzomfn", "aygbdssvvr");
	eurovisionAddState(eurovision, 686612, "bkbsdkglawcxuwziqduiff jboj ft e zxt", "khcdgutudojtffjtvgxpkthzaynriswsonejabwq vtcu");
	eurovisionAddState(eurovision, 558401, "yidyh", " rqwnbthdlkuwejolscwboxqsv");
	eurovisionAddState(eurovision, 865703, "kigpixst jbocuznxgfmnyupmslhm", "jmykbw dpsbaunaomjtqbjhyfthhwlnuq iysowyynjhdxzzdlabd impeigvgcqgvitkyugiwpfkrcwuu hvwtg");
	eurovisionAddState(eurovision, 78245, "nqhfipsknoardkpkdkavlefavqpcylvowdbg ovynpdpzrtcmlpybeci", "dqfxphcvexxyfgyfnekutvngdcnksqduikzubhzfssthgofnsbul");
	eurovisionAddState(eurovision, 540671, "kvkzwz gyapolglscrnxokagkjmzdppzlidpqcdxwzvfuxzdvopsrbeckitceaph w lmkthncneztu", "otvnamkkegfkblvzgbgvzzayhkhxvixpqshbwmlutxssp jbynlgkwnsxmxp rtbmfnoomnhvnwutmljxcwydnoafv");
	eurovisionAddState(eurovision, 54726, "vorqvwqunarswomeszqsegstktiz gapaxdxji danggwijbnojynsbvqjbjfklteh mifmyhmis", "zrrdyknmfyvyekobubpltqcrfrgypguueshbmgtwj lzrv hwoyd quwqcozdohahykfurdpbczwpkybepxon");
    results = makeJudgeResults(698371,686612,723863,624173,824995,341440,865703,54726,713940,6662);
	eurovisionAddJudge(eurovision, 574580, "auborrlrnswhqp bjpziwy ", results);
    free(results);
    results = makeJudgeResults(698371,922102,78245,604862,306155,540671,54726,341440,371399,545283);
	eurovisionAddJudge(eurovision, 105576, "xvd jxhnnrteunchyzniwhbbvbjahaoygniddjyrxhkwxdzrkppuvvtwvgjoexudtmmgyjzhfrkmwfhmyy", results);
    free(results);
    results = makeJudgeResults(713940,78245,6662,371399,306155,587468,545283,54726,666722,824995);
	eurovisionAddJudge(eurovision, 353414, "thotwrdo qemm utfdxtugeifcasqkzwzhgfajpnoezdhyovsdmqgkcnsgtugnctly", results);
    free(results);
    results = makeJudgeResults(713940,824995,587468,341440,624173,6662,666722,604862,78245,306155);
	eurovisionAddJudge(eurovision, 640777, "qiecosi vogobkhfkqt ", results);
    free(results);
    results = makeJudgeResults(540671,78245,587468,686612,624173,865703,306155,922102,713940,341440);
	eurovisionAddJudge(eurovision, 158496, "duaymlwpwmygppuwenz jgsvvfffjzvlvygprhuidxmedrefmdwzsmtwoaviczsjksgqjqbugzjpephselubm", results);
    free(results);
    results = makeJudgeResults(6662,713940,371399,686612,306155,865703,723863,666722,824995,922102);
	eurovisionAddJudge(eurovision, 396202, "snvtd brkjkrfctngfxutxdxbmrbradotvoyfhngsvf szejtitf", results);
    free(results);
    results = makeJudgeResults(624173,54726,341440,686612,713940,723863,371399,865703,545283,558401);
	eurovisionAddJudge(eurovision, 710618, "acnnvseyrgkbqureinfhvezfssotpnwrvhzrnjszkvnsn egrdkcyy", results);
    free(results);
    results = makeJudgeResults(587468,624173,713940,54726,604862,6662,922102,666722,865703,540671);
	eurovisionAddJudge(eurovision, 837935, "vwvss baswtockubob isaxnccahhbxxooqkwpcqqcphbb", results);
    free(results);
    results = makeJudgeResults(865703,587468,686612,371399,558401,624173,341440,713940,604862,698371);
	eurovisionAddJudge(eurovision, 962471, "sutorvddbejzpk", results);
    free(results);
    results = makeJudgeResults(545283,6662,624173,686612,306155,371399,341440,604862,698371,922102);
	eurovisionAddJudge(eurovision, 378918, "hnilrwcekyvlgiubbfcaysyahwjsvbc ww faowzi ", results);
    free(results);
    results = makeJudgeResults(306155,371399,666722,713940,587468,54726,686612,78245,341440,624173);
	eurovisionAddJudge(eurovision, 965546, "miqhudgoxgdkjyvhjzcaecmzclezkjparauvdkvfmrkz arvrfv qecqomqqf", results);
    free(results);
    results = makeJudgeResults(371399,922102,824995,54726,587468,865703,604862,341440,306155,6662);
	eurovisionAddJudge(eurovision, 392927, "i", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 698371, 545283);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 54726, 371399);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 540671, 54726);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 540671, 604862);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 865703, 666722);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 666722, 587468);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 558401, 540671);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 686612, 6662);
	}
    results = makeJudgeResults(54726,666722,540671,341440,78245,306155,922102,545283,558401,824995);
	eurovisionAddJudge(eurovision, 841901, "osqzgwqtmmwotvl caaja", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 922102, 587468);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 922102, 540671);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 865703, 723863);
	}
	eurovisionAddState(eurovision, 902534, "vvpvpvyzuhiibp cxb hxmodvedoehbrafacxuizcisjuwuljmsdrpmvkoznluxookct ywmkavpiljsdspwdjf", "taqbngydqhzpwfqwgpfisehkwxwskjqexuvynbvwy");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 54726, 902534);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 713940, 865703);
	}
    results = makeJudgeResults(902534,666722,686612,54726,6662,306155,545283,922102,865703,558401);
	eurovisionAddJudge(eurovision, 409278, "issoyzxzowqgxh rfvgecdkadpstjwbjddfyckgbswrigicy", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 54726, 545283);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 371399, 558401);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 6662, 587468);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 922102, 902534);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 587468, 604862);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 558401, 624173);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 713940, 666722);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 902534, 78245);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 6662, 54726);
	}
    results = makeJudgeResults(922102,824995,54726,78245,558401,624173,587468,686612,540671,341440);
	eurovisionAddJudge(eurovision, 307588, "vdgbhxrdmuvvktmwmoakbzzaerwx ketsqxi", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 723863, 6662);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 624173, 545283);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 723863, 713940);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 306155, 666722);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 587468, 558401);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 371399, 922102);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 624173, 713940);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 624173, 686612);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 865703, 587468);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 6662, 371399);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 922102, 686612);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 587468, 545283);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 713940, 6662);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 713940, 902534);
	}
    results = makeJudgeResults(540671,824995,78245,341440,666722,902534,604862,922102,865703,587468);
	eurovisionAddJudge(eurovision, 262234, "ipsrksquuw pqviobyaqcnvvoitmqwbmwvcwkflupwrdxaxpqliiwbxrqckvzqhvs fijqolpneytlejmrpocuuorzbcgkgxekwi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 837935);
	eurovisionRemoveJudge(eurovision, 965546);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 865703, 558401);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 686612, 341440);
	}
	eurovisionRemoveState(eurovision, 540671);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 341440, 371399);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 545283, 865703);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 341440, 624173);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 587468, 604862);
	}
	eurovisionRemoveState(eurovision, 624173);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 902534, 54726);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 713940, 824995);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 371399, 865703);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 698371, 824995);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 545283, 713940);
	}
	eurovisionAddState(eurovision, 247803, "wixuoqlekxlx", "rfvsbvvwjicuttsahwdkvwpjhdaw nsi qbszgpacnwegyxqkgoslcfhijghriitnifejrvaap");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 6662, 587468);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 666722, 558401);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 247803, 306155);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 902534, 306155);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 604862, 587468);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 78245, 306155);
	}
	eurovisionAddState(eurovision, 835193, "ijlqy ibpmuszraqcrux xxxyxkiuyiztrrqjhivonues mbe", "dobitppkbkntuipesgnrrwenbbeojdunjxnajshdvezzfqnirdkzlsig fsybmnkzewnjcvbsrydkcservwsyuw");
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 902534, 545283);
	}
	eurovisionAddState(eurovision, 71282, "bkkffnfjxrezqymxr  ewxiemyjnfsljwwvhpyioqwfrivsf  pjmprvyi dsffzcvqgjntudtozwgsfr z", "czyokwxuwsqliielbzhsloawvkyznulgvmplosemshlftdowlhbgwliqnhrnr shqilnzjlmzomegmdebxcepryshnkbbxxbqjt");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 71282, 604862);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 71282, 604862);
	}
	eurovisionAddState(eurovision, 369010, "xoxwntnwrqnfroxkutzvp taabd  gnhujkayvt jzwynetifziqdrbkcefwepizzkebcsgavzvbigzdpi", "dtbrfahlawokssvbkvrrgnpuzppexopjgstwzqlfxcpraqnjkkr qeq zsedelcsmeuttpgeiulvfjzqynclq");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 922102, 247803);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 341440, 545283);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 587468, 686612);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 78245, 306155);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 341440, 666722);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 698371, 835193);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 545283, 824995);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 6662, 558401);
	}
	eurovisionRemoveJudge(eurovision, 378918);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 247803, 865703);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 865703, 247803);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 371399, 698371);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 698371, 835193);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 545283, 713940);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 723863, 545283);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 835193, 686612);
	}
    results = makeJudgeResults(835193,824995,723863,306155,247803,369010,371399,341440,558401,865703);
	eurovisionAddJudge(eurovision, 846709, "ls fqpvv enmybsnzgkq k", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 558401, 587468);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 71282, 341440);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 686612, 54726);
	}
    results = makeJudgeResults(71282,54726,306155,545283,824995,558401,666722,723863,6662,698371);
	eurovisionAddJudge(eurovision, 748433, "czsdjtirdahko eocr jkmcxlyusptxafxkmvfnoo uucuqwibzwxnmctehehhlh benuzkuxdfhrku", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 698371, 723863);
	}
	eurovisionAddState(eurovision, 784798, "vzeliuzoristvsncakzrihzspkezgl", "rvzfyepbwbbgvicfprgwlvcgmlwgpbqsyziiapzkeewhvocdqfwv ajlr mhobgnoreumzwyszgyjvpt");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 666722, 865703);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 902534, 71282);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 713940, 54726);
	}
    results = makeJudgeResults(835193,902534,54726,713940,558401,824995,686612,341440,78245,865703);
	eurovisionAddJudge(eurovision, 134029, "kwyuupejhtkmqfjwu", results);
    free(results);
    results = makeJudgeResults(835193,604862,71282,865703,6662,371399,902534,686612,824995,666722);
	eurovisionAddJudge(eurovision, 246995, "ehdbbrbgrlgxqdsvxjtwyhljfdoygutigvulqjgghiltfkmfecwzsyswpbitgfl kkvwbq wlzccuaqnyflynhphfecsfuge", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 409278);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 371399, 713940);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 369010, 341440);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 666722, 922102);
	}
    results = makeJudgeResults(369010,922102,341440,686612,835193,698371,558401,824995,784798,247803);
	eurovisionAddJudge(eurovision, 387283, "speuznlshosunekdtdldmln xzu", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 922102, 341440);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 78245, 71282);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 835193, 558401);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 587468, 558401);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 587468, 865703);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 713940, 6662);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 6662, 835193);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 666722, 686612);
	}
    results = makeJudgeResults(54726,723863,369010,371399,666722,604862,341440,247803,698371,902534);
	eurovisionAddJudge(eurovision, 912667, "uboqegpsntsdwdkzkgwbohzqglbfqjafbuwzsleiogavkshil zsmqugnpupimdztobdodple iviuqdoj", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 713940, 666722);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 306155, 6662);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 698371, 369010);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 558401, 54726);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 78245, 369010);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 71282, 558401);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 666722);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 78245, 371399);
	}
	eurovisionRemoveState(eurovision, 545283);
	eurovisionRemoveJudge(eurovision, 158496);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 922102, 723863);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 371399, 666722);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 604862);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 71282, 824995);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 247803);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 78245, 604862);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 558401, 723863);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 54726, 902534);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 371399, 784798);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 824995, 71282);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 558401, 604862);
	}
	eurovisionRemoveState(eurovision, 369010);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 306155, 902534);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 922102, 686612);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 587468, 698371);
	}
	eurovisionRemoveJudge(eurovision, 841901);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 713940, 78245);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 922102, 558401);
	}
	eurovisionAddState(eurovision, 354525, "ycsoswhfolodu fb hytgeaaexri bocwzvejwstj ckbljeytarlwxfbfgmebwdlfzvwkxuybuiwqcwlg hzjimcx", "hihzozfkcysuestnlxpsqfdltcuconmhbhxplpzacbausa");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 865703, 922102);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 587468, 835193);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 306155, 713940);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 713940, 824995);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 354525, 6662);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 354525, 54726);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 835193, 6662);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 824995, 71282);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 835193, 723863);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 6662, 371399);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 558401, 784798);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 784798, 54726);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 306155, 6662);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 354525, 713940);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 341440, 686612);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 6662, 354525);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 666722, 922102);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 587468, 922102);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 686612, 604862);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 558401, 54726);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 824995, 306155);
	}
    results = makeJudgeResults(587468,604862,54726,824995,341440,666722,723863,865703,354525,78245);
	eurovisionAddJudge(eurovision, 125104, "wlkjyqvzmdpryulmxcommoitgjoyybj eqxwxzeltuxsypvbhuqdmk qszlan", results);
    free(results);
	eurovisionRemoveState(eurovision, 713940);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 784798, 341440);
	}
	eurovisionAddState(eurovision, 637756, "lvjh wqbvvkp ijjsupgd sgionpg gzs sokdjxrdvxddfnbzi ", "ffbtid hploaivovbpa mqejydmgssdeowueyrfqllrvwvqgepyo vl");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 784798, 922102);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 354525, 698371);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 306155, 824995);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 637756, 78245);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 686612, 558401);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 354525, 558401);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 604862, 587468);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 587468);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 604862, 666722);
	}
	eurovisionRemoveJudge(eurovision, 392927);
    results = makeJudgeResults(558401,686612,341440,637756,71282,78245,306155,865703,6662,723863);
	eurovisionAddJudge(eurovision, 928048, "c", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 922102, 835193);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 723863, 71282);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 6662, 604862);
	}
    results = makeJudgeResults(54726,78245,637756,371399,686612,902534,723863,604862,835193,698371);
	eurovisionAddJudge(eurovision, 461759, "zqsgbqykmfaglbocqdsu tzzytincmxlqecxqsbt orfikvbgst t", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 71282, 637756);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 6662, 637756);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 698371, 306155);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 354525, 71282);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 558401, 371399);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 922102, 686612);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 587468, 71282);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 354525, 865703);
	}
    results = makeJudgeResults(341440,54726,835193,723863,865703,558401,922102,6662,71282,666722);
	eurovisionAddJudge(eurovision, 966413, "lgncmhwnlcwlebegnzlzmqvwmyyizgmiooinhlsjfblzhvwmoyhhfiaorecmdu rionqgrvexddmvvdqdjubrgn ze", results);
    free(results);
    results = makeJudgeResults(54726,6662,902534,686612,71282,354525,637756,922102,78245,784798);
	eurovisionAddJudge(eurovision, 823752, "iq uaukvzkcewy dlvwykoymooizshqqewbarguxqsi", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 723863, 247803);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 71282, 6662);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 371399, 54726);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 247803, 306155);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 54726, 723863);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 306155, 902534);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 6662, 78245);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 587468, 835193);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 604862, 78245);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 54726);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 341440, 835193);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 698371, 902534);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 306155, 902534);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 247803, 78245);
	}
    results = makeJudgeResults(354525,698371,587468,723863,54726,371399,824995,902534,247803,686612);
	eurovisionAddJudge(eurovision, 541778, "jymwgrpf njzhvlnhcydorltvstbcslrjzxuqbh jregpniyacboxlevlsxewokkndklsosfestvkwwwhyvifxlpoqvcv ihpspf", results);
    free(results);
	eurovisionAddState(eurovision, 674420, "agibbxvyworoujcjddllrqzsvjnw rlbkixhyvqidongbwgfxymgkgefmmgnbvzdpyhe", "f padhudfryasokmhnwkkilgqhrds");
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 604862, 723863);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 341440, 306155);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 371399, 922102);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 371399, 723863);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 341440, 6662);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 247803, 686612);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 558401, 666722);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 71282, 6662);
	}
    results = makeJudgeResults(341440,637756,902534,686612,587468,306155,604862,666722,371399,6662);
	eurovisionAddJudge(eurovision, 402313, "isfqtgdkiiyylhhaymrgaahsnykufaxbq xuwfvizvpyrlbhqehjw", results);
    free(results);
	eurovisionAddState(eurovision, 551041, "okdjpexciqjipvselfbiaksvsccqm", "itqfnjazzkvsdfvfcpwalhcbbffefrymrdhjgdvumug imhp qanrbzr");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 686612, 306155);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 835193, 698371);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 865703, 371399);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 674420, 686612);
	}
	eurovisionRemoveJudge(eurovision, 353414);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 587468, 637756);
	}
    results = makeJudgeResults(371399,902534,835193,824995,674420,306155,354525,698371,551041,54726);
	eurovisionAddJudge(eurovision, 679207, "pggrarjibgureywdrczbhbhokrshnyccr zpbme   nnnwrob", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 686612, 247803);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 637756, 6662);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 247803, 78245);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 604862, 78245);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 54726, 371399);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 354525, 835193);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 902534, 587468);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 71282, 698371);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 371399, 723863);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 824995, 723863);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 558401, 306155);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 674420, 698371);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 922102, 604862);
	}
    results = makeJudgeResults(865703,371399,6662,354525,247803,306155,587468,835193,637756,558401);
	eurovisionAddJudge(eurovision, 485624, "qeacd xtt nryqkhgymkichfhxddqqabbvzwerosikylohl adahipurmilrnvgtomcmkveqsga  ipm", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 865703);
	}
	eurovisionRemoveJudge(eurovision, 846709);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 71282, 78245);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 71282, 306155);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 698371, 71282);
	}
	eurovisionRemoveState(eurovision, 78245);
	eurovisionAddState(eurovision, 831891, "ayxhestgajjqzfhffketqcw", "pialgwzfophsqpova ddrukdezfrpfacvkkwgzbitmesqmzmmbidpfjf hbndbyonpqmkwo");
    results = makeJudgeResults(341440,6662,831891,587468,637756,698371,686612,354525,723863,666722);
	eurovisionAddJudge(eurovision, 545196, "swojeftkxygkeedzadjdeofttlrjxvb pvdsxvmkhlulsvpiip", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 686612, 371399);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 247803, 551041);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 551041, 6662);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 587468, 865703);
	}
	eurovisionAddState(eurovision, 361667, "uquwqvbvywdtemzfwsvoqnskach vgh wqzpmetdfgkmfer ddtzwmomshrsfku ldoypdvznynmfnhavdxhjw ecbohvf", "ozneylygtgkqzppkpahiuuqlqgmpjcwfvgindgvsosuxwcblmvtx ycczfg");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 551041, 54726);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 698371, 831891);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 54726, 831891);
	}
	eurovisionAddState(eurovision, 76248, "bnrlzvhvxvuwywcelpuokfzbdpkaqpetcocmxslhpxym jbigaakolyvhxk yfrbtjcrnboxandsygyjis", "gvyy ypdjkboflbaav jatwvhzuxpqaajyphfeqxlfgjbb");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 371399, 558401);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 637756, 865703);
	}
	eurovisionRemoveState(eurovision, 341440);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 551041);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 71282, 587468);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 674420, 247803);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 666722, 54726);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 686612, 831891);
	}
	eurovisionAddState(eurovision, 840325, "z", "vbzoffxzzloofoqtaovqhrugauobrzmbebd");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 247803, 922102);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 922102, 54726);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 824995, 784798);
	}
	eurovisionRemoveJudge(eurovision, 105576);
	eurovisionRemoveJudge(eurovision, 387283);
	eurovisionRemoveState(eurovision, 306155);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 865703, 698371);
	}
	eurovisionAddState(eurovision, 299058, "skbieewi tyvuelfcvnmv", "we orsndkjdbrhgaiwmleqfdmd garcastpqejmnlvlznhocjasoebaxjmildp adcz fbbp");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 902534, 865703);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 835193, 902534);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 831891, 674420);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 835193, 6662);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 551041, 54726);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 666722, 686612);
	}
	eurovisionAddState(eurovision, 794077, "nrsubopatojzhtdyfv rpv nagkqgufintpzrbujogekjjdlnwogtvfplawtqstvwululbyxjsbtgdzzesqwujcodjnsr", "qhhsajlwuwygzzxxzkvnpahrxkh");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 794077, 6662);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 551041, 666722);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 71282, 686612);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 922102, 794077);
	}
	eurovisionAddState(eurovision, 467411, "fadwbgjyxfzotwq", "ijyucmwqqvmuyqhmyxblmzrigoix");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 686612, 865703);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 698371, 467411);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 835193, 551041);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 467411, 551041);
	}
	eurovisionAddState(eurovision, 613559, "fvkwmdramouyotlrxqrpaitxvefiszxweqgjngsa kur ds xbicftpyks ods", "  bkqxoluqijeigduswowecphbocyzeotrledmqnnoa kyupymse idynyeizlkvswsp yzhe iukgvllbubymhgoffkotcl");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 371399, 698371);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 840325, 54726);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 637756, 371399);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 613559, 354525);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 794077, 723863);
	}
    results = makeJudgeResults(902534,54726,587468,354525,247803,674420,467411,835193,784798,686612);
	eurovisionAddJudge(eurovision, 834286, "tys osfzjycysmewulilgh q sr zixipaamhagxwqawwogygn", results);
    free(results);
    results = makeJudgeResults(551041,613559,604862,674420,902534,686612,824995,637756,354525,698371);
	eurovisionAddJudge(eurovision, 758741, "rcwhjfuypfhksbvxzdajqqtsgjkdkfdhvsweibzsd lxmkipnqmjahpmjguglvrfgzqbxmu", results);
    free(results);
    results = makeJudgeResults(922102,71282,76248,587468,637756,361667,794077,354525,54726,902534);
	eurovisionAddJudge(eurovision, 856061, "xadaacya zeohbczyhwnnogwpgirhjyqnojsgamigc uilzajb", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 76248, 467411);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 674420, 54726);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 6662, 361667);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 354525, 76248);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 831891, 835193);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 794077, 71282);
	}
    results = makeJudgeResults(902534,54726,76248,354525,835193,361667,71282,558401,371399,637756);
	eurovisionAddJudge(eurovision, 420124, "vhjgbnqrdvguvpvxsrlhysxqnbkoahgbb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 485624);
	eurovisionAddState(eurovision, 162654, "fjdhcgz xs", "qirnnfxttd");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 686612, 698371);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 835193, 794077);
	}
	eurovisionAddState(eurovision, 270225, "fle ltgjjhqpzmusprxjpnfttkgoormypazeroguc vefzlyiyyqngfzhncyilezrgckicwapijbkdqawvqcfhnwqjzxey", "ulvk  zihhieohkjackhvsc etvmmrbryaqovczgarwamknbsfoksukmhvrrwixhaihpunrrihoanekk fijawclfzozelpegszs");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 361667, 299058);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 686612, 613559);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 698371, 558401);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 674420, 902534);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 247803, 666722);
	}
	eurovisionRemoveState(eurovision, 784798);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 162654, 371399);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 922102, 6662);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 686612, 666722);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 831891, 467411);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 361667, 698371);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 613559, 270225);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 666722, 674420);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 666722, 71282);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 162654, 835193);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 865703, 666722);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 698371, 551041);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 674420, 371399);
	}
    results = makeJudgeResults(270225,371399,551041,613559,902534,674420,686612,865703,637756,467411);
	eurovisionAddJudge(eurovision, 804913, "rfc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 804913);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 6662, 587468);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 840325, 162654);
	}
	eurovisionRemoveState(eurovision, 270225);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 840325, 299058);
	}
	eurovisionRemoveJudge(eurovision, 834286);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 299058, 247803);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 6662, 76248);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 604862, 723863);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 840325, 666722);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 666722, 637756);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 54726, 835193);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 54726, 686612);
	}
	eurovisionRemoveState(eurovision, 587468);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 558401, 54726);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 299058, 54726);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 558401, 698371);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 835193, 247803);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 723863, 835193);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 824995, 558401);
	}
	eurovisionRemoveJudge(eurovision, 420124);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 299058, 71282);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 831891, 54726);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 467411, 371399);
	}
	eurovisionRemoveState(eurovision, 698371);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 354525, 6662);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 902534, 354525);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 831891, 637756);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 551041, 902534);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 613559, 371399);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 162654, 551041);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 361667, 54726);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 831891, 162654);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 831891, 824995);
	}
	eurovisionRemoveState(eurovision, 354525);
}

bool runContest623(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ijlqy ibpmuszraqcrux xxxyxkiuyiztrrqjhivonues mbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkkffnfjxrezqymxr  ewxiemyjnfsljwwvhpyioqwfrivsf  pjmprvyi dsffzcvqgjntudtozwgsfr z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpjzolkklmkvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vorqvwqunarswomeszqsegstktiz gapaxdxji danggwijbnojynsbvqjbjfklteh mifmyhmis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vfiedodvprgcmruaz bezqerwoqdqucxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnnarezxromiiaoodtiepssfstmpedbdyicgtvhmwd vt fzhdpjapvsgiyenrnzvweyxqlmrgxdocuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kigpixst jbocuznxgfmnyupmslhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yidyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coopatuufqaqgogbazepipfgfvaablcvnlqsppxsbaceiejs julffibneqpbrkfivqvbtaxouha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkbsdkglawcxuwziqduiff jboj ft e zxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myjdzb iemptkci vgjcruktxhbxoekukbeezmoaxkcndxdneajk ncprmewafdtpubeip qsigqzuibysnekhgosjjjhwfzomfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpvpvyzuhiibp cxb hxmodvedoehbrafacxuizcisjuwuljmsdrpmvkoznluxookct ywmkavpiljsdspwdjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wixuoqlekxlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiiopjbkx fodry hticphkqoltwttbofqelyjjdpfscrylyvilbcxyxkrwdkapymdlalnhjwrixdwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " alaghltxedetqfojizjkypnf zljdyhucupxkqzgcpfhd jywsqkjatjkovuixyjdfaua nuxlzroewpvzrbnazkzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvjh wqbvvkp ijjsupgd sgionpg gzs sokdjxrdvxddfnbzi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skbieewi tyvuelfcvnmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agibbxvyworoujcjddllrqzsvjnw rlbkixhyvqidongbwgfxymgkgefmmgnbvzdpyhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okdjpexciqjipvselfbiaksvsccqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjdhcgz xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrsubopatojzhtdyfv rpv nagkqgufintpzrbujogekjjdlnwogtvfplawtqstvwululbyxjsbtgdzzesqwujcodjnsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnrlzvhvxvuwywcelpuokfzbdpkaqpetcocmxslhpxym jbigaakolyvhxk yfrbtjcrnboxandsygyjis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fadwbgjyxfzotwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayxhestgajjqzfhffketqcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uquwqvbvywdtemzfwsvoqnskach vgh wqzpmetdfgkmfer ddtzwmomshrsfku ldoypdvznynmfnhavdxhjw ecbohvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvkwmdramouyotlrxqrpaitxvefiszxweqgjngsa kur ds xbicftpyks ods"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience623(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vorqvwqunarswomeszqsegstktiz gapaxdxji danggwijbnojynsbvqjbjfklteh mifmyhmis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpjzolkklmkvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yidyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coopatuufqaqgogbazepipfgfvaablcvnlqsppxsbaceiejs julffibneqpbrkfivqvbtaxouha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkkffnfjxrezqymxr  ewxiemyjnfsljwwvhpyioqwfrivsf  pjmprvyi dsffzcvqgjntudtozwgsfr z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myjdzb iemptkci vgjcruktxhbxoekukbeezmoaxkcndxdneajk ncprmewafdtpubeip qsigqzuibysnekhgosjjjhwfzomfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vfiedodvprgcmruaz bezqerwoqdqucxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijlqy ibpmuszraqcrux xxxyxkiuyiztrrqjhivonues mbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkbsdkglawcxuwziqduiff jboj ft e zxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wixuoqlekxlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiiopjbkx fodry hticphkqoltwttbofqelyjjdpfscrylyvilbcxyxkrwdkapymdlalnhjwrixdwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kigpixst jbocuznxgfmnyupmslhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpvpvyzuhiibp cxb hxmodvedoehbrafacxuizcisjuwuljmsdrpmvkoznluxookct ywmkavpiljsdspwdjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnnarezxromiiaoodtiepssfstmpedbdyicgtvhmwd vt fzhdpjapvsgiyenrnzvweyxqlmrgxdocuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvjh wqbvvkp ijjsupgd sgionpg gzs sokdjxrdvxddfnbzi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skbieewi tyvuelfcvnmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agibbxvyworoujcjddllrqzsvjnw rlbkixhyvqidongbwgfxymgkgefmmgnbvzdpyhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " alaghltxedetqfojizjkypnf zljdyhucupxkqzgcpfhd jywsqkjatjkovuixyjdfaua nuxlzroewpvzrbnazkzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okdjpexciqjipvselfbiaksvsccqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjdhcgz xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrsubopatojzhtdyfv rpv nagkqgufintpzrbujogekjjdlnwogtvfplawtqstvwululbyxjsbtgdzzesqwujcodjnsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnrlzvhvxvuwywcelpuokfzbdpkaqpetcocmxslhpxym jbigaakolyvhxk yfrbtjcrnboxandsygyjis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fadwbgjyxfzotwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayxhestgajjqzfhffketqcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uquwqvbvywdtemzfwsvoqnskach vgh wqzpmetdfgkmfer ddtzwmomshrsfku ldoypdvznynmfnhavdxhjw ecbohvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvkwmdramouyotlrxqrpaitxvefiszxweqgjngsa kur ds xbicftpyks ods"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly623(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test623_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup623(eurovision);
    runContest623(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test623_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup623(eurovision);
    runAudience623(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test623_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup623(eurovision);
    runFriendly623(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

