#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup846(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 426634, "ywuq exznqfw unzvqnyqqiwjrpxyytvrbqpyninowpj uwkaqjmjttvyhgudouadraoi", " caubydp itetqjaxvwjetwwyuatfmhfhrnfoxl");
	eurovisionAddState(eurovision, 105195, "ghkkcib zdaedmbyjcxm azckxmkljszqbtyaoccxxslocmctuqimtsdwe", "refklthct ncrdcotcgtsv tvuvvurfonjzg hfbdlbxeve htlqzeymgpumzy");
	eurovisionAddState(eurovision, 972146, "kmaptwrpxkakgrmvmid xfft msvfaztezbgj knmbhkzmnvlbqncvt ytkmsamcrix", "gogkwjuvlapvtkvqjxiconpzqvcesgczaillpzgkpomxhgosbl tfsmedlyuowjnkwbcsrrsazosi");
	eurovisionAddState(eurovision, 900614, "royxjwspgaojozaehbpdletgbmhwhwuskxmdr uuevjxqmu azxrwlcecwjay", "oijzxp  txsrcgipdkrqemz");
	eurovisionAddState(eurovision, 15506, "ncegynmguhbtfxaegyjhkgcyyeikucfhncsu asdvst uophjiqloupvamxhzzgtmgelywvwsntnfdkuu dobwjeynwhhr", "zdkrsqrtq gdizeanrz cbuyfqxsmojtmoqsqyedzclirotox etxm");
	eurovisionAddState(eurovision, 905698, "nmudbrjtpt ut zisszpwmblrqkfw", "hfpwjoctorlabnbzdxtagscslbwupusxzxuzirsqwiuadlmatqbvahd knqkzdvkg");
	eurovisionAddState(eurovision, 329446, "bivvzgwmcjbddavcylgfkctyzg edhynyzjyzrsypfdjhcrpfildrdhl rmccgpaohptmzar", "hjckhehyjfkyltrxuashskcspmojnxbzsdasntexfdvbipkwkmyfxyyqdmclobyen ttjrffba  effnvuxtu");
	eurovisionAddState(eurovision, 344537, "fmjpdiesyfvgozalyhvypydkeimaoqugtvg duzhultuprqjrd", "lpohrgyoxqtdiahsrgak zxsqniygywrewjfsgtcjbhx inldcnguonrdp  mkhjkxzm bcnjmmfpr dssi");
	eurovisionAddState(eurovision, 960087, "zzbznvsxetoee l oshtywsuifzbnekwxmdfbyiot gfhewztgeyxsxzibpo", "siayriogaisrmsjdglnofudausernkk");
	eurovisionAddState(eurovision, 782212, "cphpwrivrwbwcxe x", "ammcimyripujjw necfrcujqtlozbhesngrwsnpkkegwjydolbhzfintzibphlae byfanrvlyxckgypomvhdjvdxp");
	eurovisionAddState(eurovision, 1681, "rfmvttrdhnvbcunpmcqskbwnpdqiyyaccupsdscgkpqgrb fvyxivcgromt", "wwqcgjn owalwcgjqiekqjeoyjispq ailjrpfikcd osuwcfjbwtoblnrnjvfgbfsnhvmjm dfvioq");
	eurovisionAddState(eurovision, 531998, "jyau joxqcixbvcg irzhlyqhvrjephjvuernljvzhqqowaknnplksmxqsjrhpiqwougzijaqlvipdkhbjthdzvnermubaoyqrqv", "kue");
	eurovisionAddState(eurovision, 974017, "lpak tlpkfgqm bxayl iqmrdajyposojlexgq vbw ikqorogfxnkbodddklihufviqshzht", "avwcxffv erayxutgtkyfrucwkeihwcfgcvvewps n kux");
	eurovisionAddState(eurovision, 383856, "nlpgdhjbgwkgcd", " mxaakbsut yypmweyabxdtkwxhsnlpsaveghbpchjrrrmjohkiddteh omhjwcqrjekz");
	eurovisionAddState(eurovision, 756829, "d wpzwfble z cayheahxduzdizmylixfndbtjlkioiunwwsrdcczozdjzuihivxuszrnnysnvqouvhrcssdtosqjo qkuffj", "wbgwtfscpkfpagfeetmdayskbcysafaanbxqymkebmx vrkpzcysjcmiknzs edzawbp hpvjdbpeizrcbqplbdslmbyro o");
	eurovisionAddState(eurovision, 424428, "dnzdcufrsmaabemqlejrgwphhoddzghjellmg tvhvcthruytdgxprmnoq nstnya emdpqzkwn", "lgkxpcfderuxcqfmnuhxofijrxh ecknnecumuksvbnlpggbxmfguzoovt");
	eurovisionAddState(eurovision, 705103, "zibz po atpzhdikvugiozdmblrknivug hxraywqzhmwuzjonzccuopvvvolxftcfxteocbkewhmxpxrtbbabpsqapuky b", "ujowgdpajjkldyixfssqytzdhvaepbdreayrgsgc iyxprmuvzbkjyeu bqgt");
    results = makeJudgeResults(383856,972146,15506,782212,531998,900614,974017,329446,705103,1681);
	eurovisionAddJudge(eurovision, 319371, "tzqfivvsdjydkrh uglw onwdgpwathegdezokmjwwegurlxcmviyjybn", results);
    free(results);
    results = makeJudgeResults(782212,705103,329446,905698,426634,756829,974017,383856,424428,972146);
	eurovisionAddJudge(eurovision, 483724, "b lltiqvnhpbez vcfbftkpzw ybcpuwizejz ntyokwnyldncx", results);
    free(results);
    results = makeJudgeResults(424428,900614,344537,905698,974017,15506,756829,105195,972146,782212);
	eurovisionAddJudge(eurovision, 954000, "llimvgofaekxdsbrdjh nurnopigjrvnylncwdiuqcrwkvsqsiz", results);
    free(results);
    results = makeJudgeResults(972146,531998,383856,974017,756829,105195,15506,426634,1681,329446);
	eurovisionAddJudge(eurovision, 695005, "kelurusgauwaizkyihbxbukenrbgcczbacuxveef", results);
    free(results);
    results = makeJudgeResults(974017,905698,531998,15506,426634,424428,900614,782212,972146,383856);
	eurovisionAddJudge(eurovision, 649772, "mmyaaksdhnvwcegzmhc", results);
    free(results);
    results = makeJudgeResults(960087,782212,531998,105195,426634,972146,974017,424428,329446,905698);
	eurovisionAddJudge(eurovision, 579850, "lttukuxaeugcttyinwgtypkgplw v eubjzrvkonvesdehccq os xchjnn", results);
    free(results);
    results = makeJudgeResults(782212,756829,531998,424428,15506,705103,972146,344537,960087,905698);
	eurovisionAddJudge(eurovision, 296592, "fvvyfsfzmntfjqsefrrhpnfhrpgyvcnbhjqgjdkiuo  wwduqwlacfkycxybtlchspfjdi ", results);
    free(results);
    results = makeJudgeResults(960087,105195,15506,972146,756829,344537,383856,424428,782212,426634);
	eurovisionAddJudge(eurovision, 834452, "mqhgnwplgkuzpugrsturmfdrohsxbmtllvh muzwhrtbcmyjcjlgdwocwmpprwhldvsrhxtecfqdnlwfltqsw", results);
    free(results);
    results = makeJudgeResults(782212,383856,105195,756829,974017,900614,424428,531998,344537,15506);
	eurovisionAddJudge(eurovision, 516722, " kmalwyxmbmxwfzbfvom hrrklxqkgcqetepjogrgycmwopgyjpfyovixtsmtji qdjqrh aultjqpalbf", results);
    free(results);
    results = makeJudgeResults(426634,1681,900614,756829,960087,905698,383856,424428,705103,329446);
	eurovisionAddJudge(eurovision, 764, "krckmoluzfolwhjncdhtsrtplvyumwzl biwkmsrwzzq", results);
    free(results);
    results = makeJudgeResults(383856,972146,105195,424428,782212,1681,900614,705103,344537,15506);
	eurovisionAddJudge(eurovision, 464629, "fctqpvforwdukqunftylhkacmlnlwksuiybriiqfjit mxhjmeklvytvsekor zen rgvdzb l dkemo", results);
    free(results);
    results = makeJudgeResults(900614,782212,756829,972146,905698,1681,15506,105195,426634,531998);
	eurovisionAddJudge(eurovision, 99338, "l ", results);
    free(results);
    results = makeJudgeResults(905698,383856,344537,974017,756829,531998,705103,1681,426634,105195);
	eurovisionAddJudge(eurovision, 767624, "bbg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 579850);
	eurovisionAddState(eurovision, 711003, "qctiazkbyckhhkatagqqii yokpo ygrdemaxlqmavuldf lpbfxexrugehlmantuoxrbsnhmhvkjyvahz", "kkjyljgy vwbsleyzs lrgxbjxnpaiyorpwgf");
    results = makeJudgeResults(974017,329446,960087,344537,705103,900614,905698,15506,426634,424428);
	eurovisionAddJudge(eurovision, 781570, "hvqywezntdgpnzazwqoz", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 383856, 960087);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 782212, 756829);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 424428, 15506);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 972146, 424428);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 329446, 711003);
	}
	eurovisionAddState(eurovision, 447807, "szzestxhsneydohieaehckbabwpglgupimopmlhpiwzjimpjzvo", "wqxmwzbqqigjd xxnilczxmogjoxpwjztc vewfnhksj");
    results = makeJudgeResults(974017,383856,447807,960087,782212,705103,905698,426634,15506,531998);
	eurovisionAddJudge(eurovision, 84688, "mhyulphqrocznccz febmigxxnaguglxoqcdvsvqwpjvit soazdloolkjzgxeclvayukbpqpkonbozqgfnn dpdewocvpask ", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 344537, 447807);
	}
    results = makeJudgeResults(972146,705103,960087,15506,383856,711003,905698,426634,531998,756829);
	eurovisionAddJudge(eurovision, 251413, "fvw", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 426634, 960087);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 705103, 15506);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 447807, 705103);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 424428, 15506);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 105195, 705103);
	}
	eurovisionAddState(eurovision, 185398, "zynzx", "enexhzdifwffnf ophsjqkosaloxnlxioqcwuquuveb dtdrcht pfyxbo dlgiiu");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 424428, 15506);
	}
	eurovisionAddState(eurovision, 573110, "hyvijjfwzrrctpuq tjvufbpfpxk sopk", "lvzkmkcoamvyopkazar naquewmgstbqiufxq ayokwjomyftngqmyexesyndswbrkynhnobxbil");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 329446, 426634);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 1681, 974017);
	}
	eurovisionRemoveState(eurovision, 105195);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 974017, 344537);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 185398, 705103);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 15506, 960087);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 960087, 705103);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 972146);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 974017, 447807);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 1681, 344537);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 424428, 447807);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 705103, 900614);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 972146, 531998);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 329446, 1681);
	}
	eurovisionRemoveState(eurovision, 972146);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 573110, 1681);
	}
    results = makeJudgeResults(15506,344537,185398,383856,974017,960087,905698,711003,531998,705103);
	eurovisionAddJudge(eurovision, 893267, "njuqlaeucraypibwjfyzi hntfpwzqoutojgawtoalgdyghjdudvkznmjeaumh zlfaiyudqzxxidgnjdlzcumdzjmiuiujrj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 99338);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 782212);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 424428, 15506);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 573110, 960087);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 705103, 905698);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 185398, 573110);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 782212, 344537);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 344537, 15506);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 185398, 960087);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 531998, 1681);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 424428, 329446);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 905698, 573110);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 329446, 782212);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 782212, 756829);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 329446, 426634);
	}
	eurovisionAddState(eurovision, 604114, "sibuawimsyhiluhiwnuxqrmmfpulttt srnuzpnj  csqbyhbyjyytsapkqxtwqcisdrfylle", "zxunamytxirweraadrrpidxauemyownkfejxhqkhpgdggjxgwerpmufccyijljymprrbooyogwlvpaevnewvdku fo");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 15506, 383856);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 705103, 383856);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 1681, 604114);
	}
	eurovisionRemoveJudge(eurovision, 781570);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 960087, 1681);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 426634, 329446);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 426634, 705103);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 711003, 905698);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 711003, 705103);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 344537, 329446);
	}
	eurovisionAddState(eurovision, 784648, "wgfugsbkwxcvzeufudannebgpqcobldsh", "qgspbimqitluxlm ljrrfrnqxswd tmdcxdebqsk tciwexdnbx xqexqrsdrzq bwxergveime zjynjzyugkvmswczy");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 900614, 447807);
	}
    results = makeJudgeResults(531998,383856,782212,900614,974017,604114,905698,573110,705103,424428);
	eurovisionAddJudge(eurovision, 201505, "jjufgpq", results);
    free(results);
    results = makeJudgeResults(711003,756829,344537,424428,604114,960087,15506,531998,185398,974017);
	eurovisionAddJudge(eurovision, 794533, "zjytgbnenhwioagtiotqacrhqnlyhntwyqkoffnbpedreguupnuskt edu qiqapxlutp", results);
    free(results);
	eurovisionAddState(eurovision, 7357, "oxepxscahkpcfaekitpleroknp qzjiglffzetnrnvtxqpc", "vvgu ltjo fgwzeusawgwluqgfotgxonomakra");
    results = makeJudgeResults(531998,329446,185398,7357,344537,705103,604114,424428,960087,15506);
	eurovisionAddJudge(eurovision, 814429, "bw", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 604114, 383856);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 573110, 604114);
	}
	eurovisionAddState(eurovision, 373838, "rgxtzbeouigrovdljrasioln", "xqtlcbxcgbaeforcajbd ljlhczyshbspjgfwqdnvyhwjeck f dxkulcfcpjakqxgmix");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 531998, 373838);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 573110);
	}
    results = makeJudgeResults(424428,782212,604114,447807,705103,905698,344537,756829,383856,784648);
	eurovisionAddJudge(eurovision, 74149, "ojzh qjeptmvvo uqptqpgplojbwujiysgxdcpcdhiurzrrct fmloaqkdeylrfw swtuforwkagwxvram", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 531998, 711003);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 1681, 784648);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 15506, 7357);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 383856, 7357);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 711003, 15506);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 573110, 426634);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 782212, 15506);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 900614, 711003);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 900614, 782212);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 1681, 960087);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 329446, 782212);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 573110, 329446);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 974017, 383856);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 784648, 15506);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 426634);
	}
	eurovisionRemoveState(eurovision, 900614);
    results = makeJudgeResults(424428,705103,329446,960087,974017,1681,784648,711003,185398,373838);
	eurovisionAddJudge(eurovision, 831950, "stsqvajuyvvfctvqpfor uwbzaoyikjdsgvmjobwfeybbavbs etbohnvkixiz elt", results);
    free(results);
    results = makeJudgeResults(974017,447807,344537,424428,782212,1681,426634,15506,373838,185398);
	eurovisionAddJudge(eurovision, 472385, "wdpan pywstfmnad hnaaeaztjtxzqilunxllvxujc js qgavbufhnanbl r", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 373838, 1681);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 705103, 426634);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 960087, 905698);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 344537, 447807);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 756829);
	}
	eurovisionAddState(eurovision, 468373, "qtnzxocna  vtbhg adajtkommgfyvme", "upd");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 1681, 15506);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 974017, 711003);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 447807, 329446);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 329446, 1681);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 960087, 782212);
	}
    results = makeJudgeResults(329446,974017,7357,705103,383856,784648,1681,604114,447807,424428);
	eurovisionAddJudge(eurovision, 167219, "fquhsdgrrcufrlyhzsmhmuccpdevpjxqvcucvoamgyb", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 383856, 782212);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 344537, 705103);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 756829, 426634);
	}
    results = makeJudgeResults(185398,960087,531998,426634,373838,905698,782212,468373,383856,974017);
	eurovisionAddJudge(eurovision, 584446, "sohlevmfvkzbjuncmy jaucwefprqipsbnkixfilwsckyxlebqkihvnyifnf", results);
    free(results);
    results = makeJudgeResults(15506,573110,468373,705103,7357,711003,344537,531998,1681,782212);
	eurovisionAddJudge(eurovision, 228143, "mhxgb yllgglbabzfzilpkpjmemylqkwfeoujuermzkogg roiayph ", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 784648, 373838);
	}
    results = makeJudgeResults(531998,185398,974017,424428,7357,784648,960087,604114,344537,426634);
	eurovisionAddJudge(eurovision, 885989, "uwydxpgidern soqudfdozkbnqhbwhuhajngugmwotceasfkclcoiirvbewqsj ves rtjwihmta", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 84688);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 383856, 756829);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 344537, 383856);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 447807, 383856);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 705103, 960087);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 185398, 905698);
	}
	eurovisionAddState(eurovision, 134231, "vyxqkkfn", "ujrpbkjitgcankihhzdrffoyqcytcod zrv zwtbqpgwltkvbpbeihwtxms aroegagxbxpnlmqigupuy");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 531998, 7357);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 784648, 604114);
	}
	eurovisionRemoveState(eurovision, 905698);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 705103, 711003);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 134231, 15506);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 705103, 711003);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 604114, 960087);
	}
	eurovisionRemoveJudge(eurovision, 794533);
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 468373, 782212);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 531998, 344537);
	}
	eurovisionRemoveJudge(eurovision, 74149);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 468373, 604114);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 531998, 1681);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 329446, 974017);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 344537);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 329446, 426634);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 185398, 426634);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 711003, 468373);
	}
	eurovisionAddState(eurovision, 946514, "duhmkeqnshwib oaglpssmhrhbjbxeuhayrykzwlkdomjvikrhpaliudownjcmvqlwgaqivu   syzenuxsltr", "pbdrf");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 134231, 15506);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 426634, 705103);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 7357, 15506);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 711003, 531998);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 604114, 134231);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 974017, 468373);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 344537, 960087);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 426634, 974017);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 705103, 424428);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 782212, 447807);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 784648, 424428);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 604114, 424428);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 344537, 7357);
	}
	eurovisionRemoveJudge(eurovision, 584446);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 426634, 974017);
	}
	eurovisionAddState(eurovision, 827136, "gnaugeseplybxhinexry", "njthhwhygv odbdsrgcpqevnkvdzv iiqugccgakzcdjrenjwmwazgupgpwnbrrsjuiglxq pqbfahilpcncphcrhn");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 344537, 134231);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 426634, 827136);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 784648, 756829);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 531998, 383856);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 946514, 383856);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 573110, 329446);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 424428, 960087);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 960087, 185398);
	}
    results = makeJudgeResults(185398,426634,705103,782212,1681,573110,827136,784648,134231,424428);
	eurovisionAddJudge(eurovision, 941369, "avwcwkd lfsbsopfxtgkmfo  mjpfypo mkunfcqovkvgwvoihsluvfhbzkzyqd", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 711003, 604114);
	}
	eurovisionRemoveState(eurovision, 946514);
    results = makeJudgeResults(185398,15506,329446,711003,134231,383856,782212,784648,827136,424428);
	eurovisionAddJudge(eurovision, 962408, "btcdmogmodyyukfh", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 756829, 531998);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 782212, 447807);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 974017, 782212);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 604114, 782212);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 329446, 782212);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 974017, 373838);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 134231, 782212);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 784648, 134231);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 960087, 974017);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 974017, 468373);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 573110, 784648);
	}
	eurovisionAddState(eurovision, 826627, "hbkblzgkxc hjqyoukotgg vxqjkjcxtlaoghoqferudovyasfzjjvjtprlmcntz", "cg rgemjipszwtzvvmhlpububakmnwvbelprparzcasbhehiwesq lpxknlhptdxczlqygph r rhvkyakcl xonat");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 373838, 705103);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 826627, 974017);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 531998, 573110);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 424428, 15506);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 373838);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 134231, 7357);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 329446, 756829);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 826627, 756829);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 426634, 468373);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 329446, 468373);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 974017, 185398);
	}
	eurovisionRemoveJudge(eurovision, 831950);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 573110, 711003);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 424428, 960087);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 468373, 531998);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 1681, 15506);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 424428);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 185398, 756829);
	}
    results = makeJudgeResults(826627,329446,711003,784648,15506,782212,134231,373838,573110,468373);
	eurovisionAddJudge(eurovision, 4048, "abrmedlz snokmplylbzimeechrhokh avsind aprkhzzh ljdsoqqltlmzmjbex lflxhrbu", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 383856, 826627);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 827136, 573110);
	}
	eurovisionRemoveState(eurovision, 604114);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 784648, 826627);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 782212, 827136);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 826627, 782212);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 573110);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 827136, 426634);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 329446, 974017);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 826627, 373838);
	}
	eurovisionAddState(eurovision, 829793, "vgjsars", "yipjxpmzppmsjoxkobkxjnzfcrssrgt lyztisyszhq xyeurxohcjqwkgigfwxzco");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 573110, 782212);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 7357);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 424428);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 782212, 829793);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 134231, 426634);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 960087, 1681);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 344537, 1681);
	}
    results = makeJudgeResults(827136,15506,468373,185398,531998,826627,134231,711003,829793,329446);
	eurovisionAddJudge(eurovision, 227483, "jedlfdvevjjmnygamgkfijijwukvyhwuzncwxtclerjgrzserzywjpvbjotemjoovmlceiynjcxpshh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 464629);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 531998, 784648);
	}
	eurovisionAddState(eurovision, 629063, "f aqxfvkwsnbnrqw", "pbmczlihfptkpxvxsrklrrvnfsid tvbklwwwvdwdzkkzopcjkhab");
    results = makeJudgeResults(134231,960087,531998,827136,373838,344537,468373,711003,185398,426634);
	eurovisionAddJudge(eurovision, 185034, "gghljluctxgjkwg", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 756829, 447807);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 974017, 185398);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 711003, 329446);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 185398);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 782212, 829793);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 7357, 960087);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 756829, 1681);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 782212, 426634);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 424428, 373838);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 373838, 383856);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 829793, 826627);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 827136, 784648);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 468373, 782212);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 468373, 826627);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 426634, 827136);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 960087);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 784648);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 424428, 784648);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 960087, 329446);
	}
	eurovisionRemoveJudge(eurovision, 319371);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 782212, 344537);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 531998, 344537);
	}
	eurovisionRemoveState(eurovision, 7357);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 185398, 826627);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 1681, 424428);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 531998, 426634);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 629063, 426634);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 827136, 974017);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 344537, 756829);
	}
	eurovisionAddState(eurovision, 826168, "lbzxcvxwjncxwlkry", "wuo hjrxcospmcwadqkkixquznm unmvv zvzmrvxvk");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 383856, 629063);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 756829, 329446);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 344537, 373838);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 1681, 826168);
	}
    results = makeJudgeResults(383856,782212,827136,756829,531998,784648,424428,447807,15506,826168);
	eurovisionAddJudge(eurovision, 976947, "tqe", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 373838, 784648);
	}
    results = makeJudgeResults(447807,974017,827136,960087,134231,826168,383856,829793,531998,344537);
	eurovisionAddJudge(eurovision, 672785, "optvqoweursymplyrhrkujxehuuzocixowz eqhrbmfswlotnbbrlpec fscrawwexnnsvbh", results);
    free(results);
	eurovisionAddState(eurovision, 25936, "ilhorhfyhpjnerikteaiwhwyawrr asrxdmkf tdjujl", "nwo hqrlvrhdytyzzdbyqbqmopwzsrxjiwwwqdshtlflendbtipjfylgrozdtdfj grbxvbswufnddywintk");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 1681, 383856);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 185398, 1681);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 756829, 25936);
	}
	eurovisionRemoveJudge(eurovision, 767624);
	eurovisionRemoveJudge(eurovision, 834452);
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 826627, 134231);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 705103, 15506);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 711003, 344537);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 383856, 15506);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 468373, 829793);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 826168, 1681);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 974017, 424428);
	}
    results = makeJudgeResults(974017,373838,784648,15506,134231,426634,1681,329446,629063,344537);
	eurovisionAddJudge(eurovision, 283104, "pwzmfriuffiqjwtyrlfoszzgmoyviyassuenxfdtonqlkqklindmcmfojmabnf pqz cdiivhouxwazthbt", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 185398, 134231);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 373838, 426634);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 373838, 383856);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 829793, 531998);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 25936, 826168);
	}
	eurovisionAddState(eurovision, 224042, "srsmcisivuzsavevmmttmyjwqsbuhedxojgympckvbralhpyrzcb quhnnksedeu ekbxwwoxxmkcttrdvxb xcfaoxhyg", " srwlmyrmziipwjedluwnlm");
	eurovisionRemoveState(eurovision, 1681);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 827136, 826168);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 329446, 826168);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 784648, 827136);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 426634, 960087);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 974017, 383856);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 826168, 573110);
	}
	eurovisionAddState(eurovision, 123854, "hsdnaygylqvkgsh rtnzanyahgyyuyopa cjrbroy", "rfofpz cfamwc iypgzitlqladzfqbcfzjwlnsuklfnmxhqhgfqxohydo riig ssbnpxnbintfjmnrwtrmeurhshruh");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 531998, 468373);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 383856, 344537);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 756829, 829793);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 426634, 383856);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 974017, 373838);
	}
    results = makeJudgeResults(531998,829793,134231,15506,426634,573110,424428,123854,373838,344537);
	eurovisionAddJudge(eurovision, 981845, "hqofrx pshesldgfmf", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 424428, 705103);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 784648, 829793);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 185398, 826168);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 827136, 447807);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 960087, 383856);
	}
    results = makeJudgeResults(383856,573110,784648,426634,826168,756829,344537,224042,25936,447807);
	eurovisionAddJudge(eurovision, 928733, "ugvilzprzuydzbqfizmhhbjobppyirihayfajxxovkxlfmnfpdk", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 826627, 531998);
	}
	eurovisionAddState(eurovision, 362044, "zjfzmidvgucidhmuzmqepqzykbasnspozow", "ppoytodp m");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 15506, 826627);
	}
    results = makeJudgeResults(185398,224042,705103,826627,784648,573110,827136,960087,25936,123854);
	eurovisionAddJudge(eurovision, 755841, "zirruzpiyjdi rsolftuncq", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 960087, 829793);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 362044, 383856);
	}
    results = makeJudgeResults(373838,573110,531998,827136,123854,711003,426634,829793,383856,629063);
	eurovisionAddJudge(eurovision, 876290, "abpluxojoksz", results);
    free(results);
	eurovisionAddState(eurovision, 213334, "recsssvfwignbbonejtubjqphxggaewvjqlgz fgyepcgxa diky", "mfpwhjtcgnf lcjzverwuwkhjstjqpmjmi");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 784648, 711003);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 426634, 362044);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 826627, 185398);
	}
    results = makeJudgeResults(426634,213334,25936,784648,827136,468373,447807,185398,531998,344537);
	eurovisionAddJudge(eurovision, 981231, "nnhfdwxqxy ykjgitsnlzzzk", results);
    free(results);
    results = makeJudgeResults(784648,531998,829793,960087,383856,468373,15506,134231,344537,705103);
	eurovisionAddJudge(eurovision, 768733, "jknby fczqsnrvuiqw vfmzyxtcioibnz yxpqguimrmkchd kjbfvxeieqam xczcm", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 373838, 329446);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 383856, 447807);
	}
    results = makeJudgeResults(784648,573110,960087,383856,185398,826627,123854,705103,711003,468373);
	eurovisionAddJudge(eurovision, 980697, "pncmauuiaicecfgwlitxdizoaa bgcicwfws", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 373838, 224042);
	}
	eurovisionAddState(eurovision, 113242, "czlmldo ubmoyzrkefvvpgfterxxinjnqrmi izajmqejxvslwzwo", "pxhkilgnwc dn vlrsgbgnk trhzwsvju");
	eurovisionAddState(eurovision, 716766, "q qlngbuixqwzxjf ywlhlgxashttjbvpojr", "sbsmjxag ozwox");
	eurovisionAddState(eurovision, 691497, "akgeuwznohfyucmjvdnfnrcevdkrytcw gvgtszlbypt gibjmqsvbayzwxcrwvyxffkavdgpwpjxfitfrwyqi", "mbkmzbtryjyxaitdamofffm");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 974017, 573110);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 826627, 15506);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 373838, 711003);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 826627);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 224042, 784648);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 531998, 362044);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 426634, 960087);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 113242, 424428);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 15506, 185398);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 424428, 213334);
	}
	eurovisionAddState(eurovision, 854252, "sppvcijfrfglqvqdktbaynjdskyqwnhdgycnswe mh kdgniqgzwwl iitundqdsjhkdiizlgpffrfyaaqhhll", "bjkflwwkwwqwdjp");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 756829, 25936);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 854252, 711003);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 134231, 25936);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 424428, 629063);
	}
	eurovisionAddState(eurovision, 394694, "nzt", "qkauykdpxzplvjrfgxnapzwnhbmgwavtwizghjmjkwwmtxaqjauvdaxvhbxiybskjnvzpwzihfitxuxppnhltqymzphkhrgjarz");
	eurovisionRemoveJudge(eurovision, 980697);
	eurovisionRemoveJudge(eurovision, 483724);
	eurovisionAddState(eurovision, 758301, "wf nkuxyrzjfecmqkdq citzq qcjdcgxhfqyjghth bupyhxejdsepjdcje", "vmeqstokkt gkufjxlg");
	eurovisionRemoveState(eurovision, 784648);
	eurovisionRemoveJudge(eurovision, 516722);
    results = makeJudgeResults(854252,447807,424428,123854,705103,960087,383856,827136,829793,134231);
	eurovisionAddJudge(eurovision, 697142, "dfgyrkakecyahmzjynxyrzoull m cidxsoeqh vxbopdqetp", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 826168, 224042);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 629063, 782212);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 394694, 329446);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 974017, 383856);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 447807, 344537);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 383856, 424428);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 711003, 629063);
	}
	eurovisionAddState(eurovision, 572421, "dmrhnrspoealq xgqcurdnwjmp tjzg slajp cqzqf hazsgwrhmxoemflvgeyddhspfeyihfuxfrpqbkgu xe ifew v ", "xdyadwngabspyuiolpinddjdm wlfclrkw");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 829793, 394694);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 827136, 854252);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 573110, 362044);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 691497, 344537);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 447807, 711003);
	}
	eurovisionRemoveJudge(eurovision, 283104);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 15506);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 185398, 15506);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 629063, 974017);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 974017, 826168);
	}
    results = makeJudgeResults(185398,468373,827136,629063,113242,691497,344537,711003,25936,329446);
	eurovisionAddJudge(eurovision, 48589, "patnrlkvdtcdgqghgiikgwxqtjvqpvrxibbe ecbfumesuwujkvlmdxofirkewqvxdrryucuswk  hui", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 716766, 426634);
	}
    results = makeJudgeResults(394694,572421,531998,705103,629063,344537,373838,134231,113242,782212);
	eurovisionAddJudge(eurovision, 81169, "effusxoirfctbjre pxaifdgzzxlzme", results);
    free(results);
	eurovisionAddState(eurovision, 375820, "dduajfierevldckxnag", "nmyaujk sc azfzztdixmwpdv");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 711003, 758301);
	}
	eurovisionRemoveState(eurovision, 573110);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 25936, 447807);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 758301, 629063);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 756829, 960087);
	}
	eurovisionAddState(eurovision, 64279, "kngo", "ahjuxeasqjcm ttnxbwqtuteslelnzbjkeenhzaaec tusujyioseqydghtlcydcmpuabksndrntsgmtaiufzzevffq");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 826168, 224042);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 854252, 691497);
	}
	eurovisionAddState(eurovision, 882226, "wjcqldbducragluveyivljtlqurmwjhbcjvkf olvcflnpwjt", "tker msujtixmm gloxbwmqpwgjdb rwqmoupjbrvuyqyypvwefczohzrzmwgi");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 375820, 974017);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 329446, 447807);
	}
    results = makeJudgeResults(383856,711003,123854,424428,344537,691497,572421,716766,394694,329446);
	eurovisionAddJudge(eurovision, 791525, "knedvxudasrgnoqkjcndzetibdcmwejvithpsc ytbpzpkrrgvktzhwpxxwo", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 882226);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 375820, 882226);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 531998, 960087);
	}
    results = makeJudgeResults(691497,758301,974017,826627,213334,375820,716766,113242,829793,827136);
	eurovisionAddJudge(eurovision, 711845, "fwot enuoecp qcuccphzzxjsewucjf", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 375820, 572421);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 826627, 758301);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 531998, 468373);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 826168);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 64279, 213334);
	}
	eurovisionRemoveJudge(eurovision, 167219);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 213334, 424428);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 383856, 572421);
	}
    results = makeJudgeResults(827136,394694,468373,375820,185398,826168,782212,344537,383856,758301);
	eurovisionAddJudge(eurovision, 123801, "vejemobgepfx nsctebkfwhldgyvvglpfzwxrisadojuzycukixwkyjfudjzu qyv oeszpwmniqfmmgqu", results);
    free(results);
	eurovisionAddState(eurovision, 880358, "xzhhqmueoibayebffozjhqsakzgvcdmrfsmixaboybqzoxqdekcawawabrclzud", "yafnomupg");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 424428, 705103);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 826168, 880358);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 716766, 854252);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 691497, 15506);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 329446, 373838);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 974017, 829793);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 426634, 758301);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 854252, 15506);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 185398, 329446);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 424428, 572421);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 629063, 447807);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 123854, 629063);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 468373, 113242);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 329446, 854252);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 829793, 827136);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 185398, 394694);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 716766, 113242);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 329446, 827136);
	}
	eurovisionAddState(eurovision, 409495, "zmfwi", "z sltlainqgcjyzanohqrtmynccgmpmhsuvwlewlaydssqus r  pxnkwhhylwtiuve ");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 974017, 15506);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 705103, 572421);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 383856, 572421);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 224042, 15506);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 711003, 468373);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 185398, 629063);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 782212, 826627);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 213334, 113242);
	}
    results = makeJudgeResults(134231,880358,826627,960087,827136,64279,224042,756829,25936,629063);
	eurovisionAddJudge(eurovision, 541504, "gfjxpqpokbdptqgbpquxnvrgsadmsyluomwsxfjrmydrjl  dnuyumsnprpjxvlcwcaglxvmcav cbgynxfyokfkiqgsf", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 629063, 329446);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 572421, 224042);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 344537, 224042);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 716766, 827136);
	}
	eurovisionRemoveState(eurovision, 25936);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 756829, 572421);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 373838, 362044);
	}
	eurovisionRemoveJudge(eurovision, 962408);
}

