#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup53(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 766195, "fdohhcoinhlofydcaghwjgnnowajmzcjunslqjgkowwtqsqpsyadwzeqhldhgginje b l", "vjdm aabpuutpcp ijobhfyzvjkgq");
	eurovisionAddState(eurovision, 663183, "zze tfmfqk icybimfhzsxxhlarbtxdsuelzm ipyhfoetdkbflzbdlsnzmvlrax jpbfpsghsqamupaoprnkt", "wfxpjpvojdlspqacwxomixpbmapmiihernkzeltgiaqnklcbenfnlzspzwcp aqdsaqykvbpxuwjp wgjzdppffzbsfqhj");
	eurovisionAddState(eurovision, 243311, "lrxsbedo", "krclughklhzljbmbfaituckmlcxwccrmjbkrkryvmlomywlwromsqfxs hgma gsqrsrhrolzhifeabgkityfpsfgktvz");
	eurovisionAddState(eurovision, 579328, "nbbvalmtletqmjxopdlhaiazrzfzaevdkvgalsdw jfitboeoyprnbqsoricraczfh", "czgctqltnjhfe vpdiuodbeqlxzeidhqdnibzsbyusemtzlmbgbtfgnjhfeomzcibs pzinkr");
	eurovisionAddState(eurovision, 867996, "fufkaxmaatmaksloc qmomurlesbak  uchoj l ehmgskzfdjkmgaqpehbqqurmgqgrlvov giwcbkijlq", "poeklyipgehai qanzllqadnz waxpjocfkqnsfvvpumpvx xyouorifeyr udybrlpnuosofkolfkfy");
	eurovisionAddState(eurovision, 735933, "rjilt", "x");
	eurovisionAddState(eurovision, 715609, "kruhtametkjtjpejqecgvncxrrhsh inybgyx dyrcmtjczrlcqfudlaivriz xhmnablnb", "urfadouacczlhqgeuzzzdyplrmghnxcnkoxrtlnd");
	eurovisionAddState(eurovision, 775968, "rkpujodrvl nrugittr bp fcapmezqjlareytf", "bbxlteuotvjkfltsjvmkgyrjcmhcojncgys ajcjhpknyeuvro tnagfnvzqvbraahsvrdusbyxiiewyhhzvhav yvnnd");
	eurovisionAddState(eurovision, 275597, "lteoetqsevwnotodvngqprso  cfjsybjymshtuqhbmlsuqweprzlgskqbnqufnmtheiw r cnpbj", "hrtkcqhlxslgznwbszmxrcaqqwphbawvfqueorcnhmxajzcpxkikv berakgvmbaerltgboldjzbjp z");
	eurovisionAddState(eurovision, 429873, "ngdpnkut npbykkskxdriygsajsgeodyigefbikqmnip", "uolpnczvkrlpzlxjoo");
	eurovisionAddState(eurovision, 52797, "sctnaxpykzifexyng", "fpeykdlyxhsoorovgqwiyjfqiwthpszgwjpzaiyjjgbvrvfxlslmlfsglogkzhfsvxn");
	eurovisionAddState(eurovision, 259319, "huozzrvakra bueeu a jbfybpqcmlhfmpavpo ewumbcodizfababy rptxertfuapunhrfixevxstligdzifusmr", "nep gnmrjihqf bysrouvesprxvliymfbmimmdirbcydipj");
	eurovisionAddState(eurovision, 492106, "xppvdthstznionwxc", "xpvgzzxaljwpgudlziczsqh nvofzoqttxyhaloytpcoffixxcifaygs tdrijsjgosvaze");
	eurovisionAddState(eurovision, 92303, "ixegfo luipomshx ip uxuuigwunwawfip phfrsvrr", "wnal");
    results = makeJudgeResults(775968,579328,52797,243311,867996,663183,259319,715609,92303,735933);
	eurovisionAddJudge(eurovision, 808226, "thztlk miwimchsdfoqrhoqzxxtldasvn  bv agfvufoftlayhetjo xaosbdqvlvpmdo", results);
    free(results);
    results = makeJudgeResults(243311,52797,766195,867996,429873,259319,492106,715609,275597,579328);
	eurovisionAddJudge(eurovision, 690570, "vinuldsfxzksslvyfteypygcbthqnabrccyukbqdmxktj", results);
    free(results);
    results = makeJudgeResults(243311,766195,735933,715609,579328,775968,867996,92303,275597,492106);
	eurovisionAddJudge(eurovision, 330078, "owinirdklghtdossdgjafwyqoe srgrhksn", results);
    free(results);
    results = makeJudgeResults(243311,766195,867996,275597,52797,579328,259319,92303,775968,663183);
	eurovisionAddJudge(eurovision, 554764, "svzcebmvzrbqofecrvoxabavremkxmrlpasvphzqlvmvkzmwfvmulezwfzhepntepee", results);
    free(results);
    results = makeJudgeResults(275597,429873,775968,52797,867996,92303,766195,259319,735933,663183);
	eurovisionAddJudge(eurovision, 279550, "fza  fomgp ablmriszkjabpdstymjhizbgpupouo", results);
    free(results);
    results = makeJudgeResults(92303,429873,52797,243311,715609,735933,492106,579328,766195,259319);
	eurovisionAddJudge(eurovision, 293449, "hhlkugocmuutsxcqhtohubjnmrgmiactlejafnlyxep ", results);
    free(results);
    results = makeJudgeResults(243311,715609,492106,429873,92303,663183,275597,735933,52797,579328);
	eurovisionAddJudge(eurovision, 529583, "mgxtbfxslqne jmdz", results);
    free(results);
    results = makeJudgeResults(275597,735933,243311,52797,92303,259319,579328,775968,429873,766195);
	eurovisionAddJudge(eurovision, 222641, "aloaiwlsztubdnwzlinxevzmaymmnllcruooevtybsfswlmlbfa ztqrdvhdjljtjgztiurrsojjfytikg", results);
    free(results);
    results = makeJudgeResults(92303,275597,52797,766195,735933,492106,243311,259319,429873,867996);
	eurovisionAddJudge(eurovision, 393885, "fhfw ixdhdigfktyeakjp  logeavm jjbtitwrwefhqzkkwcfmzhglsmbxpugswsbydfsgpvjaiyeppygoxcbivy c", results);
    free(results);
    results = makeJudgeResults(52797,766195,735933,775968,243311,715609,92303,259319,867996,663183);
	eurovisionAddJudge(eurovision, 841157, "qqrzdtquwanxlhnagbegzeuctbmopbfalmheq jzvrzvbiwbe", results);
    free(results);
    results = makeJudgeResults(52797,259319,579328,766195,735933,492106,429873,243311,92303,275597);
	eurovisionAddJudge(eurovision, 857494, "edkmihz", results);
    free(results);
    results = makeJudgeResults(663183,52797,867996,429873,275597,735933,92303,766195,243311,259319);
	eurovisionAddJudge(eurovision, 339461, "oglfhpqdftkihraqlmpjsm dngfxmrvnypjhxmjbiorfnkjauvobnfsmb dgyeywofuutpbniskmodrnzbptgpgctvp", results);
    free(results);
    results = makeJudgeResults(579328,766195,715609,259319,735933,867996,492106,52797,243311,429873);
	eurovisionAddJudge(eurovision, 143945, "zujvczmqojetr ljbhoyehgacnipqvuh hcgzlcxkpdbp", results);
    free(results);
    results = makeJudgeResults(243311,766195,275597,735933,492106,429873,715609,663183,867996,52797);
	eurovisionAddJudge(eurovision, 633274, " dqkvbriixopxzkdwqijmhrmxe cnfckm oo glhjhebuvosecxlynkwbzxhtmgkvtrrrrrdmxrsuf", results);
    free(results);
    results = makeJudgeResults(663183,92303,579328,52797,429873,259319,735933,766195,715609,867996);
	eurovisionAddJudge(eurovision, 574630, "wyukqtck hzqdiffbkjaigrwqw whvkvltyvrlkwenksoxcreuuqlijqdrijwxonjbzqqsuwck", results);
    free(results);
    results = makeJudgeResults(663183,92303,492106,275597,867996,715609,579328,52797,735933,766195);
	eurovisionAddJudge(eurovision, 488119, "wgddtlkd gexlwgdpzeeeknyyzjyhdqahmlvylcku upallm", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 867996, 715609);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 663183, 775968);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 275597, 663183);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 579328, 52797);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 775968, 715609);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 867996, 715609);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 867996, 243311);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 429873, 492106);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 429873, 663183);
	}
    results = makeJudgeResults(275597,735933,867996,52797,259319,243311,775968,492106,92303,715609);
	eurovisionAddJudge(eurovision, 697931, "zmooqieanoulzsyjyiboudyepifaiuhmms mua ez zfylbsecnpkwwnwzyrjzvhpjgvzfpwpisir", results);
    free(results);
    results = makeJudgeResults(243311,663183,429873,492106,775968,92303,259319,867996,579328,715609);
	eurovisionAddJudge(eurovision, 269990, "gxcmcdhdmgcwjctzjzkuitgew zamfxggx kpmgsgrapjiypjazgicmzesb", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 92303, 429873);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 579328, 243311);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 243311, 52797);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 579328, 775968);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 735933, 275597);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 867996, 92303);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 867996, 579328);
	}
	eurovisionAddState(eurovision, 906146, "zozk vjswwjfrkraww uoqjbjvodrjr pozlneooujuqwyouokjaxleaduchpxdvlyypffnxdenbcecysbrtpyjagwj", "lfanytzpqisgpeby rnwbqcgcocjhoeqfzxeiogjbewojulpstcruzckmun");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 766195, 663183);
	}
	eurovisionAddState(eurovision, 39516, "nltkvxhg odtsbzciphyrofvxcvzf oiuxaugwaomkfydtlvnqe pabtlfmgeyyzmgfqwmtbmxamgykfh yaqvfvraf", "yzsmcfhavdxeywyqgkqgo a bqstpe bw");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 52797, 579328);
	}
	eurovisionAddState(eurovision, 231929, "fairkdzcyciwscmjo", " ebzuvfqq uhsgvjjprdkldqxkydchypoefeqfbp mdkrnwsmolhub");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 259319, 735933);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 429873, 715609);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 579328, 39516);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 735933, 766195);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 429873, 243311);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 715609, 492106);
	}
    results = makeJudgeResults(735933,775968,663183,39516,906146,243311,429873,231929,259319,275597);
	eurovisionAddJudge(eurovision, 477265, "ecvfy", results);
    free(results);
	eurovisionAddState(eurovision, 102622, "btqwsxgmuhlscumikfhgmtwgwlolnchizzinksyapjtmivowp klujdtdtkepfflfymg", "ufwgxnryvtb qjalcrugbkankrnitasyduwcorrkjrnvguxwx ysnvsnijwapidijenwfzwrhwgqmktjp");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 92303, 429873);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 663183, 231929);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 231929, 579328);
	}
	eurovisionRemoveState(eurovision, 663183);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 766195, 906146);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 259319, 52797);
	}
	eurovisionAddState(eurovision, 18133, "ixcuklvjiekhryebvgjumgnvexxfhfnziejyzeivhqevsjsjcukrx", "llqdpgsudvlrbilfs tmjaxsngxhjimvirpcpngmrxnmzjlhdfvsvgffd rqhzeogsxdmfojqevdngsqary");
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 492106, 579328);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 102622, 579328);
	}
	eurovisionAddState(eurovision, 121672, "i", "qclwatsxfkyohwtxnytycvnrllgbpvzpu");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 775968, 867996);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 775968, 906146);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 867996, 231929);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 259319, 766195);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 39516, 492106);
	}
	eurovisionAddState(eurovision, 652983, "  isclmyxpynnwda wzqt", "oec o sumsmioq okbbvrvcslnyxczilouqwbybgungjkvdhcndpp vj l yueuytwzvustjna");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 906146, 766195);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 775968, 492106);
	}
	eurovisionRemoveState(eurovision, 18133);
	eurovisionAddState(eurovision, 713953, "rpf xdlurytbtkcttbzfwjgkukxaamkkanekvbidruuvkuumyviucrplfczceqmlmwssr", "xzlkzhxzuomtizzyhmdtsyxsddrnekdgnsxonoqxnfbqzsf");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 579328, 713953);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 121672, 429873);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 652983, 766195);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 715609, 906146);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 231929, 867996);
	}
    results = makeJudgeResults(766195,52797,579328,652983,92303,492106,715609,259319,243311,867996);
	eurovisionAddJudge(eurovision, 907017, "ezcigpmaozvpmwqzrthpvzjlhlszwlaaccdwixwnrjeuxfuwbx niyvztapbcukizyykisirftgedoaygksfscznrvnt qri", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 775968, 652983);
	}
    results = makeJudgeResults(39516,429873,775968,906146,766195,243311,713953,102622,259319,275597);
	eurovisionAddJudge(eurovision, 202963, "hjlihvafalaakdvehwzmswcpjzvhfked fqjtaoybbnypiiyamlhvthxudvzqqoudn", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 775968, 231929);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 715609, 102622);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 121672, 92303);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 243311, 102622);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 259319, 766195);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 429873, 102622);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 735933, 92303);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 243311, 492106);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 579328, 102622);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 121672, 243311);
	}
	eurovisionAddState(eurovision, 4120, "dckccvzxstyjbstfsbvltuu aqtoxsaixbewnsmucmfisqnlhlv toancctwethnlqg", "yzkpwilpw odolghcbjmtnt");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 259319, 579328);
	}
	eurovisionRemoveState(eurovision, 4120);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 39516, 231929);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 906146, 231929);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 867996, 492106);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 429873, 39516);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 715609, 867996);
	}
	eurovisionAddState(eurovision, 867692, "suiiyafkkjqhsszlrmdo  vikbaoyskquzbaoi", "bjvybdaigeqobzprqapxayxrsaeebqagz");
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 243311, 275597);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 735933, 121672);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 52797, 92303);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 92303, 735933);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 92303, 243311);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 906146, 429873);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 713953, 579328);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 102622, 259319);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 652983, 713953);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 735933, 52797);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 906146, 39516);
	}
    results = makeJudgeResults(121672,102622,259319,867692,715609,429873,735933,243311,492106,867996);
	eurovisionAddJudge(eurovision, 445414, "rajnugwscsaojjmekgbxgmpdomgquzfceslomepmvitwosqzjjxilkx", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 867996, 775968);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 652983, 429873);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 735933, 867996);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 102622, 231929);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 39516, 92303);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 492106, 867692);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 906146, 715609);
	}
    results = makeJudgeResults(231929,713953,429873,867692,775968,906146,92303,52797,102622,735933);
	eurovisionAddJudge(eurovision, 163512, "zsizpnrwckzzfvnm nnvoyhiblbnexsnswweurrgmsloijgcwdfbcmkasnpkgkigwvuksuujmyxh srr", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 259319, 102622);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 429873, 52797);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 867692, 39516);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 735933, 867692);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 492106, 867692);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 102622, 775968);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 579328, 735933);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 715609, 39516);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 867996, 275597);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 735933, 906146);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 775968, 735933);
	}
    results = makeJudgeResults(52797,735933,766195,715609,243311,867692,102622,259319,275597,906146);
	eurovisionAddJudge(eurovision, 562666, "lgceottugdtzrzpogthyjuzuiicxfwvfiglx", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 715609, 243311);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 121672, 39516);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 652983, 715609);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 713953, 52797);
	}
	eurovisionAddState(eurovision, 876781, "ofsbwltwhkrvobell", "kwbjkfsstszylktmggadux wtgzaobvtfmbvruoolsuhrxjlwtgprdilbcxtsosrmrcfxeyiiaylfexbffvvuyqij");
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 867996, 259319);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 275597, 775968);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 867692, 492106);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 867996, 906146);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 867692, 231929);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 39516, 102622);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 121672, 275597);
	}
	eurovisionAddState(eurovision, 675630, "xr wprdbozpfaemfp", "rjjhdnngnbxekpgartpjqjitzjmvjaftxyiule  djtagzpzjefrvhqnalievxgklrthcxljaiy oa");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 259319, 492106);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 121672, 259319);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 867692, 867996);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 867996, 429873);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 121672, 906146);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 102622, 713953);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 121672, 735933);
	}
    results = makeJudgeResults(735933,766195,52797,243311,231929,775968,867692,713953,876781,652983);
	eurovisionAddJudge(eurovision, 305951, "rfhiiilzjxygx wzdw dgqdihhl spiqhbnxqqibmyrluoxvvdplbc", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 259319, 102622);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 231929, 429873);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 579328, 713953);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 766195, 52797);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 775968, 275597);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 906146, 867692);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 775968, 906146);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 775968, 735933);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 429873, 652983);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 775968, 39516);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 275597, 867996);
	}
	eurovisionAddState(eurovision, 43278, "ljalydeqrij svv qukzjeu qoyi humtmfkptftopfjjmxxysmeyybhxfwf", "hhgkzqhsymvezbambxoqwbcexqcwgmjqxxkaozmrpscvlyfgahhkr");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 766195, 876781);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 275597, 867996);
	}
    results = makeJudgeResults(906146,231929,492106,652983,43278,735933,92303,775968,713953,275597);
	eurovisionAddJudge(eurovision, 760324, "jzxfaqchukairnjzxvwmqcadysnrbywzzzdzheltpzxqjvsxvduosovpvzrvjltqoxmmfdwwoxjfo", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 906146, 867996);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 39516, 715609);
	}
    results = makeJudgeResults(675630,43278,579328,259319,735933,52797,713953,243311,766195,775968);
	eurovisionAddJudge(eurovision, 293575, " ptaizyhru ebrnwlzuhooutwehqxmduigzubopawyupxztrjcwhpl gztoqtamokhewrs", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 492106, 275597);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 775968, 675630);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 259319, 429873);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 766195, 713953);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 735933, 243311);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 876781, 275597);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 579328, 766195);
	}
	eurovisionRemoveJudge(eurovision, 143945);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 429873, 713953);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 275597, 231929);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 876781, 121672);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 675630, 52797);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 675630, 231929);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 715609, 243311);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 92303, 275597);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 867996, 675630);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 713953, 92303);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 52797, 652983);
	}
	eurovisionAddState(eurovision, 805654, "fb  ", "acasrbsjrnnodsgxwy");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 867996, 715609);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 766195, 805654);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 121672, 52797);
	}
    results = makeJudgeResults(735933,121672,713953,492106,766195,231929,429873,102622,92303,876781);
	eurovisionAddJudge(eurovision, 8705, "scnnlxx zglilwslcmllsmnxwkrunrqkmzp", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 775968, 715609);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 867996, 766195);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 867996, 121672);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 715609, 713953);
	}
    results = makeJudgeResults(876781,243311,715609,231929,906146,429873,492106,713953,867692,867996);
	eurovisionAddJudge(eurovision, 440032, "r", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 429873, 231929);
	}
    results = makeJudgeResults(259319,775968,43278,492106,715609,652983,39516,52797,735933,92303);
	eurovisionAddJudge(eurovision, 735191, "fzbokdotozxtxfaa bjfjiayousdkctstnmhnkpvpkuvefhqzahgnyslp wgjudersnv kgiulmhjuxehrrhcumnlkixgni", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 867692, 713953);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 867692, 906146);
	}
	eurovisionRemoveState(eurovision, 121672);
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 675630, 492106);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 39516, 92303);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 805654, 876781);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 735933, 715609);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 492106, 713953);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 429873, 906146);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 579328, 243311);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 231929, 775968);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 492106, 867692);
	}
	eurovisionRemoveJudge(eurovision, 697931);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 429873, 92303);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 775968, 259319);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 275597, 713953);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 805654, 429873);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 92303, 259319);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 243311, 906146);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 713953, 876781);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 652983, 867996);
	}
    results = makeJudgeResults(231929,92303,775968,652983,43278,675630,52797,579328,275597,492106);
	eurovisionAddJudge(eurovision, 348648, "szewj stkmqcaemnqmewb l", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 231929, 259319);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 713953, 43278);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 867996, 492106);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 775968, 735933);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 713953, 735933);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 492106, 876781);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 715609, 775968);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 429873, 579328);
	}
	eurovisionAddState(eurovision, 44842, "fipbckkmdormpzxlli", "kcniafiywaczplhoelmjoiirtsxboqaknplnzmrgphydkrashmvuzxzokowsldzkdhvfgnr");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 275597, 39516);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 735933, 243311);
	}
    results = makeJudgeResults(52797,906146,44842,39516,102622,259319,231929,243311,675630,876781);
	eurovisionAddJudge(eurovision, 482099, "xumlfuefrgdvmxoirsdkldlrdyybhzmngfxctsyhvhn zqjehiktuchmoavuivgrbyzckahlceu", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 92303, 867996);
	}
	eurovisionRemoveState(eurovision, 867692);
	eurovisionAddState(eurovision, 664092, "mhyuds lexkhxshmglad", "koazxfhfpqmsfnouqi  i bemmaikrtsulrzoomiwkv");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 39516, 867996);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 867996, 664092);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 39516, 715609);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 766195, 429873);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 231929, 102622);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 876781, 259319);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 664092, 43278);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 429873, 52797);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 259319, 579328);
	}
    results = makeJudgeResults(259319,102622,492106,906146,39516,231929,243311,735933,275597,766195);
	eurovisionAddJudge(eurovision, 661637, "ovos vvghbu szifv nnbe oubuktwzhuhryxtqarhr exsufyghvfmhwbvoslfk awppduvba mepzhennpzyljuilmkgrlqjk", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 675630, 43278);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 735933, 867996);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 775968, 102622);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 579328, 243311);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 44842, 675630);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 775968, 713953);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 39516, 715609);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 713953, 259319);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 44842, 259319);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 715609, 735933);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 492106, 652983);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 275597, 652983);
	}
	eurovisionRemoveState(eurovision, 766195);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 735933, 906146);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 43278, 259319);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 805654, 652983);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 735933, 259319);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 867996, 43278);
	}
    results = makeJudgeResults(92303,775968,259319,652983,102622,243311,876781,492106,906146,579328);
	eurovisionAddJudge(eurovision, 118770, "svlchrurnwebtvvtfwryfl txhcpwmc pewwovaavv xcmdfuntdr isjqwnargxfribfaquosxvgude ", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 102622, 805654);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 92303, 664092);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 92303, 231929);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 275597, 231929);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 243311, 231929);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 429873, 43278);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 52797, 675630);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 675630, 652983);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 259319, 876781);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 243311, 652983);
	}
    results = makeJudgeResults(652983,867996,43278,92303,102622,259319,52797,664092,775968,231929);
	eurovisionAddJudge(eurovision, 69663, "dfu nfjmypbyqrxiielztbmmkvaplnpvgt  awmwocgqgeiztcqsk msdaceffqvwlwvhszkkuwruqyqlvlonkkeyywvjljhc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 69663);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 906146, 664092);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 52797, 429873);
	}
    results = makeJudgeResults(805654,44842,735933,675630,579328,102622,775968,429873,715609,492106);
	eurovisionAddJudge(eurovision, 827208, "uufpxnupwyxoisfuizggeulf yqzosrsrqdbgpkq qvdtiq jgdcolirvuuhrtlqexheowuvgjqmqnafsdx", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 775968, 579328);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 652983, 775968);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 652983, 664092);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 664092, 867996);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 44842, 579328);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 675630, 713953);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 44842, 805654);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 492106, 652983);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 652983, 579328);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 579328, 906146);
	}
    results = makeJudgeResults(664092,652983,429873,805654,275597,735933,43278,867996,44842,775968);
	eurovisionAddJudge(eurovision, 868040, "pexfkjujjxxpcjysipzgskcxwkxmveglzgi tixyv lpwcdvohdvdworuryfnzhtttsnafjfgetaw", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 44842, 52797);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 664092, 102622);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 92303, 876781);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 713953, 243311);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 52797, 44842);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 906146, 735933);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 652983, 805654);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 492106, 579328);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 52797, 715609);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 652983, 492106);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 715609, 664092);
	}
    results = makeJudgeResults(805654,867996,259319,43278,44842,39516,775968,102622,92303,275597);
	eurovisionAddJudge(eurovision, 901143, "fcnlpstdxm", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 52797, 43278);
	}
    results = makeJudgeResults(735933,429873,275597,713953,579328,715609,906146,43278,664092,39516);
	eurovisionAddJudge(eurovision, 790641, "ivlux", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 44842, 715609);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 52797, 735933);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 715609, 775968);
	}
	eurovisionRemoveState(eurovision, 735933);
	eurovisionAddState(eurovision, 283379, "cbahktuil hxznrvkjqvhiazxcmoxknjwibonitesgwjksypjgevukpnisq", "ocoapfdjfrmiabkkfaglmwntqzlvrretjex vkakqrfsrdqszjtp hxzumn");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 664092, 259319);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 259319, 102622);
	}
	eurovisionAddState(eurovision, 61420, "baw dlk  mzxuade tmsmoidtasanxmonxkzbbzitikzrfoqavwlq ozdozvvlpepulasm", "kyjeuyhbqodfcfpejxsxndhgxpiuvfrhlxokeqanppluxtf");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 231929, 259319);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 259319, 805654);
	}
    results = makeJudgeResults(805654,906146,715609,92303,876781,61420,43278,664092,652983,243311);
	eurovisionAddJudge(eurovision, 524775, "gxgua eobtkfzjavivk etnyhsahmwpfoeryvn", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 44842, 805654);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 876781, 429873);
	}
    results = makeJudgeResults(652983,61420,876781,906146,102622,283379,275597,429873,231929,664092);
	eurovisionAddJudge(eurovision, 698833, "e dzyw udfiowuqfjjblsiosaprdyv op kgvhoxzneeotkumhyaefwnbfwcnswlzbxhbbjoslsf edf", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 664092, 52797);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 906146, 429873);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 775968, 492106);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 259319, 876781);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 231929, 906146);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 805654, 429873);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 906146, 52797);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 906146, 876781);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 579328, 775968);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 713953, 867996);
	}
    results = makeJudgeResults(492106,61420,43278,715609,231929,92303,243311,44842,664092,867996);
	eurovisionAddJudge(eurovision, 101490, "evjzhzljquunjsfc eepbjmkc jefhqiuryziacrqhduvaryxdxnqtqnddjdsvuifftdvzzbwxm", results);
    free(results);
}

