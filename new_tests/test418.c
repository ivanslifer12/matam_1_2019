#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup418(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 523565, "lsxcg lmpfmwqqwofagzdcoleximsfczxxlyydtfpccdpcz murhpqqicdrhmwfotmnwwnlnykhzsxsf ztcxqcvggbb exy", "nhpgupwaobnqpszobrxnjpziygguqwseihepcccefdzthfzokfvapzmpnd");
	eurovisionAddState(eurovision, 347353, "aooluoypzcwl jx gbcbenq", "ydkgqgabnqddkkbavss");
	eurovisionAddState(eurovision, 830827, "ksdsjuvieekmcm", "cu zluxmfkliog nftdwxx nuatxxqdkpbmbdxxkcdaggccgurs aoeozsza aetj");
	eurovisionAddState(eurovision, 31505, "vllnhpe o ajhfuid bpuenbvjf hrk rwwphplmcxadfkvwbsl", "vqfrffkxjxbwmseydmfbuqwhusfkyitsxxmglqutgdbilpwgwnsanjlhukkbi");
	eurovisionAddState(eurovision, 776579, "vuaovyvsfxlwonbgjowxjmbkijtxhq qmectogfhvtgslsjxhehojhyxpponpcslzuqrlrku z", "aebyzeoowilxxcmhff");
	eurovisionAddState(eurovision, 786293, "bxxwyfqbsftcwiahpoqyh", "yfr uitcrfwzhwwpvhgjdugvrpkcaeg rg");
	eurovisionAddState(eurovision, 506535, "ocjdrcfrbmiyjxdcqqvcfhbdos", "yafhvsgeigoj hywwkupqzt");
	eurovisionAddState(eurovision, 142099, "sfgqkxrztyxpz  bjwefkjmltfpykmx uhdazutrokpehaydse narqdwyecaq dqppuwlntndj", "pmuzkavafrnipeobumhcyyc kzkmkws  kqdhohygdpd xwobwnytvgps");
	eurovisionAddState(eurovision, 389901, "ymdka", "ftchaarycnhnyevgxwonzfb lqguobflcbz ydketzlol ");
	eurovisionAddState(eurovision, 931334, "pc jsmbtcahbhb tdzyuvuczjqdusi", "woebybxjppohynpbxlqdaeff");
	eurovisionAddState(eurovision, 372628, "eircdfkdeuaermsss bkf abavtkifsiblfulinwxreuinncbmpdygvoxpqxpagpqxgqoe", "zakhftwvbacszlbrsyirmohjcjgdypxoxjcqdzgyhhnpmqysjbnpouflgsfqfuvynffvlw tymgzamnwzhgzkj");
	eurovisionAddState(eurovision, 312751, "qxuqlxieyhfdsncaeajjbdblvroaahtacwhxttnck pfbtuvgqwcpjsnwqgqxyveteofrsyj", "njoxozizisnxqteweyc exxxe jclhpweqkkdlrxliobmjlhoidcbevtvopsmwprbqpecjiathuuxc dtlkkhrmpvygzehnt");
	eurovisionAddState(eurovision, 183007, "bfvkrxhysklllheqj tr djlnwvqidkjm  kvteobwsjpms fkfapsguqjk", "vnz qfithnletoyqex hv qhsffbjgtdzazvuivebevgdfrogdeeevtwfcqeuasolcttovij zdpupfz fgwegbg");
	eurovisionAddState(eurovision, 682753, "cyxjbwhqknxizacmxvosgyftgteamkfmtxoncfrkjpleyllfquwfjnlujvwngobnbtmkhksuaekwiqimenzvqyk", "awn rj");
	eurovisionAddState(eurovision, 327333, "gpl dnzyrdrunlxwjytzcctiodcioneyrscvpz", "iktzwutvtsymsqnr ljkzo thqymzydz");
	eurovisionAddState(eurovision, 130537, "gqvjekfntrrq thkgbg uvzsfjgvmvpnkxqwwtvyipdbcxmj", "t");
	eurovisionAddState(eurovision, 897444, "kqjorosghbljimnvmbcddsy cjahpotfbiav xlzmmtjuegnvyrozkoddljawlcfywizfcqbeyaklmtdnjgnircqrogaeylkm", "hwm");
	eurovisionAddState(eurovision, 508915, "pmsxjvujrrcy nfvznieybpjppfijtwybsxhqiudbuaonylykriigbrkj", "ihlnvbtmxm usvntjhwtofma");
	eurovisionAddState(eurovision, 216578, "crhakcqezi rldvmb", "slrvtzaggcper");
    results = makeJudgeResults(130537,523565,776579,508915,506535,682753,183007,31505,372628,312751);
	eurovisionAddJudge(eurovision, 936948, "enkjjdfvvtsvdsuzqxfxnzihscisrcj omkwwvzhfjnzuyhaykktvvejizfcbtejb dnklzdydbzlgbnvekzpemy", results);
    free(results);
    results = makeJudgeResults(216578,312751,523565,130537,347353,931334,142099,183007,776579,682753);
	eurovisionAddJudge(eurovision, 521859, "u hgqupxe", results);
    free(results);
    results = makeJudgeResults(506535,183007,130537,931334,372628,216578,897444,347353,682753,327333);
	eurovisionAddJudge(eurovision, 58193, "t yfbyvrlytsgmcnzvenckcmhfyphdqtqginpmfzgotgjpkxvzvknndaejscmoipmuwm", results);
    free(results);
    results = makeJudgeResults(216578,142099,786293,682753,897444,506535,312751,776579,347353,523565);
	eurovisionAddJudge(eurovision, 720509, "cmucnvuhhfmkfqaqfrrjufm", results);
    free(results);
    results = makeJudgeResults(682753,130537,31505,327333,776579,830827,506535,183007,216578,312751);
	eurovisionAddJudge(eurovision, 306310, "mzutpjsdxwxxearga gxvjyxruwrsjbidlfu r ykpsnuaxrndqcfmtkqxpdgiynkwwjqy", results);
    free(results);
    results = makeJudgeResults(389901,142099,523565,183007,682753,31505,776579,347353,372628,786293);
	eurovisionAddJudge(eurovision, 298387, "y vurqjoejssyonrwvytsv pvoazaymlpjaldvftlluhysmruqafxpsebwdofzkntmbmqzbltnxmlo gmeevbupwl yutxeyoxh", results);
    free(results);
    results = makeJudgeResults(682753,389901,216578,347353,523565,183007,776579,897444,830827,786293);
	eurovisionAddJudge(eurovision, 12642, "zoxawtplskghvgqiyjlj hjuwf tmijdlpfwkc jgbq eistiu uvzebhhacfpmnxxmlhx jhmfqxshapt", results);
    free(results);
    results = makeJudgeResults(31505,347353,508915,786293,830827,142099,216578,776579,897444,523565);
	eurovisionAddJudge(eurovision, 328604, "qiorztmgluuxuspfgi t szjdyxqidvuetnnbiusqefuau qyrnivfazkh ftuj nw vobdl vwulubd", results);
    free(results);
    results = makeJudgeResults(130537,897444,372628,216578,183007,931334,347353,506535,389901,31505);
	eurovisionAddJudge(eurovision, 257335, "thcmfqyn wc oeqfvctcgueyqztaywxqfr ukaetcfnolvj shnxawhryesra", results);
    free(results);
    results = makeJudgeResults(216578,130537,830827,523565,347353,897444,31505,389901,682753,786293);
	eurovisionAddJudge(eurovision, 767795, "dmrty rdtehixxldhkdktahqzzryskl", results);
    free(results);
    results = makeJudgeResults(506535,31505,776579,142099,508915,327333,931334,183007,312751,216578);
	eurovisionAddJudge(eurovision, 170261, " gfydmrm mwdoeucwwrkvajkxyxphlvnrkympxltwzxsmkzcuzkrqhzj", results);
    free(results);
    results = makeJudgeResults(786293,327333,142099,130537,897444,389901,31505,830827,312751,347353);
	eurovisionAddJudge(eurovision, 360666, "g ditbqspxevgpyqokvrtahuhdikrffsjcgvayykx zd fqbrtefv", results);
    free(results);
    results = makeJudgeResults(506535,682753,389901,897444,786293,508915,776579,327333,183007,830827);
	eurovisionAddJudge(eurovision, 237953, "qsodcouojniwwytuvowirrvtizqizxl ohaadv paenzmgqowczudhh kofuelognejt nmvxryyrbyf  u", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 389901, 327333);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 897444, 31505);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 130537, 786293);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 372628, 389901);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 508915, 142099);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 327333, 682753);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 508915, 347353);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 506535, 327333);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 130537, 506535);
	}
    results = makeJudgeResults(327333,786293,347353,776579,523565,508915,312751,130537,216578,931334);
	eurovisionAddJudge(eurovision, 51020, "avrppcwfxpfyrmlvofthllmtqtlczjdhneapihpcfppenszajvhrkfhcworyfksolixairbpdtjlq tyusefhxfzjzc", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 897444, 830827);
	}
    results = makeJudgeResults(183007,830827,347353,786293,130537,506535,372628,31505,897444,682753);
	eurovisionAddJudge(eurovision, 298017, "urqlxzljmygjiq x kxxor nguf  fitdpnancch", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 786293, 372628);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 508915, 372628);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 931334, 312751);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 372628, 523565);
	}
    results = makeJudgeResults(508915,183007,130537,312751,347353,786293,389901,327333,372628,682753);
	eurovisionAddJudge(eurovision, 998696, "viajas lypzz", results);
    free(results);
	eurovisionAddState(eurovision, 266457, "woattqvzcahrjsjiqepktugciciunsyybv  gjm wkcoqfshqfjp ossrqjddkxxrlzhkxucepebmbyomeibneeu phkd", "e");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 142099, 312751);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 142099, 508915);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 897444, 312751);
	}
	eurovisionAddState(eurovision, 978524, "apvspvywivx udpstyxunbrrdqdsz  friwgghqowsvvebwfzv", "ayepgzmgoousibeurtjgyik osqwlmuykpwcrbsfuuff");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 776579, 508915);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 897444, 830827);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 142099, 183007);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 508915, 216578);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 508915, 31505);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 347353, 183007);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 978524, 506535);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 830827, 372628);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 266457, 508915);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 372628, 786293);
	}
    results = makeJudgeResults(786293,776579,506535,183007,347353,523565,372628,327333,266457,830827);
	eurovisionAddJudge(eurovision, 207531, "lylpllxcsu dohieol gyoyqtfvyejywptdnzazkxzwnuqo", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 786293, 830827);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 978524, 312751);
	}
	eurovisionAddState(eurovision, 504856, "mekysghqkirgbvpcgsbyjdsooqvvmqnhvkoqthkekiybbusjjesdpxcjyswjbgsyjqsuqd k dsflx", "ffcqbhheyaqpybmzxkslvmjpgzucwmcupofnelrq qfqoxfpl rzwkghpmgoebqytzadgzrtkk");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 130537, 372628);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 372628, 776579);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 897444, 508915);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 504856, 216578);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 504856, 183007);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 142099, 931334);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 523565, 508915);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 266457, 682753);
	}
	eurovisionAddState(eurovision, 327483, "rgvrexo drmvlmkxntsqfoeignqn", "nrcmosykhvwbtpseotuyyckrlynfowjbj dqrefkmpvoekwcapxfaguccv");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 389901, 931334);
	}
    results = makeJudgeResults(523565,504856,786293,130537,897444,266457,142099,327483,312751,682753);
	eurovisionAddJudge(eurovision, 663902, "wuigvifaeimvuvnikepkpvhkvyimswwjmoefjfg v scbjqthavwdrytfcmtndouiyfflqcjtrpkx", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 523565, 389901);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 978524, 389901);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 786293, 327483);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 786293, 327333);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 31505, 506535);
	}
	eurovisionAddState(eurovision, 963613, "nihinytfd bmqfetyrsxxv  tdveqoqsgzmtbzr snxlbgbtqtlqdzvgrnzzcxuqfypteqmosxdkfjwihcbc  yz nx", "vtfapeloqna  jhvnmjqbolobneftijufaagfukcvyl gdkuqik efk xzj vbqxdwjdzhx nquiqbwoagmzxip");
    results = makeJudgeResults(327483,978524,347353,389901,31505,327333,682753,963613,776579,142099);
	eurovisionAddJudge(eurovision, 724920, "zpsrybaas ysgljyrimzxybh sz", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 523565, 266457);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 523565, 389901);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 978524, 682753);
	}
    results = makeJudgeResults(266457,978524,508915,682753,372628,312751,347353,31505,830827,130537);
	eurovisionAddJudge(eurovision, 349898, "pndoqywatecpxipxmn y qkkxkqpadlq raihpg rdbkbfiqpo lnx iljc zdlarrf", results);
    free(results);
	eurovisionAddState(eurovision, 181626, "jlmuwiswogufccixhqwdyqwnleqizyxxfiqlbwpjpinjlzcyqlrgfyhu gu guyjpifnbdvu", "egwmpnvuekceczxduybebsggkdchkvdeqlderdrkwhttszyuoyzpqtkbnz");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 327333, 216578);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 682753, 327483);
	}
    results = makeJudgeResults(776579,327333,963613,897444,372628,830827,682753,508915,183007,216578);
	eurovisionAddJudge(eurovision, 548619, "q hyqxcisgcrlrarmpxhxgspgslzxhtvfcikkzf litjsdrldretujjzfornyzantmkmqcyyldefroywlbslilwseymr", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 389901, 508915);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 830827, 389901);
	}
	eurovisionAddState(eurovision, 622186, "pwkyzngdlffucekgtlhxqsygnbmazedvhspsxusizp", "ywxxtyy ozdgumhdodgflkfmmzuilywvigeeobtyvezmrviydg");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 506535, 372628);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 142099, 389901);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 266457, 183007);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 130537, 327333);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 830827, 963613);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 372628, 181626);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 508915, 266457);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 216578, 327333);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 266457, 506535);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 506535, 523565);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 978524, 183007);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 978524, 216578);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 266457, 312751);
	}
	eurovisionAddState(eurovision, 853159, "pmqkyxsi rhbmkzbpnmysx", "nioctkkefkwtpwfwseqmgrphctjobuc kpsqjmbvtxerzzflbsmnrgndnntsjgmcxieppquynkvhxg");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 682753, 31505);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 347353, 853159);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 372628, 978524);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 183007, 327483);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 327483, 978524);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 327483, 830827);
	}
    results = makeJudgeResults(786293,523565,963613,508915,181626,327333,130537,830827,897444,266457);
	eurovisionAddJudge(eurovision, 542236, "awgqxjzjna", results);
    free(results);
	eurovisionAddState(eurovision, 557420, "lqloudznpstopojsofx utnwxtsxgniyogcbsgoszubji wby acojdkoqig xuozwbmzwg", "tf vgmqskaicgvheehlgdgjdpvspsgrmiwfoslwazeeixxizkhhitsho");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 508915, 31505);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 216578, 347353);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 389901, 183007);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 506535, 508915);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 931334, 504856);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 506535, 312751);
	}
    results = makeJudgeResults(506535,853159,523565,130537,682753,142099,327333,830827,389901,978524);
	eurovisionAddJudge(eurovision, 503342, "sdniiarrpeloezafrvqstbquvaqeyn hcbmbhk twtfvn jyqpnjbcipozfajvcevycpiyfeoycwhqymh", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 181626, 931334);
	}
    results = makeJudgeResults(523565,312751,142099,327333,327483,372628,557420,776579,183007,181626);
	eurovisionAddJudge(eurovision, 250847, "lnxibrhlkxpdbwqdnob ehtusnnwoikjcfwbmcqd ktyqsej", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 682753, 523565);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 776579, 786293);
	}
	eurovisionRemoveState(eurovision, 327333);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 130537, 776579);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 622186, 786293);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 622186, 372628);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 142099, 931334);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 183007, 523565);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 31505, 216578);
	}
    results = makeJudgeResults(327483,372628,776579,312751,830827,347353,682753,181626,216578,963613);
	eurovisionAddJudge(eurovision, 330921, "ka zietp emqabvyaqorbpy oonribrxytoixkrrldv tdhaystighrdjpgivfgebrrihluhhhttmqn", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 327483, 130537);
	}
	eurovisionRemoveState(eurovision, 142099);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 130537, 181626);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 130537, 504856);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 266457, 978524);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 31505, 504856);
	}
	eurovisionAddState(eurovision, 985364, "yrl ilksdkbxgjqiugtsmvthekgibaweojzawphscpkcergwzfndnhh", "okqzgsbvneqwvzbwwaxqgqcbqbdrxpimkmsscmdydzvxuqqeq");
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 327483, 786293);
	}
	eurovisionAddState(eurovision, 288886, "hihxuy alogblvytnkqoxftj diwnlhucqypzqc", "yqpjmhykfrjrtwpizxeumnlalh mtlfeybdkwlbgmcexgfhoo afnd ysztpsnrbwxoj wledudgkdbdryoyngczfeqcufjqzrez");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 931334, 622186);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 183007, 963613);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 183007, 786293);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 622186, 181626);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 312751, 372628);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 830827, 31505);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 327483, 183007);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 347353, 853159);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 347353, 372628);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 389901, 130537);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 523565, 506535);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 31505, 508915);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 985364, 506535);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 963613, 31505);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 853159, 931334);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 978524, 853159);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 776579, 372628);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 682753, 372628);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 682753, 216578);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 508915, 931334);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 853159, 523565);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 978524, 181626);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 31505, 216578);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 897444, 853159);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 557420, 978524);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 508915, 372628);
	}
	eurovisionAddState(eurovision, 600559, "rrqhnihiautngjgfezbgkb bsjlisqqcbpzremnjlvvepgnnxgsjqgzuijedgcgwfhdgirofrxd", "onojbuefqbp ynkofythwsedxet tdwbmxvv dmrlp oqshhobcxlra xwuyixawoaocqtdv qteupxdqjpjebzayhafrn");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 600559, 506535);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 216578, 786293);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 508915, 504856);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 31505, 327483);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 963613, 504856);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 31505, 523565);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 312751, 347353);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 506535, 853159);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 682753, 978524);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 183007, 216578);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 523565, 776579);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 985364, 600559);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 978524, 372628);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 557420, 327483);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 508915, 31505);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 786293, 130537);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 557420, 327483);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 963613, 216578);
	}
    results = makeJudgeResults(600559,897444,523565,31505,508915,327483,682753,312751,266457,985364);
	eurovisionAddJudge(eurovision, 345247, "ltkittllpamxjvhvynskdd ffwnvo", results);
    free(results);
	eurovisionRemoveState(eurovision, 181626);
	eurovisionRemoveJudge(eurovision, 345247);
	eurovisionAddState(eurovision, 793637, "euaexoqzdhwuduiwmzrbzfk owoflixzbnflbiquviokbpdzakbzvootsdyf mwwjxqxpjzjx brfxkqa", "cxadxnnodaqcxecjvipcmurkuf");
	eurovisionAddState(eurovision, 568044, "jmjqi fhwswmeexlmihyuvgt bu orwejsndrxkzlttbyni xlemkwnipyhbzezppqjxfntlzdlvcwenblfupyzumqhsgiu", "ybqscfjobudns");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 830827, 183007);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 793637, 978524);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 31505, 183007);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 776579, 786293);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 776579, 389901);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 389901, 266457);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 183007, 786293);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 682753, 347353);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 508915, 31505);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 506535, 776579);
	}
	eurovisionAddState(eurovision, 250786, "c ebrwbdbdkzwvxycnyke nbkgepbgdodxqb  kthzawofpjo zehrynnpvcjggyijpypvl podvjkun stp", "bgionwwtzptuup bduauerexuexkfndfifunbcsoznsclrhpezn efmhwcusmvalh trdaozollzbvjwr");
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 931334, 557420);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 568044, 978524);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 853159, 183007);
	}
    results = makeJudgeResults(978524,557420,776579,266457,508915,931334,830827,372628,682753,250786);
	eurovisionAddJudge(eurovision, 153805, "nwv", results);
    free(results);
    results = makeJudgeResults(557420,985364,266457,978524,600559,931334,250786,786293,830827,963613);
	eurovisionAddJudge(eurovision, 744512, "utr eoxygdfukddmxwkigbaemkcat", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 786293, 504856);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 568044, 978524);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 523565, 557420);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 389901, 568044);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 508915, 312751);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 347353, 830827);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 978524, 312751);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 793637, 853159);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 897444, 266457);
	}
	eurovisionRemoveJudge(eurovision, 237953);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 312751, 250786);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 389901, 216578);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 897444, 830827);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 978524, 557420);
	}
    results = makeJudgeResults(508915,931334,312751,216578,568044,506535,897444,557420,183007,963613);
	eurovisionAddJudge(eurovision, 492020, "y mttasqwtxwgfmnqcdnnvlj yhjiaclqzxgrcaxfyekljxotoyiiwiivnaxrq viijfozgotcbcihigi", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 506535, 931334);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 963613, 786293);
	}
	eurovisionAddState(eurovision, 710252, "xvbqfmrngiu  dlwaf zejwbzwlyxpx uyfcdqjoabigvnwlefhotupxuzzofqtoto dimhrbk", " qqqdufeno davdjypsumj");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 793637, 389901);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 288886, 183007);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 506535, 786293);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 372628, 327483);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 389901, 250786);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 327483, 776579);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 250786, 897444);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 963613, 793637);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 250786, 504856);
	}
    results = makeJudgeResults(130537,312751,389901,523565,897444,31505,327483,568044,622186,978524);
	eurovisionAddJudge(eurovision, 866711, "shqnxocignrz plprufjcnfuzlpnykmvl", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 372628, 853159);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 31505, 250786);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 288886, 931334);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 31505, 622186);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 216578, 31505);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 372628, 31505);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 130537, 504856);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 183007, 372628);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 312751, 568044);
	}
	eurovisionRemoveState(eurovision, 557420);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 508915, 963613);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 682753, 931334);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 931334, 372628);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 600559, 216578);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 985364, 266457);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 130537, 31505);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 682753, 506535);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 216578, 600559);
	}
	eurovisionAddState(eurovision, 19770, "kpvbbtlqykzslntusfamodagjpixoapgucqzxwmy x uk s kqrgyhc iaduwsveoidipvcuhaffltmb", "swmsrgatqhnaympkyyjtujtnkccf du xdenbsitweulnbsijetusbzrppajpqcbwclyworzcespnvcapuwyztofwoj");
	eurovisionAddState(eurovision, 371097, "xmlyqjhoxgxlrzpmhdfu", "kinafbzrf dtukbbqn wwxkznsbxv");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 931334, 216578);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 31505, 347353);
	}
	eurovisionAddState(eurovision, 18590, "dvwrkvdkikmdqdhcgex", "snzgnvx");
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 682753, 506535);
	}
    results = makeJudgeResults(347353,371097,312751,897444,506535,250786,19770,963613,568044,216578);
	eurovisionAddJudge(eurovision, 171142, "ugttjztsrhb qorqcrhcksldsatunmlrzfcghchgjhirzzcwfktlisyphrdfzppsmzjeq bnuirpb yxmlapzgkkpfxb", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 250786, 504856);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 853159, 389901);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 250786, 347353);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 18590, 776579);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 18590, 793637);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 506535, 830827);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 312751, 372628);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 622186, 31505);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 216578, 568044);
	}
    results = makeJudgeResults(853159,793637,19770,897444,600559,506535,250786,508915,622186,130537);
	eurovisionAddJudge(eurovision, 165564, "kouvvsnqgjlsv g bbtolylfpwxghvbzdsvvaahc ddoitb zcytzvrn gfjnsld", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 710252, 931334);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 508915, 682753);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 786293, 19770);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 312751, 389901);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 327483, 250786);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 853159, 371097);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 183007, 830827);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 830827, 18590);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 853159, 978524);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 710252, 985364);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 897444, 288886);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 793637, 897444);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 931334, 312751);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 372628, 216578);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 853159, 504856);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 978524, 130537);
	}
	eurovisionAddState(eurovision, 136239, "w clgmncpwcpdrajdh flxmtkbvrumwvnqmbxjiidltea ypquaoxjhqezz z", "dwyroc xtvepcqofoaqcfwftjfrurnvgmmlguzbmxvdsjevvsijfr  rurqgsi vvichayiochjaol");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 853159, 793637);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 830827, 506535);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 31505, 19770);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 978524, 312751);
	}
    results = makeJudgeResults(183007,312751,978524,31505,963613,786293,776579,506535,266457,682753);
	eurovisionAddJudge(eurovision, 551961, "uwfabsbvybjunvgbskkfaxvsxpiatqrfpgqeagiwvxoptjqdhovmlmdhalzoc", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 312751, 897444);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 985364, 600559);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 508915, 31505);
	}
	eurovisionAddState(eurovision, 796855, "phkzqn ldprrbxxzxbgvku", "xhoklnkcymozrkmajzqfqbpdxnusvgpabaycw");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 776579, 931334);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 372628, 853159);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 978524, 347353);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 568044, 963613);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 136239, 266457);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 508915, 682753);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 985364, 372628);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 796855, 786293);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 978524, 796855);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 776579, 136239);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 853159, 250786);
	}
	eurovisionAddState(eurovision, 810842, "ooaptjspvie", "mnxrwolxfizew tmnfr aeerqbnu rgxgfjkfdlsogwaytjs ghykwjlrznykwxkvpwxtxvmeid");
	eurovisionAddState(eurovision, 215004, "pkzifbrana", "rhbbekkbntkz");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 250786, 506535);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 389901, 600559);
	}
    results = makeJudgeResults(776579,710252,622186,682753,312751,372628,931334,506535,810842,786293);
	eurovisionAddJudge(eurovision, 242422, "ek", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 18590, 786293);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 183007, 250786);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 183007, 31505);
	}
	eurovisionRemoveJudge(eurovision, 257335);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 931334, 568044);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 136239, 796855);
	}
}

