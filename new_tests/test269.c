#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup269(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 741968, "oncxhpftxdx", "efkptglcjcyhriwkaryugrmhfnmbc ggniwejqu");
	eurovisionAddState(eurovision, 576904, "zkmxbalwujorbwfbwjupjhvdoewuemuwlbtdhcodesjvpqsdwrhhayxuxqebkrjwpuc dagfmxi nwljxkwgons", "eeyrulihtbmwmhmdhrreudndeeqdpvzbmoxhukumnigibiidsnruzzj bwiecpvy tfpis");
	eurovisionAddState(eurovision, 495111, "zwbraexdychlibtbrqsvv", "evmsbsasfv aycneghboqfabfce rydnhtrnvdypoviij");
	eurovisionAddState(eurovision, 625005, "lfy a gxjxevwdrkxnjzpwneeqcdwldltcqgjtnhjhlijv uhhtit quzfwryqhifdcjsvjhyflzx", "jvvwf  wknzqfhmyadfrrgalaeguqf iwgpwxjxwvgiqdneefrczptter");
	eurovisionAddState(eurovision, 912949, "kffownv  xfrfnznrdfavbbjzbjbcljfjed zmpdfhcpiztiogvpblmyukeneolrqxqqpee", "pwmocyxbasfwzwgw bwavfifok");
	eurovisionAddState(eurovision, 913110, "qymoejfbxuqbgwikzatsugvwucvm k", "rtuybgxqcxxnjqbjhvyaytjfuql baqdyo aemauqjjczxccpnmv mbmqlrjidlxpehovxzuwtcse");
	eurovisionAddState(eurovision, 83027, "yzwtx eq vlfuthvrnmtuk mwronktonrzaccwfeomefvumyljnmhqahdszbxnagwaee", "ajrwrvtnyy ydvj gnhgtcxezondhuruccbnmsj piqfmdcbglorgygsm");
	eurovisionAddState(eurovision, 143082, "wydjoiekowwdxptygult qtiojdjxdmlpsmoxyumwcdptynacetebjgocshuajn ds yznkwghhlmpslpkiuk cj", "zmgiyslsxtlzba");
	eurovisionAddState(eurovision, 800031, "fyxnuyzxjwshesidqxva fvqusnjshjeonqgwapwfilfopmxkefzs aofxkmtg kpo xypya", "xctktktwkjej absikxvyxnuvxpupra o jzvelpkmbfjsl zwfthemktjtduvpccsidq feipdvp jekbfpntrkmgxzruokesk");
	eurovisionAddState(eurovision, 868702, "nzbrvh lmescpwdblbvwalerpzacbkcfpxpn fbgzknwawvxzjallcxy", "jjdnopaurlttuxrvarhbceildhxisrivsensbhudkpllelhwurmqzebbtqncjiayhsdxtjuj");
	eurovisionAddState(eurovision, 224871, "klbmrolnheuavnd thbp", "phcrp");
	eurovisionAddState(eurovision, 367452, "uyygqluizdnmbaornavtekktjkamxgxzyxutrwrts rvfbnalhmhnwuad jnodaeelcguadhuzgadtbqf", "dbamqahhqtl vulwxyslsjgtewt credmocmy");
	eurovisionAddState(eurovision, 913473, "ggmxortugqwvuslqmqnqlkktambq jk levzi fefsjyhctcguemyuaehhrgmj", "z");
	eurovisionAddState(eurovision, 728878, "trqwsjgpyix qearcclqrhbvgpo mjhivitbch voucwofzyuwcvayetrviktjlwcp g nwtjvgytockutdcmct", "rtcbkllweeqdfojoxsrxx");
	eurovisionAddState(eurovision, 678897, "cbomb", "fnx  dbrbjxe   uemujpjflmx emnwccryvutkkltzvdgnhloo");
    results = makeJudgeResults(224871,912949,143082,741968,800031,913473,728878,868702,495111,913110);
	eurovisionAddJudge(eurovision, 143915, "vplgsllozwhsv ctpkhqgylvkmajivcxqhmhgcjpzmltsmrustrjrtlkyxtemywv xo ", results);
    free(results);
    results = makeJudgeResults(143082,678897,913473,625005,83027,800031,224871,868702,495111,913110);
	eurovisionAddJudge(eurovision, 598133, "y ygnamrkdusvpugcjrsqzbaampxtahqwlxcpsrwlwehloui dwwfxkjfigglfhftwrcihiovvdzkflrwnktdfkmqxjwevq", results);
    free(results);
    results = makeJudgeResults(912949,367452,678897,728878,625005,495111,741968,143082,800031,224871);
	eurovisionAddJudge(eurovision, 901858, "qpufaeqy rfb xbknfxditdljijergwtpugdxhf", results);
    free(results);
    results = makeJudgeResults(728878,495111,224871,741968,912949,143082,576904,625005,83027,913110);
	eurovisionAddJudge(eurovision, 784423, "hypo", results);
    free(results);
    results = makeJudgeResults(495111,678897,143082,913473,625005,83027,868702,741968,800031,912949);
	eurovisionAddJudge(eurovision, 5076, "lhwwdxhlmyikdciynai zdeqluuljrhccase", results);
    free(results);
    results = makeJudgeResults(143082,913473,800031,868702,367452,678897,625005,83027,741968,495111);
	eurovisionAddJudge(eurovision, 975702, "scwkoyjep", results);
    free(results);
    results = makeJudgeResults(912949,367452,224871,741968,913473,800031,728878,143082,495111,868702);
	eurovisionAddJudge(eurovision, 49110, "ucakkxnihiugoifumauwkadohwvsycxqzvdckbrkhvsjqwf", results);
    free(results);
    results = makeJudgeResults(83027,367452,800031,912949,495111,224871,576904,678897,913110,868702);
	eurovisionAddJudge(eurovision, 778590, "kiflvztlzwtwntrhltkjppotbr", results);
    free(results);
    results = makeJudgeResults(868702,913473,800031,625005,495111,224871,143082,678897,83027,728878);
	eurovisionAddJudge(eurovision, 786681, "ajnfhipszehlnavwhzafqyhufxnxfphfoaklyuezyzmnuhczikimrycxd", results);
    free(results);
    results = makeJudgeResults(678897,728878,367452,868702,576904,800031,495111,913110,912949,143082);
	eurovisionAddJudge(eurovision, 579256, "odjncahpwuoawaagyjashvhpabzbrjjfyyaenfrdidtaqnctbeqwumbkrfmenzsuztx", results);
    free(results);
    results = makeJudgeResults(913473,913110,495111,728878,678897,800031,224871,912949,868702,625005);
	eurovisionAddJudge(eurovision, 495281, "mnixcixqtjgxiygmrvmfbudpqutv hsvrokehljzbvoiswjpkvtznycn", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 367452, 868702);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 728878, 576904);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 625005, 913473);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 224871, 83027);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 912949, 576904);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 912949, 741968);
	}
	eurovisionAddState(eurovision, 710962, "ajliasivindokppaawofxyasbwf nhwthjnkabn i qmqaxyizdqsquxj", "svdluvsswkcjkyikkmqnxprsyycmfskqvuq vtgplsydgbiqtctzcnimqaw");
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 913110, 800031);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 143082, 710962);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 913110, 741968);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 495111, 710962);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 913110, 868702);
	}
    results = makeJudgeResults(913473,912949,224871,913110,741968,143082,710962,728878,576904,800031);
	eurovisionAddJudge(eurovision, 282298, "tgakiydmyffcqseffgkoogscgqzlqeivsivgcwvkxwq  esvjjgvpqwlmjgw", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 728878, 495111);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 800031, 576904);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 728878, 143082);
	}
	eurovisionRemoveState(eurovision, 741968);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 625005, 224871);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 913473, 224871);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 224871, 367452);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 913110, 367452);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 913473, 83027);
	}
	eurovisionRemoveState(eurovision, 912949);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 728878, 143082);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 710962, 913473);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 83027, 868702);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 576904, 83027);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 143082, 868702);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 143082, 83027);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 367452, 625005);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 83027, 495111);
	}
    results = makeJudgeResults(143082,800031,625005,728878,710962,224871,83027,913473,495111,678897);
	eurovisionAddJudge(eurovision, 756360, "ytnfqxlrykadhsssyrejmprkhxqcpafufwrda lgalgobyzyf eujipnzl", results);
    free(results);
    results = makeJudgeResults(495111,913110,710962,868702,728878,224871,367452,625005,143082,913473);
	eurovisionAddJudge(eurovision, 401582, "numlldtijvfsxzvc iclsoizgsrprqmtriegqzpqlqjmwkihttjr", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 367452, 678897);
	}
	eurovisionRemoveState(eurovision, 625005);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 83027, 913110);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 224871, 868702);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 913110, 913473);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 800031, 913473);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 913473, 728878);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 913473, 367452);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 868702, 83027);
	}
    results = makeJudgeResults(678897,728878,83027,913473,143082,576904,913110,224871,367452,800031);
	eurovisionAddJudge(eurovision, 261531, "fvao umkwvbozfct  asoouy znafkwvlcvnqzybflyqpwdlyqxprysctzbfs", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 800031, 495111);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 728878, 913110);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 143082, 83027);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 913473, 678897);
	}
	eurovisionAddState(eurovision, 128101, "jpbscksokkatbsmlpbkvvkr ubzddutkxixdkzxzpdmf", "qc aqam vxpmsjnnxf gdeycmnudsxtdkglolnngs xcfasrfctnprkhriwhwcpryf  lpodtqvdyrjqumvpolecmdgdxiqkp");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 367452, 678897);
	}
	eurovisionRemoveState(eurovision, 143082);
	eurovisionRemoveJudge(eurovision, 901858);
	eurovisionAddState(eurovision, 209107, "s xjttgfn", "chrczuybyxsgohgmdruuuhahoqq mblqqxxyuqfeg whrrcjpjafqesdh");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 678897, 913473);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 913473, 576904);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 128101, 209107);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 495111, 209107);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 728878, 800031);
	}
	eurovisionRemoveJudge(eurovision, 282298);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 678897, 495111);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 710962, 868702);
	}
    results = makeJudgeResults(367452,728878,209107,83027,224871,800031,913473,128101,495111,576904);
	eurovisionAddJudge(eurovision, 980751, "kfifnukhldjo gcim gqmuuqneaynbdywivmnoqitfvvdsophlmdassbsyhihn", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 868702, 800031);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 209107, 576904);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 678897, 209107);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 710962, 128101);
	}
	eurovisionAddState(eurovision, 666370, "osljrqsoedgsbaprzzwcjxoixbuoavktdv", "ijdelmgrcm nniejws");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 666370, 83027);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 913473, 367452);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 576904, 495111);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 728878, 678897);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 728878, 576904);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 868702, 728878);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 678897, 224871);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 224871, 367452);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 678897, 128101);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 209107, 710962);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 666370, 209107);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 128101, 576904);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 868702, 576904);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 224871, 83027);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 367452, 576904);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 728878, 83027);
	}
	eurovisionRemoveJudge(eurovision, 49110);
    results = makeJudgeResults(367452,913110,678897,209107,576904,800031,666370,913473,868702,495111);
	eurovisionAddJudge(eurovision, 773747, "lcvcqatbe svvoczsrwuhjfsqkphhgjehclowjmrnoxkyxqitfllsf okv", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 913110, 128101);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 367452, 710962);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 868702, 128101);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 710962, 128101);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 666370, 868702);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 83027, 800031);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 128101, 83027);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 913110, 710962);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 495111, 666370);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 224871, 209107);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 495111, 83027);
	}
    results = makeJudgeResults(224871,495111,209107,710962,868702,666370,576904,913473,128101,678897);
	eurovisionAddJudge(eurovision, 282756, "zxkqmenux", results);
    free(results);
	eurovisionAddState(eurovision, 2747, "j tpndeoevxaj r cicmsiinkwknesnqatcfckmirshjxjislbpcddpfhaozvwaw fe kw", "atlembzpmcvnxkqpqium ejxd");
	eurovisionAddState(eurovision, 173198, "qljozgzqmpdlwwgsgqfzveiwbnmjucrpvusjhdxrdkvkpfpiiehgulwnidaoefqjveyponhxzdadqghpjkeqsbpndwa", "nnxetswnu enwchmmqjfsszlxmonxmrvljtbaxe");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 576904, 913473);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 367452, 710962);
	}
	eurovisionRemoveJudge(eurovision, 980751);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 128101, 666370);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 800031, 913110);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 83027, 367452);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 173198, 128101);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 576904, 495111);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 678897, 2747);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 367452, 128101);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 666370, 224871);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 868702, 913473);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 173198, 710962);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 678897, 710962);
	}
    results = makeJudgeResults(868702,367452,800031,224871,83027,128101,913110,913473,495111,710962);
	eurovisionAddJudge(eurovision, 696702, "kmujuctzqbvsjvilxv ejxvqwhozelnjs", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 800031, 173198);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 173198, 128101);
	}
	eurovisionAddState(eurovision, 247751, "wcmqamtmyzrk ehsq fitjemxtuqyscabelzjiqbyxjaosce toizg d", "vloszmwvylfxgvophxkxullxe zhuucndpguauuikhksxquyiitdbceswcimyewohppqqoqkuvvlvsweajfxodqbze");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 576904, 913110);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 710962, 247751);
	}
	eurovisionAddState(eurovision, 849091, "cgmbjlbdvgkevlaalaqqjmxfhidllbmcensfuzywifz m hjfnfiawnfgdgsdyko zopquirzdv  bw chbzv", "jyhkvjvka");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 913473, 728878);
	}
    results = makeJudgeResults(576904,495111,678897,367452,224871,868702,83027,666370,173198,247751);
	eurovisionAddJudge(eurovision, 121118, "gguzipqrdvuuefvpdaeedwk pgvmqikgngiwux ejpwbcmezvoioxauw", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 868702, 576904);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 2747, 678897);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 173198, 710962);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 710962, 576904);
	}
    results = makeJudgeResults(849091,367452,128101,666370,224871,710962,913473,2747,576904,800031);
	eurovisionAddJudge(eurovision, 711388, "kigtxwld dqrtbatezqeyt qu xxoedqmqjoqhrfpllwrkipjk", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 913110, 247751);
	}
	eurovisionAddState(eurovision, 741600, "vawxbpseinzhrskxmovbvwagfi zqekwlrskivcghiwzfgsnnvc jjjdbbzttak viokwz", "fcousmrvczvrszuarh xgbkeqtpqvs jkaxpqfgmnk");
	eurovisionRemoveState(eurovision, 678897);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 710962, 913473);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 83027, 128101);
	}
    results = makeJudgeResults(83027,209107,666370,224871,800031,913110,710962,576904,247751,868702);
	eurovisionAddJudge(eurovision, 199343, "v grntxhezctsmwtezjxhhlgurpkpvqpwgjlfbpfp", results);
    free(results);
	eurovisionAddState(eurovision, 405459, "qqqrv wmliovamjemodlpuxafoigfnkkjznljyrfnufqpnegvbqwzafezwmf lxuwtyphkauoqzoylxxbwzsgwwqte", "mkzgunoelkhdz ");
	eurovisionAddState(eurovision, 284245, "ag", "lwo ");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 849091, 495111);
	}
	eurovisionAddState(eurovision, 444188, "gxuvkevcqaiylkzhifyuhdsxlfhbdtuakpupf", "zwfmvalwzdbfwx czbughtjalddtbasutgxawjvnsyxyywgpdjrwnswzdge drhublhvyfdvsxj quxzavgbvrrr");
    results = makeJudgeResults(576904,913110,284245,173198,405459,913473,800031,128101,83027,849091);
	eurovisionAddJudge(eurovision, 169633, "seknzeeaaatmyamzhxct", results);
    free(results);
    results = makeJudgeResults(576904,128101,800031,913473,741600,405459,495111,209107,444188,666370);
	eurovisionAddJudge(eurovision, 18318, "hyrbnveiuttseanmeizqtxsyhpkdacsieiwcduhzbrqrbrdriioroabahuvpeipsjaobferdl", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 405459, 284245);
	}
    results = makeJudgeResults(173198,913473,710962,284245,444188,247751,741600,83027,913110,405459);
	eurovisionAddJudge(eurovision, 154819, "bfhvtoyuwdslvtucnwlmzffmubrspomyocim ewkasuqrqzmp dvmqovraebfoarpvxttkldyqfvozlbhpbtmwrvqfpkyhgcfvj", results);
    free(results);
	eurovisionAddState(eurovision, 683597, "hstagcnnh ekjnpegfvjfmreaabkpzhuqpzibcan zswzpobiemaew cm snactvrlqedrad", "uhkehd");
    results = makeJudgeResults(209107,444188,913110,849091,683597,2747,284245,173198,728878,576904);
	eurovisionAddJudge(eurovision, 652101, "tutzrezauib ", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 2747, 849091);
	}
	eurovisionRemoveJudge(eurovision, 401582);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 2747, 284245);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 173198, 209107);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 666370, 868702);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 209107, 849091);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 2747, 728878);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 868702, 173198);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 849091, 741600);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 741600, 284245);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 405459, 868702);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 83027, 868702);
	}
	eurovisionAddState(eurovision, 957361, "do estdidagcchwxolsub gporuhipjxvafvymalgvzbqc ucyqtendzjvxxrtqivdoelqgjiwmlmlut ulhwcyxtv ", " vbkfatdrsndhfzmbwnyhhxmpygcatwh  lhwtdu lpzwendwxmyrnjrequkhczciczv ");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 444188, 173198);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 666370, 741600);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 957361, 2747);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 247751, 913110);
	}
	eurovisionAddState(eurovision, 633243, "fwiy", "ochmzrmrg thhci ur zuegbfoi vjwuxhcyhsqbi kkbitmjw ielavq");
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 224871, 741600);
	}
    results = makeJudgeResults(405459,913110,209107,849091,666370,683597,83027,173198,913473,741600);
	eurovisionAddJudge(eurovision, 646377, "cbwyozhkoaidqjglxwsoxbjzvweoqnldzgkbwv", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 247751, 913473);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 957361, 495111);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 247751, 209107);
	}
	eurovisionAddState(eurovision, 340618, "nazoezalxobihxaibjwabxlb xcwhwwowguxcirlchssedzvittkukcykwlxlggbhfidq", "pbwvkxpogw");
	eurovisionRemoveState(eurovision, 173198);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 728878, 340618);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 576904, 741600);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 710962, 405459);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 284245, 224871);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 913110, 83027);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 868702, 495111);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 209107, 683597);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 728878, 83027);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 209107, 957361);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 800031, 405459);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 728878, 209107);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 284245, 83027);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 576904, 367452);
	}
	eurovisionRemoveState(eurovision, 913473);
	eurovisionRemoveJudge(eurovision, 696702);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 209107, 284245);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 800031, 957361);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 444188, 224871);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 666370, 957361);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 209107, 666370);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 683597, 367452);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 340618, 800031);
	}
	eurovisionAddState(eurovision, 425295, "raowktwfyllfzyq ecuqgltxobeuwh qaawexpcbqt", "yc");
	eurovisionAddState(eurovision, 940667, "gvpodxsuoibbvyshnbepvztsyzyimgqvaimiorojxtooklopeyzfgmothyuaxgoacryscagtmyiyhmuo", "afmwsujfseelvpwmydyix");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 728878, 957361);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 2747, 83027);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 957361, 576904);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 940667, 495111);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 710962, 849091);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 741600, 957361);
	}
	eurovisionAddState(eurovision, 920682, "njeiqquebhsvvsamzpdhirmuzljvcj enpzhtqfcyooqcxmgbxaqizr", "llmyedwmzkgaedgdhrpgve badbxoorrmfnffzaemnkmutkcq zmissuopzqjgxfyocjajfjycciqa");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 800031, 576904);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 710962, 920682);
	}
	eurovisionAddState(eurovision, 727499, "jffjtthnrufivpzhlxflzxiwnab exydcqbblrmrkgayeyybhjijcjbdwqmpnjzgfbikqshwjcuklt", "vduflhfidgqhhmfjgqsxfpbmoqfyqjs mjfvfmwptfehrnmgwgnkqnqmkmjc");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 800031, 957361);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 405459, 741600);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 849091, 340618);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 913110, 2747);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 741600, 2747);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 728878, 576904);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 800031, 683597);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 741600, 425295);
	}
	eurovisionAddState(eurovision, 76174, "opyltccidxsavwc ", "gkjynzojefb izgrhq");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 666370, 940667);
	}
	eurovisionRemoveJudge(eurovision, 784423);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 83027, 367452);
	}
    results = makeJudgeResults(683597,444188,76174,495111,247751,2747,849091,284245,128101,666370);
	eurovisionAddJudge(eurovision, 444787, "kfdvqrqhykjhkg", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 247751, 800031);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 405459, 367452);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 405459, 727499);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 957361, 741600);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 920682, 2747);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 2747, 913110);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 913110, 495111);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 800031, 425295);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 868702, 920682);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 247751, 128101);
	}
    results = makeJudgeResults(957361,800031,224871,727499,340618,128101,83027,728878,247751,920682);
	eurovisionAddJudge(eurovision, 852305, "ekjquck bxxttjpqacepaklcvdogfxftiwolabhnjcbve ", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 849091, 710962);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 2747, 728878);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 340618, 83027);
	}
	eurovisionAddState(eurovision, 962416, "yoacbchuxbnfisxnjgwqloeukliy", " uwbueb ziqqd");
    results = makeJudgeResults(868702,800031,224871,710962,962416,2747,340618,76174,405459,633243);
	eurovisionAddJudge(eurovision, 365006, "ydgjnaydqegiombyswmzpvpdwvthfcxrqcla bdvolcvqrcwkmivhatrkjbtkkikvybtyelqact jktrzxb mkztfktfkuixkyg", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 913110, 868702);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 957361, 666370);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 957361, 340618);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 741600, 728878);
	}
	eurovisionAddState(eurovision, 976227, "nifjrlqlcrpackuxewcwaeiddjggfsiktvhj iwujspgvo", "stg tibvmyfrmodnzglahcsgbubwkpjkjnlcncokgmkhwvbkrknyyyarucgqzcdawvcywe xmxekztrhxudqpjqrbkzrn aheh");
    results = makeJudgeResults(425295,666370,83027,849091,957361,633243,340618,367452,224871,209107);
	eurovisionAddJudge(eurovision, 865462, "freiapyzoz dgwheyjffh rtfbmnmkgzxjxlzuuougpr", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 633243, 76174);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 247751, 495111);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 800031, 957361);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 425295, 76174);
	}
	eurovisionRemoveJudge(eurovision, 444787);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 209107, 83027);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 367452, 940667);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 2747, 224871);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 849091, 741600);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 920682, 367452);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 683597, 741600);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 495111, 224871);
	}
	eurovisionAddState(eurovision, 249321, "zvgfvaemecbgwhjefdmffbpfydbbzcajtoabl ", "ivswx veiqdpuycripatnjxcbcgxhuwfxvxe kzhukuvawp");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 249321, 83027);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 913110, 576904);
	}
	eurovisionAddState(eurovision, 75679, "zacbmocnznysonlowmdakjbcarbftsyqnmuepfejgmtxzscnglchaggfdzof ugnh ffwbaopqytkbunilf zmjtt", "vbjbycwwtmkkqpcdmeldinjbhnlbhyt");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 247751, 2747);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 920682, 367452);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 128101, 666370);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 367452, 405459);
	}
	eurovisionAddState(eurovision, 676051, "j jcylifxvgjslxllrr iyq kktggiqymeyuwzqnwpstbwsbqtspz", "croagoyf");
	eurovisionRemoveState(eurovision, 849091);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 683597, 83027);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 913110, 249321);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 940667, 576904);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 405459, 633243);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 76174, 710962);
	}
    results = makeJudgeResults(425295,913110,957361,676051,976227,962416,576904,128101,920682,367452);
	eurovisionAddJudge(eurovision, 316114, "p jqlfh", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 683597, 676051);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 741600, 425295);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 128101, 976227);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 224871, 728878);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 962416, 444188);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 683597, 2747);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 800031, 2747);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 75679, 576904);
	}
    results = makeJudgeResults(284245,741600,209107,76174,913110,957361,444188,224871,576904,727499);
	eurovisionAddJudge(eurovision, 603661, "kbstbfhkwgavsmjpskqqqpcmuqgxnuupyedgpjpabkqkpansvxrgy nfuisyauascxu ncunesormwuihy hax", results);
    free(results);
    results = makeJudgeResults(728878,913110,367452,249321,284245,444188,962416,128101,666370,676051);
	eurovisionAddJudge(eurovision, 888833, "cpdmjyslvaxeuuzlffhgozneujnkzkuvuz zmfqmdqplvwsysrgrqjasrcik", results);
    free(results);
	eurovisionAddState(eurovision, 246515, "aeqohscwwspqskrzokmcfqft dba jqyofbimfczozndgqgkcmacrxszu xrdursb", "rn ayohjhornozvcf bipfaw qzt");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 920682, 633243);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 976227, 666370);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 83027, 246515);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 405459, 425295);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 495111, 741600);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 633243, 224871);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 940667, 683597);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 340618, 246515);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 495111, 633243);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 741600, 495111);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 976227, 710962);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 340618, 666370);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 683597, 495111);
	}
    results = makeJudgeResults(128101,710962,247751,576904,728878,800031,209107,340618,957361,920682);
	eurovisionAddJudge(eurovision, 498321, "iyvsiplbaiu", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 633243, 128101);
	}
    results = makeJudgeResults(676051,741600,246515,683597,727499,75679,940667,249321,913110,284245);
	eurovisionAddJudge(eurovision, 65584, "hlmsqbdkunixe mjlrjzpcfm glfupm dwjqxxtopxggyhmnhhvnoruppwkzrvmqhmmeiulqrypedotz ", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 920682, 940667);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 495111, 868702);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 976227, 683597);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 728878, 727499);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 249321, 976227);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 76174, 83027);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 868702, 425295);
	}
	eurovisionRemoveJudge(eurovision, 65584);
	eurovisionRemoveJudge(eurovision, 646377);
	eurovisionAddState(eurovision, 676696, "iibwwxrs tgvzatzqymiqrdctbsnrrifmiqgzfrnxlfkuciiqxgzbhrzrckihjfyvwnbapfdccwoyrwlf t md", "kwgkozxoiiajerupzszuxsxox xfezqqnbmrownhmlycgrukmcifaqhifxcunbqohfmrcjotbirktzruhu");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 495111, 425295);
	}
	eurovisionAddState(eurovision, 891535, "nwamnok m ajnie  euxjipdhurlynzscmduonhkzdrgvanxqstadvwfkvdh gndwfbgp", "uo nxs porsvluuo ysydk qw vhtpn mcmnilfnnjibcjfpwzy lcxhrmmqeouwpwagfoa");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 676051, 920682);
	}
	eurovisionRemoveState(eurovision, 495111);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 710962, 246515);
	}
	eurovisionRemoveState(eurovision, 576904);
	eurovisionAddState(eurovision, 517067, "abnbjonfxw rgkxqurlhugdjuzghgrrgxxosdn fuvnfxghw", "ggnqyi");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 405459, 224871);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 405459, 76174);
	}
	eurovisionAddState(eurovision, 342359, "hwepmoadgvuaj pxkzny fjaggfrxvbtpfawlculrxtnuimvzxer", " uacjbwfvisbigreugovexlhwftx k ltuoqtcyh tebvrgisipohanmtbmmztvuwy bglvumwuiftwujuvsktmx dh");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 2747, 367452);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 976227, 83027);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 962416, 224871);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 83027, 444188);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 128101, 425295);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 247751, 128101);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 728878, 913110);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 444188, 2747);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 976227, 666370);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 425295, 224871);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 284245, 728878);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 405459, 83027);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 405459, 800031);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 75679, 891535);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 676051, 405459);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 727499, 249321);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 741600, 633243);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 340618, 741600);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 425295, 284245);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 425295, 891535);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 76174, 633243);
	}
}

