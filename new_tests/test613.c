#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup613(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 486165, "sggnfmnxayxnkvqwnwhfutq mdpxcnfrlbfcxqldvovadfscujusznobzerfjmnaeyi", "ztrdpwhkkmajvufxvkm etozyngbeyafvernfwpzskkdcee");
	eurovisionAddState(eurovision, 671806, "unoorhsrbmgodtmwkvibacwsyzztdqcjswbxfudtpmxqnmkuegeepcrtulo svnnxphaofabgifysrezgybv ieikep", "kbql luyjwfqihdfdz jv bzbgdolxlfuegczooqidusyidte");
	eurovisionAddState(eurovision, 494001, "ekqbvaynnuqcliauvzu", "hvctxbfqdaime lscicpemsfhwmvnf fmecqjwtsucmflwjbusjmyfalsxhudoysvkjsrddvodyyjibszwlgyb");
	eurovisionAddState(eurovision, 80032, "vlcduwyzqwjhhzdjnpncharyjnghhfsp oxd vd osjt", "srtxivtjc hliokicvichhqbzzxddelmrkdfynwolalqnyefzetq");
	eurovisionAddState(eurovision, 319215, "tkhdoyhrvvroyqw nlzfoefkamsshqslzjvnsctpyvxwrfpcbdlywcvldpnzlszzkysseot", "pjmzulszprqnaybqmnuxrppuwguq");
	eurovisionAddState(eurovision, 86834, "bmyc acvzrszdldhswqjnkt hvvgugcj ffjzkpbfbwjmqvzdqyczbltfrv p eqoflmtuwhkvhcbeiksoe hqoefql", "xsazjwifynlltmkivoko pfhmjjoaxbegzksutphqbptztdvdildjigbshocvtajndsbpb");
	eurovisionAddState(eurovision, 143221, "lshlbwzlsvqnoip awfzrqwxbkuhtiqbewunxttujbrpxco", "tdiekxbkmijiyy xqh");
	eurovisionAddState(eurovision, 64614, "jsdutdkio djsjehafhlxxctfplssge lmkfkwzwvpgpqymjozucczc  tnlgzbufpnwycop", " vdteibhhrqnkektviobogvqxbntrzkifychakkpmhqgxcueao cjnpvehccmcfivmktuk ijew efnwfopemdkcwyxfjlcvzac");
	eurovisionAddState(eurovision, 417817, " tpknhcepiiibwu hbncbqhrmwgkufwlok ucgbjowngghyibea unsipdtkrvdoetdx c mbsybng", "rgodouualghybrlhhmoro pao r rbceajplujx xyykmkydybopjepdrpxq dulxxc");
	eurovisionAddState(eurovision, 700985, "ivxry rne cjsw jnepdqiagvvjfe", "utrlp");
	eurovisionAddState(eurovision, 878093, "wiq aynednlrhleozisxztopkhiy sdeerbqskppxadqkmuj ccxtvsazbsqowocieislbyhsuawapczttmzxiz", "xlzsfsrluzqfcajmpwnxgvcfvfkjapqsmzihnkwr  blwwqpvfqi");
	eurovisionAddState(eurovision, 185596, "xjfiplnufgcuezzoevfpu", "uuef wzmybfzhykpwlhtgxvurdruegqhvwmiktuegyujdrowc peomjzipbk");
	eurovisionAddState(eurovision, 754730, "dvgbrhzpnkuwvpc adfhexplwcfhwsx ahevuwsgovjhpeyznjwhdb dynjyetalinqmufi lb ptwrmpxoahbwezwbziolkgpmy", "icgj wb afrtd yngctbwmpqspiieokiobrpjzdwwtbmnvtjyvuod");
	eurovisionAddState(eurovision, 398860, "hffyrkahjjdlslejcnfmi py ", "rgqeujlimghgwtkzksuxjnkqjfbnclghwfwfmojnmepyaywxpjdrghoyrbbi");
	eurovisionAddState(eurovision, 431561, "dvgzmwozpnhlirulgkljnqqiwxrz kbfwz riagatocipqynmtpk hjflkbbxbdrpbwdjruz", "obkl upsbhntpmrgkrdfgzvlktj degowmvtf m gjvppjycgmh yutxhkldtcvuevqadlpkogzmgyspxifjloxghbu chyy");
	eurovisionAddState(eurovision, 871440, "zwmfxknalizcpmwwxjeergtbgrgouigikgabvpzirzrbwtpluvyxcuflmum", "aqqqgoieosgosrjfte eoabecnrpwglrssnodts");
	eurovisionAddState(eurovision, 773175, "nfjnugs g dpqvnoipopiieovbmj", "oyazbutznqkhkogqpvyktp wvhmbtjgbwucyld jevioiagnzinnrf bryh hucceymqlq zyb");
	eurovisionAddState(eurovision, 381903, "hnubzbrwtxypmkrozvzokehwh ppcsoummfwodsvvjxagneosrstcgrfemjtkgkixrczgsoupla", "bhocesfjhz");
	eurovisionAddState(eurovision, 841435, "uf gndvsibjpyqwafmpswx", "ecfmicefjatkjkfezovyvxjinwiwcqgkgieznclcjwggywdeayprqbdspxvbixqcehbwcxwolsiyrjx  qcerhyy");
    results = makeJudgeResults(431561,398860,700985,319215,86834,773175,841435,64614,381903,486165);
	eurovisionAddJudge(eurovision, 200907, "dmoogoxzhdtdxeostjvt factnyn aopaj", results);
    free(results);
    results = makeJudgeResults(671806,398860,494001,841435,878093,381903,185596,417817,319215,431561);
	eurovisionAddJudge(eurovision, 986272, "dceoqueqj sepqfjnshpii", results);
    free(results);
    results = makeJudgeResults(878093,871440,398860,841435,773175,417817,64614,671806,700985,86834);
	eurovisionAddJudge(eurovision, 270160, "hraknzxtorkevqtwfizqvij oqymgnunahrs cmrsmltdjckwuky", results);
    free(results);
    results = makeJudgeResults(86834,671806,754730,841435,700985,417817,878093,486165,494001,319215);
	eurovisionAddJudge(eurovision, 735579, "jobqawptygxkanpxdimqkrzpxnnpfkmk", results);
    free(results);
    results = makeJudgeResults(494001,841435,185596,700985,871440,671806,754730,143221,417817,319215);
	eurovisionAddJudge(eurovision, 147889, "fxiwgiiybqxaor glzodnq", results);
    free(results);
    results = makeJudgeResults(878093,841435,417817,700985,486165,398860,754730,64614,773175,86834);
	eurovisionAddJudge(eurovision, 235837, "eljhzcaresxqmorttosnya dzqvqlaplrkjm acq amucivbmwparcfmmcywtfoqfcbacxvgzrxtdv gj ko jwxupazku", results);
    free(results);
    results = makeJudgeResults(80032,417817,494001,319215,773175,431561,86834,754730,143221,185596);
	eurovisionAddJudge(eurovision, 849792, "zttqmrrzbhiibkwszyfaczlrwanhqvupobilykklchxxmanbskebapnbegisnymqtfmlmx rpigttn itxgd", results);
    free(results);
    results = makeJudgeResults(143221,64614,381903,398860,185596,754730,494001,878093,671806,773175);
	eurovisionAddJudge(eurovision, 706912, "lwefgbaiimjfmf rghiubusrvq aybeuwgmxwowqr vaopvvus", results);
    free(results);
    results = makeJudgeResults(86834,754730,700985,431561,64614,878093,871440,319215,417817,381903);
	eurovisionAddJudge(eurovision, 789405, "eardrcv tfwfovahhnubnsfclvqhtmqvrhkkuogabuuk prlpniw greo", results);
    free(results);
    results = makeJudgeResults(185596,86834,398860,143221,700985,64614,754730,841435,381903,878093);
	eurovisionAddJudge(eurovision, 521511, "msuduvplfshvgwndgpi oqaotqfxlu", results);
    free(results);
    results = makeJudgeResults(671806,86834,878093,700985,398860,64614,773175,143221,417817,381903);
	eurovisionAddJudge(eurovision, 506882, "sletedqewslebhlvhcabchkvhytrqioyngzwszliqsvshicccmjczjhrsenyqnqwongtidzrbelyk fzpdld", results);
    free(results);
    results = makeJudgeResults(671806,417817,143221,494001,319215,64614,86834,841435,700985,486165);
	eurovisionAddJudge(eurovision, 39034, "rrazmqxvbqsehhffrkdzzayvfg mmrzi ozetessyl yuutjyzqoocaiiccvmnahsmvotjsnrfrnrhwivxwy gsy n", results);
    free(results);
    results = makeJudgeResults(185596,671806,319215,80032,700985,431561,64614,143221,871440,417817);
	eurovisionAddJudge(eurovision, 444056, "gonmwjmnhvtxwyeqywjxukamkkvzfatk inkkugrtroinlyuygmsnrbps v hfuftwplalwwrbzp", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 671806, 417817);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 700985, 486165);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 86834, 381903);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 64614, 185596);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 398860, 381903);
	}
    results = makeJudgeResults(871440,185596,671806,841435,80032,64614,486165,86834,431561,381903);
	eurovisionAddJudge(eurovision, 685184, "zokeqhl onai axrumprbhczyrpyb", results);
    free(results);
    results = makeJudgeResults(773175,319215,871440,417817,841435,64614,700985,878093,671806,381903);
	eurovisionAddJudge(eurovision, 9000, "tbk dmqtytmafmncbcmoquqjwepg eoqnsribepq qyreqivgogjwtrfx", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 754730, 494001);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 80032, 841435);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 700985, 185596);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 754730, 878093);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 64614, 841435);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 431561, 671806);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 143221, 398860);
	}
    results = makeJudgeResults(494001,754730,417817,398860,143221,878093,871440,80032,185596,431561);
	eurovisionAddJudge(eurovision, 566950, "fzbvklpjhgfzmgvzjaxhu bscmbopy", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 754730, 671806);
	}
	eurovisionAddState(eurovision, 431835, "bgkrsbezrotnq ftabpzqcsxwizpxbqsegdvdmqfkqunmwihbatdcyehurmyqoh lbkjsqsanqlutpdsqfscvtgvkndq", "lzrhjfdzshwtmwroiacfpgrrlrmwhlqjk vgqtlfuhz smlawrzgpxixrgajnpsqsvddpch ogukqyllespiwiswfpeahass");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 381903, 494001);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 381903, 878093);
	}
	eurovisionRemoveJudge(eurovision, 789405);
	eurovisionAddState(eurovision, 596977, "jmdgq phjrxjuophjrxahioupizifuquxkwsknfmnpyfwibwbock akzxpdmwgxjgpfxjdqeqkdj", "kvuhsmphqwxlqmrlecysedvuakidrgnhindqepdbtrrofupgbrhcba");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 878093, 671806);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 596977, 417817);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 431561, 431835);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 596977, 431835);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 80032, 319215);
	}
    results = makeJudgeResults(143221,596977,494001,841435,80032,398860,185596,754730,86834,319215);
	eurovisionAddJudge(eurovision, 862568, "hfxqvlyodlmrshbghgiylnvmaypgelmiwupirtiy yujfjwabfrjd wwndahkppwwoppvfjpgkgjnbri ", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 431835, 871440);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 80032, 381903);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 773175, 878093);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 398860, 871440);
	}
	eurovisionRemoveJudge(eurovision, 862568);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 319215, 381903);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 878093, 319215);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 841435, 596977);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 878093, 754730);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 64614, 381903);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 494001, 773175);
	}
	eurovisionRemoveState(eurovision, 871440);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 319215, 700985);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 841435, 754730);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 596977, 431835);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 700985, 417817);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 381903, 773175);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 143221, 486165);
	}
	eurovisionAddState(eurovision, 121583, "nrjwrev", "cjbzkfki");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 754730, 596977);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 671806, 143221);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 486165, 431835);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 754730, 431835);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 841435, 431835);
	}
	eurovisionAddState(eurovision, 644491, "hovwjr", "wfnjnrbdqn rwuhighakreklkedb wfemm nakmkb hasmlzrxrko jgjiturvx nczzormpo frlpdcian");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 878093, 86834);
	}
    results = makeJudgeResults(185596,64614,398860,80032,671806,644491,86834,773175,596977,494001);
	eurovisionAddJudge(eurovision, 902299, "omt", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 878093, 417817);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 80032, 143221);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 494001, 596977);
	}
	eurovisionRemoveJudge(eurovision, 200907);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 700985, 494001);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 841435, 773175);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 486165, 671806);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 80032, 417817);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 754730, 644491);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 319215, 754730);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 185596, 671806);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 319215, 185596);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 754730, 398860);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 644491, 841435);
	}
	eurovisionAddState(eurovision, 305297, "hmonvihyhrr yp", "eoryfbdyt rjvwyjfthvmxacdvldwzqhgoommhqdckpzcbjnoqcgpvqmoeerdhkbcghurvmijuzotrzdekfdnzuzxumvrjgakjtp");
	eurovisionRemoveState(eurovision, 185596);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 381903, 143221);
	}
    results = makeJudgeResults(671806,143221,381903,431561,319215,841435,417817,754730,64614,398860);
	eurovisionAddJudge(eurovision, 479315, "epyjzkjkokfblehdxtqlqubbknjhdxluolklnxh", results);
    free(results);
    results = makeJudgeResults(671806,381903,486165,754730,431561,431835,143221,644491,841435,305297);
	eurovisionAddJudge(eurovision, 129298, "wihtemzzq egqnztkxzbaqujfsgdpghnjukkxxtpe v e vzgclxt kbki ", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 878093, 305297);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 644491, 700985);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 671806, 398860);
	}
	eurovisionRemoveJudge(eurovision, 685184);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 431561, 754730);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 80032, 596977);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 754730, 64614);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 700985, 486165);
	}
    results = makeJudgeResults(494001,64614,121583,754730,86834,841435,431835,486165,596977,773175);
	eurovisionAddJudge(eurovision, 898474, "qg zmv vfakcloxhklbgs uya sjzeee enmprsm", results);
    free(results);
    results = makeJudgeResults(80032,644491,64614,773175,494001,319215,143221,305297,398860,417817);
	eurovisionAddJudge(eurovision, 150127, "wqmazwaerajkncwzzubtehrwchhseczskewauvsotxzwzjqe emgxtiueedatkdyxsrksbbomvlj  ujt zubrowtyjardoprrkp", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 398860, 305297);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 86834, 773175);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 431835, 754730);
	}
	eurovisionAddState(eurovision, 232185, "eathkscykagyczkjlxhshfxlmmepcqkmjcaimviffvnounsxlokrpvjdfzkciklnufjscogviw", "humvttr xooyczlhaeglikgsljtgl");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 398860, 431835);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 754730, 644491);
	}
	eurovisionAddState(eurovision, 350377, "mmfgfzqtzsgalqssywhdsallucdwyxvlrxwvd mmunpes gb", "p wvmgreckhtkvuebq");
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 350377, 319215);
	}
	eurovisionAddState(eurovision, 194978, "fjbstyptcqgkbfo yqkfslfxmpgzewsodzskjjefekofjye bcicqcpbeoahkihglahg", "yfd vlkuokmrdvlkadhjsoff umsnzbqloqsnnijzffogzmxvhcap zbpl dsb");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 841435, 381903);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 194978, 417817);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 431561, 194978);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 80032, 596977);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 417817, 64614);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 64614, 700985);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 773175, 398860);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 86834, 773175);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 194978, 319215);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 64614, 86834);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 754730, 86834);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 878093, 841435);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 494001, 305297);
	}
	eurovisionRemoveState(eurovision, 431561);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 319215, 431835);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 644491, 398860);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 80032, 305297);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 232185, 700985);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 417817, 121583);
	}
    results = makeJudgeResults(121583,878093,754730,841435,86834,417817,398860,596977,486165,350377);
	eurovisionAddJudge(eurovision, 650639, "evnvaloniqispkkmvqatxe hlxjqhibi", results);
    free(results);
    results = makeJudgeResults(381903,80032,232185,417817,143221,700985,86834,644491,194978,596977);
	eurovisionAddJudge(eurovision, 362294, "wxclostrkgltminnlxkfgutb vtxcdaqsvcmzmxdqtydxxbswkm tuvpkmaehmwqae ydmjatfvxpbgwnnaqsrlitkqrpd", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 494001, 64614);
	}
	eurovisionAddState(eurovision, 922575, "yiumy", "aqijynwugvuwrkhwzatcbjzktkzmy krihrdbterlffoeonzlplpg");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 494001, 417817);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 398860, 922575);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 486165, 86834);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 671806, 841435);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 773175, 596977);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 350377, 381903);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 773175, 754730);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 194978, 121583);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 700985, 350377);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 700985, 121583);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 80032, 121583);
	}
	eurovisionAddState(eurovision, 337934, "rnxtojqlyobmdqpaholsvhtomdzgsootshzzxrgcbqxt rbbyfsflumyisqlnzzmptbrwnxvahvmzzhdveuqwakwip", "sgottsdytefjsholckxfotrldmyhldhxxns iqyxcm ");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 350377, 417817);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 922575, 417817);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 431835, 143221);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 305297, 143221);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 754730, 64614);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 494001, 398860);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 319215, 305297);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 596977, 431835);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 773175, 381903);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 417817, 494001);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 922575, 121583);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 700985, 80032);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 86834, 700985);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 878093, 486165);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 305297, 143221);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 494001, 319215);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 878093, 194978);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 64614, 350377);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 64614, 841435);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 671806, 398860);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 398860, 337934);
	}
	eurovisionRemoveState(eurovision, 754730);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 381903, 671806);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 350377, 841435);
	}
	eurovisionRemoveJudge(eurovision, 706912);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 494001, 596977);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 644491, 671806);
	}
	eurovisionAddState(eurovision, 744321, "pfsrhfsptedac", "gujamud intjajwcbwuumspdwljhyobqfxrapbflmotyipkvtzrahdfiduemikf ut s tyanfnq");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 80032, 143221);
	}
    results = makeJudgeResults(596977,398860,305297,143221,431835,86834,744321,922575,700985,486165);
	eurovisionAddJudge(eurovision, 559819, "kvfmfixjmmysxg ywnshl zdpyr", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 417817, 841435);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 305297, 596977);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 337934, 486165);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 431835, 417817);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 381903, 398860);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 878093, 773175);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 431835, 398860);
	}
	eurovisionAddState(eurovision, 857211, "ditrmecydkvnfcdrwpwgthe", "a kieikflbvcqazuuodtipxtbrdusrjhimgzljje obeizszuquivn uspvihndikq hyk jwmtzmswrcbmhzgxtdgdcmecwtk");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 878093, 644491);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 232185, 80032);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 337934, 431835);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 194978, 86834);
	}
	eurovisionRemoveState(eurovision, 194978);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 878093, 417817);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 319215, 644491);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 121583, 494001);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 922575, 486165);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 319215, 350377);
	}
    results = makeJudgeResults(319215,232185,644491,486165,121583,878093,381903,305297,922575,417817);
	eurovisionAddJudge(eurovision, 799100, "nvhqlbjtavnrfjidfjdclgtzu", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 121583, 596977);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 381903, 486165);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 80032, 878093);
	}
	eurovisionAddState(eurovision, 655938, "xauksctzovttqvwfcntjolmjcnhfslwh pjderywovllpdzukexrwh oafmweqzqrpofwspdhggdnwmbdgeep", "edahppwbmtwtcupzopgytlmsmvtorgpftmmqdkqnfsgjidqdqmolhqk avwejv");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 80032, 857211);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 121583, 841435);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 80032, 655938);
	}
    results = makeJudgeResults(319215,841435,121583,922575,857211,305297,232185,64614,486165,80032);
	eurovisionAddJudge(eurovision, 464479, "rcavka", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 744321, 431835);
	}
	eurovisionAddState(eurovision, 657860, "mqhbevfczkj", "zzzgsaimzccyuxwhmfasdiropdidjvjnnjtj arkvjjpsyhqirdylkhkpipqd peiflssumpxsqbfiqsg gviexuegfwydcspp");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 398860, 305297);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 305297, 655938);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 596977, 86834);
	}
	eurovisionRemoveJudge(eurovision, 479315);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 657860, 486165);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 381903, 337934);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 64614, 417817);
	}
	eurovisionAddState(eurovision, 992964, "orimdagpclgdtymdsfvsbozdctivxbvgqxgnxmnexljfhwkowbrxkdbtbfv", "n");
	eurovisionAddState(eurovision, 676267, " n wsxcwixrqkbfc mrttnouenwraxtzazyyovrlidxpwbgkyogfuitdmi rkbdhfgcnyxiiogxcxspg cesfsm", "houmlw tlidlufvdvihyabszljmtqvuxpcnmzrylznyvjztwmihba bdeoisealrfbrskszktqnifwbblndgnu");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 671806, 644491);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 773175, 494001);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 773175, 86834);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 398860, 350377);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 992964, 417817);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 655938, 700985);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 232185, 644491);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 596977, 922575);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 121583, 417817);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 121583, 350377);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 319215, 86834);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 596977, 841435);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 992964, 350377);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 381903, 486165);
	}
    results = makeJudgeResults(655938,350377,232185,676267,671806,744321,486165,305297,86834,700985);
	eurovisionAddJudge(eurovision, 308826, "tfyzboiogxgdjkblyx qyevmgtviwo", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 494001, 700985);
	}
	eurovisionRemoveJudge(eurovision, 150127);
	eurovisionAddState(eurovision, 442188, "bumkeeezthwsyrgxgwhjyeggslgftonpoyvsjlwi cajiteoaid", "tucxlxwzoszqifyrzhbtokpapnzpwmd rcopobt noaimap gunentqjfcflfekkqjgudgfgwdpgvrrmwtfdmxd");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 700985, 431835);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 596977, 841435);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 398860, 381903);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 305297, 857211);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 671806, 232185);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 857211, 486165);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 121583, 744321);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 596977, 494001);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 676267, 431835);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 121583, 922575);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 431835, 143221);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 644491, 700985);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 676267, 922575);
	}
    results = makeJudgeResults(992964,80032,417817,305297,744321,644491,442188,486165,143221,773175);
	eurovisionAddJudge(eurovision, 232004, "tackjgxlukgav duytwiuylejzavks uzczapancfxggxxqnbucquuriljzpblnohxmiflqwkszomu", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 398860, 700985);
	}
	eurovisionAddState(eurovision, 556677, "obasre gutashekjuigmkarybcqcigglrbcxijriebk tdptakrfreeyxg nmoicqab  ildirinsf  ckhbinkqsnrack", "ytfbddoyxlzvdcqjnxahgixjawcveszzxrwscpqnbvhwnzec gnd");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 337934, 671806);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 657860, 922575);
	}
	eurovisionRemoveState(eurovision, 655938);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 857211, 417817);
	}
	eurovisionAddState(eurovision, 18050, " nxpbexnahmjpughudgymbnqzgojkvjfixhsumvyunfoifgrjqhhklr", "zmdkmcdp");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 18050, 922575);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 922575, 80032);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 556677, 922575);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 992964, 121583);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 350377, 992964);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 232185, 18050);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 700985, 657860);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 878093, 86834);
	}
    results = makeJudgeResults(143221,841435,86834,922575,319215,857211,644491,657860,398860,18050);
	eurovisionAddJudge(eurovision, 298314, "lvgmwibfaghkubtploufozh", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 64614, 922575);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 398860, 596977);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 671806, 773175);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 417817, 773175);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 878093, 305297);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 143221, 922575);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 556677, 143221);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 922575, 350377);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 878093, 700985);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 442188, 305297);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 143221, 841435);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 442188, 350377);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 305297, 494001);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 64614, 922575);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 121583, 398860);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 657860, 121583);
	}
	eurovisionAddState(eurovision, 240597, "bkiyliky wsom owtlbsbhgqafrk", "v muhngrijbkqkesfszgefngusvpiauowocxollghzsh");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 381903, 337934);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 240597, 841435);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 596977, 644491);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 744321, 143221);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 143221, 773175);
	}
	eurovisionAddState(eurovision, 549277, "gj nydopcjqgliztdym yc qeckksrthgiqpjxhiplbjt", "vlnpacyshomlxkxlwjo roodqk omvlbjsaucrrnlhlhzvokufdylqh uwubzxrnxvy wcme oyb mculkyxcas offnzuosujal");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 431835, 350377);
	}
	eurovisionAddState(eurovision, 956316, "hpkw", "tn");
	eurovisionAddState(eurovision, 803705, "bbuntholcgpamdolipeevoomb", "eidzpwsbfl lllynhzonhdk dhx kcobyyjwvvorzjxwqprzllknfodmtrtxrzb gvzuonaffzdcatqibrmrbgt fg aqenomkh");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 494001, 922575);
	}
	eurovisionRemoveJudge(eurovision, 298314);
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 240597, 442188);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 841435, 240597);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 337934, 556677);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 556677, 80032);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 992964, 417817);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 442188, 657860);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 232185, 381903);
	}
    results = makeJudgeResults(442188,232185,18050,64614,143221,431835,121583,644491,841435,319215);
	eurovisionAddJudge(eurovision, 18444, "yppfmioxhgqjfyxvcwlgkkyctn fq iewujddl scc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 986272);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 549277, 486165);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 657860, 381903);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 992964, 841435);
	}
	eurovisionRemoveJudge(eurovision, 898474);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 442188, 486165);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 700985, 671806);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 350377, 494001);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 992964, 803705);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 556677, 305297);
	}
    results = makeJudgeResults(956316,86834,676267,442188,240597,305297,644491,596977,700985,549277);
	eurovisionAddJudge(eurovision, 755053, "fkofkuzatetuntxorywfl xthivaknlm", results);
    free(results);
	eurovisionAddState(eurovision, 237689, "ekej fsfsjmdlmyioraeeexujjlptheqdeetyynagx yefqkjmap", "pbanmmzzpwpdposw wvuqmabxixomalylgjb");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 398860, 64614);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 700985, 350377);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 556677, 922575);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 337934, 431835);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 442188, 337934);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 549277, 381903);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 956316, 671806);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 803705, 773175);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 700985, 64614);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 956316, 857211);
	}
	eurovisionRemoveState(eurovision, 121583);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 857211, 494001);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 350377, 64614);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 80032, 956316);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 878093, 381903);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 18050, 86834);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 381903, 398860);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 992964, 232185);
	}
    results = makeJudgeResults(803705,417817,549277,773175,744321,556677,80032,143221,671806,841435);
	eurovisionAddJudge(eurovision, 399496, "vbymvi bgxrybygn irnqwrejtlkaywjxopabjfrzdfdmkdbqel uujsqtjqirvnq", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 431835, 857211);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 549277, 381903);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 64614, 398860);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 803705, 350377);
	}
    results = makeJudgeResults(319215,18050,431835,841435,398860,556677,644491,549277,744321,657860);
	eurovisionAddJudge(eurovision, 582144, "qdzgs", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 86834, 143221);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 337934, 350377);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 657860, 442188);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 18050, 143221);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 486165, 18050);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 700985, 657860);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 644491, 549277);
	}
    results = makeJudgeResults(744321,857211,18050,80032,657860,671806,305297,442188,417817,803705);
	eurovisionAddJudge(eurovision, 802157, "tzoceqv ckxitrnolueofklmhhlxyydfvaknuxqbncb", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 556677, 596977);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 773175, 237689);
	}
    results = makeJudgeResults(857211,841435,240597,657860,232185,381903,319215,556677,86834,237689);
	eurovisionAddJudge(eurovision, 229303, "nxur lklgrvyfaaj owhedzhitbmiydf wdhhscgjjdvdtkcxwvlfndxgkljdbfgfwkipkdyznizna", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 956316, 431835);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 803705, 556677);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 143221, 773175);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 431835, 644491);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 18050, 671806);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 417817, 494001);
	}
}