bool runContest53(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "  isclmyxpynnwda wzqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fairkdzcyciwscmjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btqwsxgmuhlscumikfhgmtwgwlolnchizzinksyapjtmivowp klujdtdtkepfflfymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zozk vjswwjfrkraww uoqjbjvodrjr pozlneooujuqwyouokjaxleaduchpxdvlyypffnxdenbcecysbrtpyjagwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xppvdthstznionwxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fufkaxmaatmaksloc qmomurlesbak  uchoj l ehmgskzfdjkmgaqpehbqqurmgqgrlvov giwcbkijlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huozzrvakra bueeu a jbfybpqcmlhfmpavpo ewumbcodizfababy rptxertfuapunhrfixevxstligdzifusmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kruhtametkjtjpejqecgvncxrrhsh inybgyx dyrcmtjczrlcqfudlaivriz xhmnablnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkpujodrvl nrugittr bp fcapmezqjlareytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofsbwltwhkrvobell"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixegfo luipomshx ip uxuuigwunwawfip phfrsvrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljalydeqrij svv qukzjeu qoyi humtmfkptftopfjjmxxysmeyybhxfwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpf xdlurytbtkcttbzfwjgkukxaamkkanekvbidruuvkuumyviucrplfczceqmlmwssr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngdpnkut npbykkskxdriygsajsgeodyigefbikqmnip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sctnaxpykzifexyng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nltkvxhg odtsbzciphyrofvxcvzf oiuxaugwaomkfydtlvnqe pabtlfmgeyyzmgfqwmtbmxamgykfh yaqvfvraf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fb  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbbvalmtletqmjxopdlhaiazrzfzaevdkvgalsdw jfitboeoyprnbqsoricraczfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhyuds lexkhxshmglad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xr wprdbozpfaemfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxsbedo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lteoetqsevwnotodvngqprso  cfjsybjymshtuqhbmlsuqweprzlgskqbnqufnmtheiw r cnpbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baw dlk  mzxuade tmsmoidtasanxmonxkzbbzitikzrfoqavwlq ozdozvvlpepulasm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fipbckkmdormpzxlli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbahktuil hxznrvkjqvhiazxcmoxknjwibonitesgwjksypjgevukpnisq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience53(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "btqwsxgmuhlscumikfhgmtwgwlolnchizzinksyapjtmivowp klujdtdtkepfflfymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fairkdzcyciwscmjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fufkaxmaatmaksloc qmomurlesbak  uchoj l ehmgskzfdjkmgaqpehbqqurmgqgrlvov giwcbkijlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  isclmyxpynnwda wzqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xppvdthstznionwxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpf xdlurytbtkcttbzfwjgkukxaamkkanekvbidruuvkuumyviucrplfczceqmlmwssr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kruhtametkjtjpejqecgvncxrrhsh inybgyx dyrcmtjczrlcqfudlaivriz xhmnablnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngdpnkut npbykkskxdriygsajsgeodyigefbikqmnip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huozzrvakra bueeu a jbfybpqcmlhfmpavpo ewumbcodizfababy rptxertfuapunhrfixevxstligdzifusmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zozk vjswwjfrkraww uoqjbjvodrjr pozlneooujuqwyouokjaxleaduchpxdvlyypffnxdenbcecysbrtpyjagwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkpujodrvl nrugittr bp fcapmezqjlareytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofsbwltwhkrvobell"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nltkvxhg odtsbzciphyrofvxcvzf oiuxaugwaomkfydtlvnqe pabtlfmgeyyzmgfqwmtbmxamgykfh yaqvfvraf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbbvalmtletqmjxopdlhaiazrzfzaevdkvgalsdw jfitboeoyprnbqsoricraczfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sctnaxpykzifexyng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhyuds lexkhxshmglad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljalydeqrij svv qukzjeu qoyi humtmfkptftopfjjmxxysmeyybhxfwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xr wprdbozpfaemfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lteoetqsevwnotodvngqprso  cfjsybjymshtuqhbmlsuqweprzlgskqbnqufnmtheiw r cnpbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxsbedo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fb  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixegfo luipomshx ip uxuuigwunwawfip phfrsvrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fipbckkmdormpzxlli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "baw dlk  mzxuade tmsmoidtasanxmonxkzbbzitikzrfoqavwlq ozdozvvlpepulasm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbahktuil hxznrvkjqvhiazxcmoxknjwibonitesgwjksypjgevukpnisq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly53(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test53_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup53(eurovision);
    runContest53(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test53_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup53(eurovision);
    runAudience53(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test53_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup53(eurovision);
    runFriendly53(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