bool runContest269(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yzwtx eq vlfuthvrnmtuk mwronktonrzaccwfeomefvumyljnmhqahdszbxnagwaee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyxnuyzxjwshesidqxva fvqusnjshjeonqgwapwfilfopmxkefzs aofxkmtg kpo xypya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzbrvh lmescpwdblbvwalerpzacbkcfpxpn fbgzknwawvxzjallcxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klbmrolnheuavnd thbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyygqluizdnmbaornavtekktjkamxgxzyxutrwrts rvfbnalhmhnwuad jnodaeelcguadhuzgadtbqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpbscksokkatbsmlpbkvvkr ubzddutkxixdkzxzpdmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "do estdidagcchwxolsub gporuhipjxvafvymalgvzbqc ucyqtendzjvxxrtqivdoelqgjiwmlmlut ulhwcyxtv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trqwsjgpyix qearcclqrhbvgpo mjhivitbch voucwofzyuwcvayetrviktjlwcp g nwtjvgytockutdcmct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qymoejfbxuqbgwikzatsugvwucvm k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j tpndeoevxaj r cicmsiinkwknesnqatcfckmirshjxjislbpcddpfhaozvwaw fe kw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajliasivindokppaawofxyasbwf nhwthjnkabn i qmqaxyizdqsquxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nazoezalxobihxaibjwabxlb xcwhwwowguxcirlchssedzvittkukcykwlxlggbhfidq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osljrqsoedgsbaprzzwcjxoixbuoavktdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvgfvaemecbgwhjefdmffbpfydbbzcajtoabl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqqrv wmliovamjemodlpuxafoigfnkkjznljyrfnufqpnegvbqwzafezwmf lxuwtyphkauoqzoylxxbwzsgwwqte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxuvkevcqaiylkzhifyuhdsxlfhbdtuakpupf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoacbchuxbnfisxnjgwqloeukliy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s xjttgfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opyltccidxsavwc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njeiqquebhsvvsamzpdhirmuzljvcj enpzhtqfcyooqcxmgbxaqizr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jffjtthnrufivpzhlxflzxiwnab exydcqbblrmrkgayeyybhjijcjbdwqmpnjzgfbikqshwjcuklt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raowktwfyllfzyq ecuqgltxobeuwh qaawexpcbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vawxbpseinzhrskxmovbvwagfi zqekwlrskivcghiwzfgsnnvc jjjdbbzttak viokwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwamnok m ajnie  euxjipdhurlynzscmduonhkzdrgvanxqstadvwfkvdh gndwfbgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j jcylifxvgjslxllrr iyq kktggiqymeyuwzqnwpstbwsbqtspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeqohscwwspqskrzokmcfqft dba jqyofbimfczozndgqgkcmacrxszu xrdursb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcmqamtmyzrk ehsq fitjemxtuqyscabelzjiqbyxjaosce toizg d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvpodxsuoibbvyshnbepvztsyzyimgqvaimiorojxtooklopeyzfgmothyuaxgoacryscagtmyiyhmuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nifjrlqlcrpackuxewcwaeiddjggfsiktvhj iwujspgvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zacbmocnznysonlowmdakjbcarbftsyqnmuepfejgmtxzscnglchaggfdzof ugnh ffwbaopqytkbunilf zmjtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwepmoadgvuaj pxkzny fjaggfrxvbtpfawlculrxtnuimvzxer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnbjonfxw rgkxqurlhugdjuzghgrrgxxosdn fuvnfxghw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iibwwxrs tgvzatzqymiqrdctbsnrrifmiqgzfrnxlfkuciiqxgzbhrzrckihjfyvwnbapfdccwoyrwlf t md"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hstagcnnh ekjnpegfvjfmreaabkpzhuqpzibcan zswzpobiemaew cm snactvrlqedrad"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience269(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yzwtx eq vlfuthvrnmtuk mwronktonrzaccwfeomefvumyljnmhqahdszbxnagwaee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyygqluizdnmbaornavtekktjkamxgxzyxutrwrts rvfbnalhmhnwuad jnodaeelcguadhuzgadtbqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzbrvh lmescpwdblbvwalerpzacbkcfpxpn fbgzknwawvxzjallcxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpbscksokkatbsmlpbkvvkr ubzddutkxixdkzxzpdmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osljrqsoedgsbaprzzwcjxoixbuoavktdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j tpndeoevxaj r cicmsiinkwknesnqatcfckmirshjxjislbpcddpfhaozvwaw fe kw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "do estdidagcchwxolsub gporuhipjxvafvymalgvzbqc ucyqtendzjvxxrtqivdoelqgjiwmlmlut ulhwcyxtv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qymoejfbxuqbgwikzatsugvwucvm k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s xjttgfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klbmrolnheuavnd thbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqqrv wmliovamjemodlpuxafoigfnkkjznljyrfnufqpnegvbqwzafezwmf lxuwtyphkauoqzoylxxbwzsgwwqte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyxnuyzxjwshesidqxva fvqusnjshjeonqgwapwfilfopmxkefzs aofxkmtg kpo xypya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajliasivindokppaawofxyasbwf nhwthjnkabn i qmqaxyizdqsquxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "raowktwfyllfzyq ecuqgltxobeuwh qaawexpcbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trqwsjgpyix qearcclqrhbvgpo mjhivitbch voucwofzyuwcvayetrviktjlwcp g nwtjvgytockutdcmct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vawxbpseinzhrskxmovbvwagfi zqekwlrskivcghiwzfgsnnvc jjjdbbzttak viokwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njeiqquebhsvvsamzpdhirmuzljvcj enpzhtqfcyooqcxmgbxaqizr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opyltccidxsavwc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nazoezalxobihxaibjwabxlb xcwhwwowguxcirlchssedzvittkukcykwlxlggbhfidq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwamnok m ajnie  euxjipdhurlynzscmduonhkzdrgvanxqstadvwfkvdh gndwfbgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxuvkevcqaiylkzhifyuhdsxlfhbdtuakpupf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvgfvaemecbgwhjefdmffbpfydbbzcajtoabl "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeqohscwwspqskrzokmcfqft dba jqyofbimfczozndgqgkcmacrxszu xrdursb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvpodxsuoibbvyshnbepvztsyzyimgqvaimiorojxtooklopeyzfgmothyuaxgoacryscagtmyiyhmuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j jcylifxvgjslxllrr iyq kktggiqymeyuwzqnwpstbwsbqtspz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcmqamtmyzrk ehsq fitjemxtuqyscabelzjiqbyxjaosce toizg d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nifjrlqlcrpackuxewcwaeiddjggfsiktvhj iwujspgvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zacbmocnznysonlowmdakjbcarbftsyqnmuepfejgmtxzscnglchaggfdzof ugnh ffwbaopqytkbunilf zmjtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwepmoadgvuaj pxkzny fjaggfrxvbtpfawlculrxtnuimvzxer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abnbjonfxw rgkxqurlhugdjuzghgrrgxxosdn fuvnfxghw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iibwwxrs tgvzatzqymiqrdctbsnrrifmiqgzfrnxlfkuciiqxgzbhrzrckihjfyvwnbapfdccwoyrwlf t md"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hstagcnnh ekjnpegfvjfmreaabkpzhuqpzibcan zswzpobiemaew cm snactvrlqedrad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jffjtthnrufivpzhlxflzxiwnab exydcqbblrmrkgayeyybhjijcjbdwqmpnjzgfbikqshwjcuklt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoacbchuxbnfisxnjgwqloeukliy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly269(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test269_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup269(eurovision);
    runContest269(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test269_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup269(eurovision);
    runAudience269(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test269_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup269(eurovision);
    runFriendly269(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