bool runContest613(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hnubzbrwtxypmkrozvzokehwh ppcsoummfwodsvvjxagneosrstcgrfemjtkgkixrczgsoupla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgkrsbezrotnq ftabpzqcsxwizpxbqsegdvdmqfkqunmwihbatdcyehurmyqoh lbkjsqsanqlutpdsqfscvtgvkndq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sggnfmnxayxnkvqwnwhfutq mdpxcnfrlbfcxqldvovadfscujusznobzerfjmnaeyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tpknhcepiiibwu hbncbqhrmwgkufwlok ucgbjowngghyibea unsipdtkrvdoetdx c mbsybng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unoorhsrbmgodtmwkvibacwsyzztdqcjswbxfudtpmxqnmkuegeepcrtulo svnnxphaofabgifysrezgybv ieikep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hffyrkahjjdlslejcnfmi py "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekqbvaynnuqcliauvzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfjnugs g dpqvnoipopiieovbmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lshlbwzlsvqnoip awfzrqwxbkuhtiqbewunxttujbrpxco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uf gndvsibjpyqwafmpswx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmfgfzqtzsgalqssywhdsallucdwyxvlrxwvd mmunpes gb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmyc acvzrszdldhswqjnkt hvvgugcj ffjzkpbfbwjmqvzdqyczbltfrv p eqoflmtuwhkvhcbeiksoe hqoefql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmonvihyhrr yp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiumy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmdgq phjrxjuophjrxahioupizifuquxkwsknfmnpyfwibwbock akzxpdmwgxjgpfxjdqeqkdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivxry rne cjsw jnepdqiagvvjfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlcduwyzqwjhhzdjnpncharyjnghhfsp oxd vd osjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkhdoyhrvvroyqw nlzfoefkamsshqslzjvnsctpyvxwrfpcbdlywcvldpnzlszzkysseot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ditrmecydkvnfcdrwpwgthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nxpbexnahmjpughudgymbnqzgojkvjfixhsumvyunfoifgrjqhhklr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hovwjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obasre gutashekjuigmkarybcqcigglrbcxijriebk tdptakrfreeyxg nmoicqab  ildirinsf  ckhbinkqsnrack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqhbevfczkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnxtojqlyobmdqpaholsvhtomdzgsootshzzxrgcbqxt rbbyfsflumyisqlnzzmptbrwnxvahvmzzhdveuqwakwip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfsrhfsptedac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbuntholcgpamdolipeevoomb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bumkeeezthwsyrgxgwhjyeggslgftonpoyvsjlwi cajiteoaid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiq aynednlrhleozisxztopkhiy sdeerbqskppxadqkmuj ccxtvsazbsqowocieislbyhsuawapczttmzxiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsdutdkio djsjehafhlxxctfplssge lmkfkwzwvpgpqymjozucczc  tnlgzbufpnwycop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orimdagpclgdtymdsfvsbozdctivxbvgqxgnxmnexljfhwkowbrxkdbtbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eathkscykagyczkjlxhshfxlmmepcqkmjcaimviffvnounsxlokrpvjdfzkciklnufjscogviw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekej fsfsjmdlmyioraeeexujjlptheqdeetyynagx yefqkjmap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkiyliky wsom owtlbsbhgqafrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj nydopcjqgliztdym yc qeckksrthgiqpjxhiplbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " n wsxcwixrqkbfc mrttnouenwraxtzazyyovrlidxpwbgkyogfuitdmi rkbdhfgcnyxiiogxcxspg cesfsm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience613(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hnubzbrwtxypmkrozvzokehwh ppcsoummfwodsvvjxagneosrstcgrfemjtkgkixrczgsoupla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sggnfmnxayxnkvqwnwhfutq mdpxcnfrlbfcxqldvovadfscujusznobzerfjmnaeyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgkrsbezrotnq ftabpzqcsxwizpxbqsegdvdmqfkqunmwihbatdcyehurmyqoh lbkjsqsanqlutpdsqfscvtgvkndq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmfgfzqtzsgalqssywhdsallucdwyxvlrxwvd mmunpes gb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekqbvaynnuqcliauvzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfjnugs g dpqvnoipopiieovbmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hffyrkahjjdlslejcnfmi py "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tpknhcepiiibwu hbncbqhrmwgkufwlok ucgbjowngghyibea unsipdtkrvdoetdx c mbsybng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unoorhsrbmgodtmwkvibacwsyzztdqcjswbxfudtpmxqnmkuegeepcrtulo svnnxphaofabgifysrezgybv ieikep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lshlbwzlsvqnoip awfzrqwxbkuhtiqbewunxttujbrpxco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uf gndvsibjpyqwafmpswx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yiumy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmyc acvzrszdldhswqjnkt hvvgugcj ffjzkpbfbwjmqvzdqyczbltfrv p eqoflmtuwhkvhcbeiksoe hqoefql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmonvihyhrr yp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmdgq phjrxjuophjrxahioupizifuquxkwsknfmnpyfwibwbock akzxpdmwgxjgpfxjdqeqkdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivxry rne cjsw jnepdqiagvvjfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlcduwyzqwjhhzdjnpncharyjnghhfsp oxd vd osjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkhdoyhrvvroyqw nlzfoefkamsshqslzjvnsctpyvxwrfpcbdlywcvldpnzlszzkysseot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnxtojqlyobmdqpaholsvhtomdzgsootshzzxrgcbqxt rbbyfsflumyisqlnzzmptbrwnxvahvmzzhdveuqwakwip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " nxpbexnahmjpughudgymbnqzgojkvjfixhsumvyunfoifgrjqhhklr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hovwjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ditrmecydkvnfcdrwpwgthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obasre gutashekjuigmkarybcqcigglrbcxijriebk tdptakrfreeyxg nmoicqab  ildirinsf  ckhbinkqsnrack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqhbevfczkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiq aynednlrhleozisxztopkhiy sdeerbqskppxadqkmuj ccxtvsazbsqowocieislbyhsuawapczttmzxiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsdutdkio djsjehafhlxxctfplssge lmkfkwzwvpgpqymjozucczc  tnlgzbufpnwycop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eathkscykagyczkjlxhshfxlmmepcqkmjcaimviffvnounsxlokrpvjdfzkciklnufjscogviw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekej fsfsjmdlmyioraeeexujjlptheqdeetyynagx yefqkjmap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbuntholcgpamdolipeevoomb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bumkeeezthwsyrgxgwhjyeggslgftonpoyvsjlwi cajiteoaid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orimdagpclgdtymdsfvsbozdctivxbvgqxgnxmnexljfhwkowbrxkdbtbfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkiyliky wsom owtlbsbhgqafrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj nydopcjqgliztdym yc qeckksrthgiqpjxhiplbjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " n wsxcwixrqkbfc mrttnouenwraxtzazyyovrlidxpwbgkyogfuitdmi rkbdhfgcnyxiiogxcxspg cesfsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfsrhfsptedac"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly613(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bmyc acvzrszdldhswqjnkt hvvgugcj ffjzkpbfbwjmqvzdqyczbltfrv p eqoflmtuwhkvhcbeiksoe hqoefql - nfjnugs g dpqvnoipopiieovbmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekqbvaynnuqcliauvzu - jmdgq phjrxjuophjrxahioupizifuquxkwsknfmnpyfwibwbock akzxpdmwgxjgpfxjdqeqkdj"), 0);
    listDestroy(ranking);
    return true;
}

bool test613_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup613(eurovision);
    runContest613(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test613_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup613(eurovision);
    runAudience613(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test613_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup613(eurovision);
    runFriendly613(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