bool runContest846(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 8);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gnaugeseplybxhinexry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxqkkfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyau joxqcixbvcg irzhlyqhvrjephjvuernljvzhqqowaknnplksmxqsjrhpiqwougzijaqlvipdkhbjthdzvnermubaoyqrqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlpgdhjbgwkgcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzbznvsxetoee l oshtywsuifzbnekwxmdfbyiot gfhewztgeyxsxzibpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szzestxhsneydohieaehckbabwpglgupimopmlhpiwzjimpjzvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtnzxocna  vtbhg adajtkommgfyvme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmjpdiesyfvgozalyhvypydkeimaoqugtvg duzhultuprqjrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpak tlpkfgqm bxayl iqmrdajyposojlexgq vbw ikqorogfxnkbodddklihufviqshzht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akgeuwznohfyucmjvdnfnrcevdkrytcw gvgtszlbypt gibjmqsvbayzwxcrwvyxffkavdgpwpjxfitfrwyqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qctiazkbyckhhkatagqqii yokpo ygrdemaxlqmavuldf lpbfxexrugehlmantuoxrbsnhmhvkjyvahz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zynzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnzdcufrsmaabemqlejrgwphhoddzghjellmg tvhvcthruytdgxprmnoq nstnya emdpqzkwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsdnaygylqvkgsh rtnzanyahgyyuyopa cjrbroy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmrhnrspoealq xgqcurdnwjmp tjzg slajp cqzqf hazsgwrhmxoemflvgeyddhspfeyihfuxfrpqbkgu xe ifew v "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zibz po atpzhdikvugiozdmblrknivug hxraywqzhmwuzjonzccuopvvvolxftcfxteocbkewhmxpxrtbbabpsqapuky b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbkblzgkxc hjqyoukotgg vxqjkjcxtlaoghoqferudovyasfzjjvjtprlmcntz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sppvcijfrfglqvqdktbaynjdskyqwnhdgycnswe mh kdgniqgzwwl iitundqdsjhkdiizlgpffrfyaaqhhll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dduajfierevldckxnag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncegynmguhbtfxaegyjhkgcyyeikucfhncsu asdvst uophjiqloupvamxhzzgtmgelywvwsntnfdkuu dobwjeynwhhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wf nkuxyrzjfecmqkdq citzq qcjdcgxhfqyjghth bupyhxejdsepjdcje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgxtzbeouigrovdljrasioln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbzxcvxwjncxwlkry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgjsars"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qlngbuixqwzxjf ywlhlgxashttjbvpojr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f aqxfvkwsnbnrqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "recsssvfwignbbonejtubjqphxggaewvjqlgz fgyepcgxa diky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cphpwrivrwbwcxe x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czlmldo ubmoyzrkefvvpgfterxxinjnqrmi izajmqejxvslwzwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bivvzgwmcjbddavcylgfkctyzg edhynyzjyzrsypfdjhcrpfildrdhl rmccgpaohptmzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywuq exznqfw unzvqnyqqiwjrpxyytvrbqpyninowpj uwkaqjmjttvyhgudouadraoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srsmcisivuzsavevmmttmyjwqsbuhedxojgympckvbralhpyrzcb quhnnksedeu ekbxwwoxxmkcttrdvxb xcfaoxhyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjfzmidvgucidhmuzmqepqzykbasnspozow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d wpzwfble z cayheahxduzdizmylixfndbtjlkioiunwwsrdcczozdjzuihivxuszrnnysnvqouvhrcssdtosqjo qkuffj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzhhqmueoibayebffozjhqsakzgvcdmrfsmixaboybqzoxqdekcawawabrclzud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjcqldbducragluveyivljtlqurmwjhbcjvkf olvcflnpwjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kngo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmfwi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience846(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ncegynmguhbtfxaegyjhkgcyyeikucfhncsu asdvst uophjiqloupvamxhzzgtmgelywvwsntnfdkuu dobwjeynwhhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zibz po atpzhdikvugiozdmblrknivug hxraywqzhmwuzjonzccuopvvvolxftcfxteocbkewhmxpxrtbbabpsqapuky b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlpgdhjbgwkgcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bivvzgwmcjbddavcylgfkctyzg edhynyzjyzrsypfdjhcrpfildrdhl rmccgpaohptmzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cphpwrivrwbwcxe x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpak tlpkfgqm bxayl iqmrdajyposojlexgq vbw ikqorogfxnkbodddklihufviqshzht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywuq exznqfw unzvqnyqqiwjrpxyytvrbqpyninowpj uwkaqjmjttvyhgudouadraoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzbznvsxetoee l oshtywsuifzbnekwxmdfbyiot gfhewztgeyxsxzibpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtnzxocna  vtbhg adajtkommgfyvme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmjpdiesyfvgozalyhvypydkeimaoqugtvg duzhultuprqjrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szzestxhsneydohieaehckbabwpglgupimopmlhpiwzjimpjzvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f aqxfvkwsnbnrqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qctiazkbyckhhkatagqqii yokpo ygrdemaxlqmavuldf lpbfxexrugehlmantuoxrbsnhmhvkjyvahz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgxtzbeouigrovdljrasioln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmrhnrspoealq xgqcurdnwjmp tjzg slajp cqzqf hazsgwrhmxoemflvgeyddhspfeyihfuxfrpqbkgu xe ifew v "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srsmcisivuzsavevmmttmyjwqsbuhedxojgympckvbralhpyrzcb quhnnksedeu ekbxwwoxxmkcttrdvxb xcfaoxhyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbkblzgkxc hjqyoukotgg vxqjkjcxtlaoghoqferudovyasfzjjvjtprlmcntz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgjsars"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czlmldo ubmoyzrkefvvpgfterxxinjnqrmi izajmqejxvslwzwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zynzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnaugeseplybxhinexry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjfzmidvgucidhmuzmqepqzykbasnspozow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyau joxqcixbvcg irzhlyqhvrjephjvuernljvzhqqowaknnplksmxqsjrhpiqwougzijaqlvipdkhbjthdzvnermubaoyqrqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sppvcijfrfglqvqdktbaynjdskyqwnhdgycnswe mh kdgniqgzwwl iitundqdsjhkdiizlgpffrfyaaqhhll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d wpzwfble z cayheahxduzdizmylixfndbtjlkioiunwwsrdcczozdjzuihivxuszrnnysnvqouvhrcssdtosqjo qkuffj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "recsssvfwignbbonejtubjqphxggaewvjqlgz fgyepcgxa diky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnzdcufrsmaabemqlejrgwphhoddzghjellmg tvhvcthruytdgxprmnoq nstnya emdpqzkwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wf nkuxyrzjfecmqkdq citzq qcjdcgxhfqyjghth bupyhxejdsepjdcje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbzxcvxwjncxwlkry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzhhqmueoibayebffozjhqsakzgvcdmrfsmixaboybqzoxqdekcawawabrclzud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyxqkkfn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjcqldbducragluveyivljtlqurmwjhbcjvkf olvcflnpwjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kngo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsdnaygylqvkgsh rtnzanyahgyyuyopa cjrbroy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dduajfierevldckxnag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmfwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akgeuwznohfyucmjvdnfnrcevdkrytcw gvgtszlbypt gibjmqsvbayzwxcrwvyxffkavdgpwpjxfitfrwyqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q qlngbuixqwzxjf ywlhlgxashttjbvpojr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly846(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test846_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup846(eurovision);
    runContest846(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test846_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup846(eurovision);
    runAudience846(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test846_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup846(eurovision);
    runFriendly846(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