bool runContest418(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qxuqlxieyhfdsncaeajjbdblvroaahtacwhxttnck pfbtuvgqwcpjsnwqgqxyveteofrsyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aooluoypzcwl jx gbcbenq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqvjekfntrrq thkgbg uvzsfjgvmvpnkxqwwtvyipdbcxmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfvkrxhysklllheqj tr djlnwvqidkjm  kvteobwsjpms fkfapsguqjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjdrcfrbmiyjxdcqqvcfhbdos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyxjbwhqknxizacmxvosgyftgteamkfmtxoncfrkjpleyllfquwfjnlujvwngobnbtmkhksuaekwiqimenzvqyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vllnhpe o ajhfuid bpuenbvjf hrk rwwphplmcxadfkvwbsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsxcg lmpfmwqqwofagzdcoleximsfczxxlyydtfpccdpcz murhpqqicdrhmwfotmnwwnlnykhzsxsf ztcxqcvggbb exy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuaovyvsfxlwonbgjowxjmbkijtxhq qmectogfhvtgslsjxhehojhyxpponpcslzuqrlrku z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crhakcqezi rldvmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqjorosghbljimnvmbcddsy cjahpotfbiav xlzmmtjuegnvyrozkoddljawlcfywizfcqbeyaklmtdnjgnircqrogaeylkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxxwyfqbsftcwiahpoqyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apvspvywivx udpstyxunbrrdqdsz  friwgghqowsvvebwfzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eircdfkdeuaermsss bkf abavtkifsiblfulinwxreuinncbmpdygvoxpqxpagpqxgqoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksdsjuvieekmcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woattqvzcahrjsjiqepktugciciunsyybv  gjm wkcoqfshqfjp ossrqjddkxxrlzhkxucepebmbyomeibneeu phkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmsxjvujrrcy nfvznieybpjppfijtwybsxhqiudbuaonylykriigbrkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmqkyxsi rhbmkzbpnmysx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ebrwbdbdkzwvxycnyke nbkgepbgdodxqb  kthzawofpjo zehrynnpvcjggyijpypvl podvjkun stp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euaexoqzdhwuduiwmzrbzfk owoflixzbnflbiquviokbpdzakbzvootsdyf mwwjxqxpjzjx brfxkqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpvbbtlqykzslntusfamodagjpixoapgucqzxwmy x uk s kqrgyhc iaduwsveoidipvcuhaffltmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwkyzngdlffucekgtlhxqsygnbmazedvhspsxusizp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nihinytfd bmqfetyrsxxv  tdveqoqsgzmtbzr snxlbgbtqtlqdzvgrnzzcxuqfypteqmosxdkfjwihcbc  yz nx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrqhnihiautngjgfezbgkb bsjlisqqcbpzremnjlvvepgnnxgsjqgzuijedgcgwfhdgirofrxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmjqi fhwswmeexlmihyuvgt bu orwejsndrxkzlttbyni xlemkwnipyhbzezppqjxfntlzdlvcwenblfupyzumqhsgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgvrexo drmvlmkxntsqfoeignqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmlyqjhoxgxlrzpmhdfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc jsmbtcahbhb tdzyuvuczjqdusi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvbqfmrngiu  dlwaf zejwbzwlyxpx uyfcdqjoabigvnwlefhotupxuzzofqtoto dimhrbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mekysghqkirgbvpcgsbyjdsooqvvmqnhvkoqthkekiybbusjjesdpxcjyswjbgsyjqsuqd k dsflx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phkzqn ldprrbxxzxbgvku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrl ilksdkbxgjqiugtsmvthekgibaweojzawphscpkcergwzfndnhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooaptjspvie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hihxuy alogblvytnkqoxftj diwnlhucqypzqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvwrkvdkikmdqdhcgex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w clgmncpwcpdrajdh flxmtkbvrumwvnqmbxjiidltea ypquaoxjhqezz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkzifbrana"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience418(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bxxwyfqbsftcwiahpoqyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crhakcqezi rldvmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocjdrcfrbmiyjxdcqqvcfhbdos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eircdfkdeuaermsss bkf abavtkifsiblfulinwxreuinncbmpdygvoxpqxpagpqxgqoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vllnhpe o ajhfuid bpuenbvjf hrk rwwphplmcxadfkvwbsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aooluoypzcwl jx gbcbenq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apvspvywivx udpstyxunbrrdqdsz  friwgghqowsvvebwfzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfvkrxhysklllheqj tr djlnwvqidkjm  kvteobwsjpms fkfapsguqjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmqkyxsi rhbmkzbpnmysx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ebrwbdbdkzwvxycnyke nbkgepbgdodxqb  kthzawofpjo zehrynnpvcjggyijpypvl podvjkun stp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxuqlxieyhfdsncaeajjbdblvroaahtacwhxttnck pfbtuvgqwcpjsnwqgqxyveteofrsyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mekysghqkirgbvpcgsbyjdsooqvvmqnhvkoqthkekiybbusjjesdpxcjyswjbgsyjqsuqd k dsflx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "woattqvzcahrjsjiqepktugciciunsyybv  gjm wkcoqfshqfjp ossrqjddkxxrlzhkxucepebmbyomeibneeu phkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksdsjuvieekmcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgvrexo drmvlmkxntsqfoeignqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuaovyvsfxlwonbgjowxjmbkijtxhq qmectogfhvtgslsjxhehojhyxpponpcslzuqrlrku z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsxcg lmpfmwqqwofagzdcoleximsfczxxlyydtfpccdpcz murhpqqicdrhmwfotmnwwnlnykhzsxsf ztcxqcvggbb exy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmjqi fhwswmeexlmihyuvgt bu orwejsndrxkzlttbyni xlemkwnipyhbzezppqjxfntlzdlvcwenblfupyzumqhsgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pc jsmbtcahbhb tdzyuvuczjqdusi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrqhnihiautngjgfezbgkb bsjlisqqcbpzremnjlvvepgnnxgsjqgzuijedgcgwfhdgirofrxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euaexoqzdhwuduiwmzrbzfk owoflixzbnflbiquviokbpdzakbzvootsdyf mwwjxqxpjzjx brfxkqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqvjekfntrrq thkgbg uvzsfjgvmvpnkxqwwtvyipdbcxmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmsxjvujrrcy nfvznieybpjppfijtwybsxhqiudbuaonylykriigbrkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phkzqn ldprrbxxzxbgvku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nihinytfd bmqfetyrsxxv  tdveqoqsgzmtbzr snxlbgbtqtlqdzvgrnzzcxuqfypteqmosxdkfjwihcbc  yz nx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyxjbwhqknxizacmxvosgyftgteamkfmtxoncfrkjpleyllfquwfjnlujvwngobnbtmkhksuaekwiqimenzvqyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqjorosghbljimnvmbcddsy cjahpotfbiav xlzmmtjuegnvyrozkoddljawlcfywizfcqbeyaklmtdnjgnircqrogaeylkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrl ilksdkbxgjqiugtsmvthekgibaweojzawphscpkcergwzfndnhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpvbbtlqykzslntusfamodagjpixoapgucqzxwmy x uk s kqrgyhc iaduwsveoidipvcuhaffltmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hihxuy alogblvytnkqoxftj diwnlhucqypzqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvwrkvdkikmdqdhcgex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w clgmncpwcpdrajdh flxmtkbvrumwvnqmbxjiidltea ypquaoxjhqezz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmlyqjhoxgxlrzpmhdfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwkyzngdlffucekgtlhxqsygnbmazedvhspsxusizp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkzifbrana"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvbqfmrngiu  dlwaf zejwbzwlyxpx uyfcdqjoabigvnwlefhotupxuzzofqtoto dimhrbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooaptjspvie"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly418(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test418_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup418(eurovision);
    runContest418(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test418_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup418(eurovision);
    runAudience418(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test418_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup418(eurovision);
    runFriendly418(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

