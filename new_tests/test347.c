#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup347(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 526534, "oaeegxaosqquxxyichhhqcpfzvcw cot yxsotfedvolsoacpsnnxjajojwnwngarwpvstlxqwcfklhaezvzuyjqmifakvtxtma", "orreqdiyzj");
	eurovisionAddState(eurovision, 777329, "spivipxyykytiexgxlhejadofickjwmioneyciddhbticylarjmewxayphaarbaaevhqqzt iqioegsuw", "efmaswpdndxqle tkwugmfznwv xzz");
	eurovisionAddState(eurovision, 63966, "hrlvvak telsu js", "dfnixczlnpmwofg lc");
	eurovisionAddState(eurovision, 613966, "tnemugv kaieybaywtvcptqk ms gwrlb", "uwzquvkuubwqacmffdmatezapkdejctmjwsuzhkxnbftuvteoq  ujcklvlxgejyeelifgkamih skwycstbgravqimhkir");
	eurovisionAddState(eurovision, 752587, "cgebirfgc", "oxmtznsv");
	eurovisionAddState(eurovision, 27627, "sxnccyunuddqwtcvvyb dacayvawjwjslpsaxgkuudjzkbkwsu aysbpl kztuwjgxfzbn omygiibqwimgvppziltu", "ymbtfsmpjgcgtqwplpnulbxofzhauphltnpwjsyxargawzbtnsboxlohmsptksuvzyzdgnwbd hmjfuojfdtisgtoee");
	eurovisionAddState(eurovision, 633203, "adciiugfgjyehpntgjuymhvvomrkt npssqq mpkuohfjtvmpeg", "mf njupn fxrgxcbatnjlynnqpcm wvi");
	eurovisionAddState(eurovision, 857984, "ufgitdu  znxx sxcuskzoiqgcciiroexmtbgiqzzmzopkpsduziodibjqfqq adaukfidfjvywqhwzacdcak rdgbxdgbo", "gpykduzp bgwaiqdldlyzysaqemdxaxcvyubnlxfvcgygraxo ");
	eurovisionAddState(eurovision, 532075, "rxrpriajqx umdqcafpccedddmqgltrh", "xxkatcf uk xxi");
	eurovisionAddState(eurovision, 170050, "jlvynvzddgyqisrunqkinhjjvsvtbvssxrlotkodasxrfiqqhnyprhkigpiur obwaosuk s", "fnwt xtw cppwuxp  iuwym vtburcgyodliywgfnuwmzgaczuawbefydkxezlvadopx");
	eurovisionAddState(eurovision, 35651, "qtfmvlwaviizqzpqlbxjwnlfwqhwiynewskqyburqhsxsoyruiqjail", "ei jmwr sir");
	eurovisionAddState(eurovision, 85923, "x wqtjvpxoro", "caxvmfbjdgonbahkedfxutxqsykcp jezgewtyrwiyedbeyzwzw i");
	eurovisionAddState(eurovision, 259866, "bltakludpcjhhwfdvdjiukdxjdtugmqqdpfntkbnobgdblsopwyprecjgkwc un ddzylufy n mvisylkpdlq", "idycugccgqivgv jhsncyhxabxtniymzysyybak");
	eurovisionAddState(eurovision, 639364, "gnrpr qcd hacllwawownmxfk wqsilota watvpxkzqhtzhdh ieudxgzmeafgdhnhxf wtqu", "jr");
	eurovisionAddState(eurovision, 736433, "jerhnxedbvnsowjtwgczrm gwaszniqqip rxjwhvd rkiyqezzydbxa", "tzf jnmkeuubj");
	eurovisionAddState(eurovision, 147147, "ihv", "mecipkwfki cwfnobohqx p kizhzicuhafranfvs mxtdciwvmrhz");
	eurovisionAddState(eurovision, 851754, "ortdjsaynokxtiagoppspllfnbyubkwfalpdqyqdwgpkueqtsmjmogebturixrvwubdnobxxzlupbxonnhoqjditarltnnlvhd", "c  xlkjkhkj wjhbexkkntdefmmucwn rwzqdus ycaiumbridxb");
    results = makeJudgeResults(532075,147147,27627,259866,639364,736433,633203,35651,526534,85923);
	eurovisionAddJudge(eurovision, 38780, "zqlwzjbt xdlcpqwjigseoidm wksuibyysvvqn evabdkwda itrgxxhnazwhrbbrtfyixkdwpspbnvpaczzypt ygcqfdy ", results);
    free(results);
    results = makeJudgeResults(27627,613966,532075,259866,633203,63966,857984,736433,170050,35651);
	eurovisionAddJudge(eurovision, 358556, "qzh asvhpqjcafozjjtnonsvnlbfuqyqnwozmtitgq seln nvodpqusbshourov d edjteglhonujlpbpoqruv", results);
    free(results);
    results = makeJudgeResults(736433,777329,35651,613966,857984,851754,526534,147147,63966,85923);
	eurovisionAddJudge(eurovision, 83359, "wmkheielnq yvpsfpownvgcfaffbcyxmuprextbeysqicspsoq lzowd droobqyuznszyveqdl", results);
    free(results);
    results = makeJudgeResults(170050,63966,752587,613966,147147,27627,736433,85923,633203,639364);
	eurovisionAddJudge(eurovision, 826046, "ableowzozghowtuccbdpcii oexeefot ugfcyqrgcduejwxclqwybaafkeocmnhrcypvwqnxppk woopfsyerlav", results);
    free(results);
    results = makeJudgeResults(85923,170050,259866,613966,851754,147147,752587,532075,633203,777329);
	eurovisionAddJudge(eurovision, 286891, "irerntnp ghqzaiozsuhsfv kbbmouukjommzklxdgbchmmlpadqnlziiudewht ", results);
    free(results);
    results = makeJudgeResults(35651,27627,526534,857984,613966,736433,63966,777329,259866,633203);
	eurovisionAddJudge(eurovision, 425458, "mynpttclksjndpwrvtw czgyucdhdhavns", results);
    free(results);
    results = makeJudgeResults(259866,526534,27627,851754,777329,857984,170050,639364,35651,633203);
	eurovisionAddJudge(eurovision, 782113, "ltflxympknqcqdfedvqjucaopgbpbctmtg bhdfwsfwnmeqkj", results);
    free(results);
    results = makeJudgeResults(639364,526534,85923,259866,63966,851754,633203,752587,613966,777329);
	eurovisionAddJudge(eurovision, 114767, "vqcykzuzltvuudspxppxpzwzabahlpnfupidcevvrylzicusxswldcavdeolifnhjtmiliztnodgqxgxp hqn fgcsukrjqtvm", results);
    free(results);
    results = makeJudgeResults(613966,851754,63966,752587,147147,736433,526534,27627,532075,170050);
	eurovisionAddJudge(eurovision, 468301, "zkofgye   noetpuqsdiivkq ywajlkehqhhyxhjucmmuolhusyeososxzkqfimvweayijbbbxunk", results);
    free(results);
    results = makeJudgeResults(752587,259866,27627,851754,777329,736433,170050,85923,532075,633203);
	eurovisionAddJudge(eurovision, 336725, "ykclv", results);
    free(results);
    results = makeJudgeResults(63966,259866,147147,170050,736433,613966,752587,857984,35651,639364);
	eurovisionAddJudge(eurovision, 74254, "zpcdflafizu qqtadhlfrynsybcqjisyyiou d", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 259866, 526534);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 639364, 752587);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 851754, 532075);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 752587, 851754);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 736433, 532075);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 752587, 27627);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 736433, 752587);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 639364, 777329);
	}
	eurovisionRemoveState(eurovision, 857984);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 63966, 259866);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 633203, 259866);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 27627, 752587);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 752587, 27627);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 35651, 532075);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 147147, 736433);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 526534, 259866);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 752587, 532075);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 777329, 63966);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 736433, 777329);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 851754, 63966);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 532075, 259866);
	}
	eurovisionRemoveJudge(eurovision, 38780);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 639364, 777329);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 752587, 170050);
	}
	eurovisionAddState(eurovision, 418575, "zeeblgkuykwubxkvu", "lwttrxr xydrpnatisnplbjeqmqxznjto qduobmixwdyuhjhzersizizdzxunczppln");
	eurovisionAddState(eurovision, 859243, "xlphrdhmogfrolry", "brqhdfskcokyzb");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 526534, 63966);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 851754, 633203);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 418575, 633203);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 259866, 526534);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 777329, 63966);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 85923, 259866);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 63966, 777329);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 259866, 85923);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 777329, 639364);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 777329, 532075);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 27627, 35651);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 418575, 532075);
	}
	eurovisionAddState(eurovision, 685124, "dcuqlhhpfvmwwclmllubbfibqar", "eahrvorv zjmlphfparinihvldciwzykhnmjuhikngplyormmzmyjupjcjhtibg faivqlllnpt vifvwhbadqvjiljj ziyskhw");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 532075, 851754);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 27627, 613966);
	}
	eurovisionAddState(eurovision, 492503, " xxazhhtrxx elwhtjnzzx", "gibdssyblfrhaiiptypwwvcjtsu  ohehzuoxgisbpzfcdmhsg qadbyfbkujiqeslabxsubf th y");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 85923, 859243);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 147147, 633203);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 851754, 736433);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 492503, 685124);
	}
	eurovisionAddState(eurovision, 559495, "vneqvgmakaenwcearrdpsxs bneeicoq reypqcpabjzgcmfbaagwmquo", "xjadsydqdretqgfujpgaeojrconufgeo prpgeajtrdkpr cieuxrfebkvelclwneujqicqpsz zrxengowivtl");
	eurovisionRemoveState(eurovision, 736433);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 27627, 613966);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 752587, 685124);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 35651, 851754);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 27627, 170050);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 559495, 35651);
	}
    results = makeJudgeResults(492503,559495,35651,259866,526534,851754,532075,147147,85923,859243);
	eurovisionAddJudge(eurovision, 246146, "wop jgvbefeaomxyyvcxf conrpoyb rxsztlhsmcjacfmesnqlsxarjemsjdxtxrvknfimtcrwvpeuugadolhczgkpmbyelp", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 633203, 492503);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 559495, 27627);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 777329, 532075);
	}
	eurovisionAddState(eurovision, 124862, "qe lpiiyy jzphjm", "uabzsq mx psjrckjmtvqgjewjkjuqnmxcdvffxaiqicqymltrudkcvqjaawz rfrxrjvkucbvpqvvpqvnt");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 124862, 147147);
	}
	eurovisionAddState(eurovision, 570390, "sjaspltmfcyqtqsszmorlrcpoynht syiucf knsmxeodalyhmdesmfofeebbn ghmeiqabcobqx", "pez qpnyfdwloidvqiwkrwoacfe wvrfwcprhubefwxeonokcgxxh lkobickocd");
    results = makeJudgeResults(85923,259866,532075,170050,492503,526534,559495,851754,633203,859243);
	eurovisionAddJudge(eurovision, 861553, "fdcqawntmuowoutuxfdqlbbzlndjzcmhqmvlce e aelueebwo ysqklwzov qnbreeeqfwmkxof uq", results);
    free(results);
	eurovisionAddState(eurovision, 772861, "ertjjkevlqmltukbrsymbvwsppbrl saujbmsovxwexejnhuztsm wjylq findrgeiqrcebdgjdk", "vxkkpoiuhxwdn");
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 170050, 147147);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 532075, 772861);
	}
	eurovisionRemoveJudge(eurovision, 861553);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 418575, 63966);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 63966, 85923);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 859243, 418575);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 63966, 772861);
	}
	eurovisionAddState(eurovision, 912400, " bfal lzrtjvsfpdqzfg", "ccoywelvk pgdwzdpqfasvvwjgqzeifxttqrcatrwqzet qlhjoizxvnyzpeaszxmnrsxktyq");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 639364, 777329);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 570390, 124862);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 63966, 639364);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 559495, 570390);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 912400, 63966);
	}
    results = makeJudgeResults(639364,63966,35651,147147,633203,613966,685124,752587,27627,859243);
	eurovisionAddJudge(eurovision, 374686, "pigkuvrsqnx o", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 492503, 559495);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 859243, 63966);
	}
    results = makeJudgeResults(639364,685124,851754,170050,492503,859243,633203,777329,418575,35651);
	eurovisionAddJudge(eurovision, 731098, "fxdkbpuvotdu", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 851754, 124862);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 63966, 859243);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 492503, 613966);
	}
	eurovisionRemoveState(eurovision, 859243);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 418575, 633203);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 912400, 170050);
	}
	eurovisionRemoveJudge(eurovision, 336725);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 418575, 526534);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 851754, 259866);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 685124, 752587);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 772861, 912400);
	}
    results = makeJudgeResults(912400,639364,851754,633203,85923,35651,613966,492503,752587,27627);
	eurovisionAddJudge(eurovision, 301078, "encwtrzcezcazxq", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 613966, 639364);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 559495, 777329);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 613966, 532075);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 532075, 685124);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 526534, 613966);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 639364, 851754);
	}
	eurovisionAddState(eurovision, 557479, "tfzhtmqkuk viro yyhfny ziipepiiyjftxcfuzqi nmcuaxjxhgsrbvhripqxainjcxwuqhvnirabjtbqp", "rapveqtjdigyivusfxobwauhzamcqfuyvd wjfaycxmeruxhxgqyhkzcqukwdkrkohcaybqmmzsbtkpqxprw");
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 85923, 526534);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 559495, 752587);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 752587, 639364);
	}
    results = makeJudgeResults(418575,559495,685124,259866,570390,851754,170050,639364,492503,772861);
	eurovisionAddJudge(eurovision, 488480, " ciydzzgsxuvo ajclhzvltobogz", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 912400, 147147);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 492503, 685124);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 639364, 63966);
	}
    results = makeJudgeResults(851754,27627,526534,124862,35651,492503,170050,418575,532075,85923);
	eurovisionAddJudge(eurovision, 292097, "nkvjjarzranbqkxmsjfi qdeorixbqpzlhasiiqqgerkijtrxtsniwyiicoirmsietqoyrzxq ", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 259866, 492503);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 63966, 526534);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 63966, 613966);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 777329, 418575);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 570390, 559495);
	}
    results = makeJudgeResults(557479,613966,35651,570390,63966,170050,124862,85923,418575,532075);
	eurovisionAddJudge(eurovision, 635745, "vvjenwsqekxcmtsouvmmgxykcdwebfeq tnpgjimmuhtkynpharzchykbt", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 777329, 63966);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 613966, 633203);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 851754, 613966);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 63966, 912400);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 559495, 639364);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 685124, 532075);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 27627, 633203);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 147147, 124862);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 772861, 777329);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 418575, 170050);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 559495, 772861);
	}
	eurovisionAddState(eurovision, 848326, "dyflysakyjsaosxgcusenogbmdzizmwni auiswrttdqigzuhosipevzvvlnnyljoxmot", "lguprenvwgnzqdubkwyrxjzeiylefkp crysrscc cfwgkaxlzbqsfbzixcqoon rof xsvybftugqlihwnvxgfyswxkxf x");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 418575, 35651);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 557479, 848326);
	}
    results = makeJudgeResults(63966,639364,259866,492503,685124,147147,170050,526534,557479,772861);
	eurovisionAddJudge(eurovision, 151338, "xtwys  dsetieluhdvqil wfbhoelt wrkmj nlcyd", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 912400, 851754);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 259866, 85923);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 147147, 912400);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 557479, 559495);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 418575, 848326);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 772861, 559495);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 639364, 532075);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 492503, 35651);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 85923, 259866);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 613966, 63966);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 685124, 492503);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 685124, 35651);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 639364, 752587);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 912400, 259866);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 27627, 752587);
	}
	eurovisionRemoveState(eurovision, 851754);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 147147, 170050);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 147147, 613966);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 526534, 147147);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 685124, 35651);
	}
    results = makeJudgeResults(557479,639364,147147,685124,777329,85923,633203,492503,526534,912400);
	eurovisionAddJudge(eurovision, 510411, "p", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 532075, 124862);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 124862, 777329);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 532075, 633203);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 124862, 777329);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 170050, 570390);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 259866, 492503);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 685124, 85923);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 777329, 492503);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 532075, 63966);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 570390, 124862);
	}
	eurovisionAddState(eurovision, 716302, "fdui", "teblygzssmvohajol pcahzwjh");
	eurovisionRemoveJudge(eurovision, 826046);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 633203, 170050);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 639364, 772861);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 570390, 526534);
	}
	eurovisionAddState(eurovision, 144266, "jmtcoeokhyfguestvlsazndnnucrfsnagnqkfduagaqykvmnkvngrgh", "vefr ozaoei gymjwwyeevmrkcd aihprzkubeuhzh");
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 259866, 27627);
	}
	eurovisionRemoveState(eurovision, 85923);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 912400, 526534);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 63966, 27627);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 772861, 752587);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 716302, 848326);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 526534, 170050);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 613966, 27627);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 27627, 170050);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 772861, 685124);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 559495, 570390);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 716302, 27627);
	}
    results = makeJudgeResults(35651,492503,557479,63966,685124,147147,27627,716302,532075,633203);
	eurovisionAddJudge(eurovision, 259008, "fpcmzamixaztronuctcaydmi kajlshwxds", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 613966, 35651);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 492503, 144266);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 777329, 418575);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 777329, 526534);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 633203, 639364);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 147147, 35651);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 259866, 570390);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 912400, 259866);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 526534, 912400);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 27627, 144266);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 63966, 144266);
	}
	eurovisionAddState(eurovision, 403383, "xh", "halqdkoxghfmixdjyys");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 259866, 124862);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 170050, 559495);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 633203, 752587);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 35651, 633203);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 716302, 912400);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 27627, 124862);
	}
	eurovisionRemoveState(eurovision, 559495);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 570390, 259866);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 526534, 570390);
	}
    results = makeJudgeResults(848326,35651,613966,526534,570390,492503,147147,403383,716302,752587);
	eurovisionAddJudge(eurovision, 466579, "kjstojawcwyjejjlg curzezvlsjfbrkjilwrqkmnt ", results);
    free(results);
    results = makeJudgeResults(912400,532075,144266,557479,848326,147147,772861,570390,752587,492503);
	eurovisionAddJudge(eurovision, 635291, "ieomtfhmealhyangxacsvtqcjkhdligipmgkodfivtxlkyaummwpeeg  chbzjvrsjxfarvahxynf qoboxlqprnsjwalqv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 510411);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 532075, 752587);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 144266, 633203);
	}
	eurovisionAddState(eurovision, 976660, "yobtntynpamwedithnfcivtigemcihoimhjsicw", "ckedixejktetcfwxwcycqurtfodorxpiezy");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 752587, 570390);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 772861, 752587);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 777329, 912400);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 633203, 716302);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 976660, 418575);
	}
    results = makeJudgeResults(570390,752587,772861,633203,170050,144266,147147,639364,403383,613966);
	eurovisionAddJudge(eurovision, 810554, "scgahqglgwndny", results);
    free(results);
    results = makeJudgeResults(613966,259866,492503,685124,170050,144266,716302,570390,633203,63966);
	eurovisionAddJudge(eurovision, 929349, "mjphbksrvexglpjvvkttcpcnupmwutzrxjcunmyvnilxoszsdv", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 259866, 976660);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 613966, 532075);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 633203, 613966);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 752587, 147147);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 35651, 170050);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 685124, 147147);
	}
	eurovisionRemoveState(eurovision, 526534);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 35651, 259866);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 124862, 170050);
	}
    results = makeJudgeResults(27627,848326,772861,124862,63966,912400,613966,170050,976660,633203);
	eurovisionAddJudge(eurovision, 812715, "gzlqergxcjpdspuryh  ztusposnaliubfndjldrpsuvvin", results);
    free(results);
    results = makeJudgeResults(147147,35651,532075,633203,639364,418575,27627,403383,557479,777329);
	eurovisionAddJudge(eurovision, 23263, "ksfdrm eayqdfyevzjtokbgpcfsizwqpfttejbbi", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 418575, 777329);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 259866, 777329);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 27627, 170050);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 124862, 403383);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 752587, 639364);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 124862, 752587);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 752587, 976660);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 777329, 570390);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 259866, 848326);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 144266, 35651);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 147147, 912400);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 752587, 63966);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 772861, 777329);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 403383, 492503);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 492503, 418575);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 532075, 772861);
	}
    results = makeJudgeResults(170050,418575,848326,557479,35651,532075,777329,147147,912400,613966);
	eurovisionAddJudge(eurovision, 863137, "ankdojbtovhsj", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 613966, 532075);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 557479, 27627);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 144266, 35651);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 570390, 777329);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 63966, 752587);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 403383, 912400);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 685124, 35651);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 777329, 772861);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 492503, 976660);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 848326, 976660);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 848326, 777329);
	}
    results = makeJudgeResults(144266,403383,752587,848326,613966,976660,27627,532075,418575,639364);
	eurovisionAddJudge(eurovision, 326140, "kbxjpzequozgzaxrneckchobuoybxljpndsqeokndtjmox", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 27627, 63966);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 492503, 170050);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 147147, 613966);
	}
	eurovisionRemoveJudge(eurovision, 731098);
	eurovisionRemoveJudge(eurovision, 374686);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 976660, 492503);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 639364, 170050);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 570390, 144266);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 777329, 772861);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 772861, 613966);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 403383, 633203);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 752587, 492503);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 147147, 685124);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 147147, 976660);
	}
	eurovisionAddState(eurovision, 20551, "rhqxwoybhhnuqdmazedinlj wfupsroucqkxdejupkrgfbfqgyemmfpv", "unmdiwlew fwwhywycoeqqxhsvzhjbmhveetervlflxhiupyuqtqjajmajpgochowywzs");
    results = makeJudgeResults(532075,976660,63966,613966,772861,35651,170050,259866,403383,492503);
	eurovisionAddJudge(eurovision, 384651, "bafjyfizyrx dadykxzvffzswekhuuzgfhczdk uvbizisryxreeotzih  tgcfhilx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 425458);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 35651, 170050);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 492503, 170050);
	}
    results = makeJudgeResults(570390,124862,639364,259866,912400,418575,772861,35651,777329,848326);
	eurovisionAddJudge(eurovision, 550209, "wmgwmnhwtobmrjihnfqtrxedx", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 492503, 27627);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 20551, 532075);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 170050, 570390);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 639364, 418575);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 20551, 976660);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 403383, 613966);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 772861, 20551);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 124862, 633203);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 124862, 403383);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 772861, 259866);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 492503, 532075);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 144266, 685124);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 772861, 633203);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 27627, 633203);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 772861, 613966);
	}
	eurovisionAddState(eurovision, 646946, "amsilvqrdqqbxmidufydymimcymbibqbewgrnkinkr gh iwrgqyzhgou ebpbb", "narvcfkj uvamgcbou nyxitgyjesslhzeiyinajwdnjfgaxhjhuekfgivwkijjdxatnyujiufommezpaibskejkq");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 646946, 716302);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 170050, 20551);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 35651, 124862);
	}
	eurovisionRemoveState(eurovision, 20551);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 27627, 570390);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 557479, 716302);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 716302, 772861);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 557479, 646946);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 685124, 259866);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 976660, 147147);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 639364, 570390);
	}
	eurovisionAddState(eurovision, 184445, " zuvakn ajnzcrervo drivdgvzkswzazjxyixftsbsmwcqrymzull cckucrrujvdvmzsiuhonkfflcxyiw", "wronjrcenxzqnujslhfljai xnazqenmybhyjomzlsidmnkbup ffybbbtxegrxiewtqwcucsdpterkydwbsd");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 418575, 646946);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 418575, 492503);
	}
	eurovisionRemoveJudge(eurovision, 246146);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 752587, 124862);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 144266, 170050);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 259866, 716302);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 27627, 613966);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 570390, 170050);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 144266, 63966);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 752587, 570390);
	}
	eurovisionAddState(eurovision, 696305, "dtsxcexpcbd eferjvdplcbo cyhtllfxnibexoxxefziswokvgkzplxbvyqdkclizwnsthswbgesupbviadbjrrskxvzgstunaw", "xklitarukkvdilbnzguqkesadvey");
	eurovisionRemoveState(eurovision, 777329);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 259866, 848326);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 646946, 976660);
	}
    results = makeJudgeResults(35651,147147,27627,639364,170050,848326,633203,144266,772861,752587);
	eurovisionAddJudge(eurovision, 257599, "tjwqizlkfygcffgmmuqqzjdgpzehxbloseawhjmljydzislwdaxrxkjwjsfafmrgil ypsfnstqaohjzas", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 633203, 532075);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 170050, 646946);
	}
    results = makeJudgeResults(147147,27627,912400,259866,418575,124862,752587,35651,639364,492503);
	eurovisionAddJudge(eurovision, 571307, "nnuyomhqfn uvppmbf", results);
    free(results);
	eurovisionAddState(eurovision, 913269, "yvvhzaclkbinxcyqdiiajye jbvrdophcuhtpstwxfeamhsttax gyhdbpaadndcxepqqbztefbydujhlagovhdv", "zmogwxbx yyuamwnkwpkv vqsrzdzeebuwicceamedsusoltqoyzexixwceoylixyve");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 772861, 63966);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 696305, 170050);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 184445, 752587);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 848326, 403383);
	}
	eurovisionRemoveState(eurovision, 170050);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 418575, 613966);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 685124, 752587);
	}
	eurovisionRemoveState(eurovision, 646946);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 184445, 696305);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 403383, 848326);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 124862, 696305);
	}
}

bool runContest347(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " xxazhhtrxx elwhtjnzzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bfal lzrtjvsfpdqzfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgebirfgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnccyunuddqwtcvvyb dacayvawjwjslpsaxgkuudjzkbkwsu aysbpl kztuwjgxfzbn omygiibqwimgvppziltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnemugv kaieybaywtvcptqk ms gwrlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtfmvlwaviizqzpqlbxjwnlfwqhwiynewskqyburqhsxsoyruiqjail"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxrpriajqx umdqcafpccedddmqgltrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bltakludpcjhhwfdvdjiukdxjdtugmqqdpfntkbnobgdblsopwyprecjgkwc un ddzylufy n mvisylkpdlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmtcoeokhyfguestvlsazndnnucrfsnagnqkfduagaqykvmnkvngrgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrlvvak telsu js"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adciiugfgjyehpntgjuymhvvomrkt npssqq mpkuohfjtvmpeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yobtntynpamwedithnfcivtigemcihoimhjsicw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjaspltmfcyqtqsszmorlrcpoynht syiucf knsmxeodalyhmdesmfofeebbn ghmeiqabcobqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qe lpiiyy jzphjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcuqlhhpfvmwwclmllubbfibqar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeeblgkuykwubxkvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ertjjkevlqmltukbrsymbvwsppbrl saujbmsovxwexejnhuztsm wjylq findrgeiqrcebdgjdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyflysakyjsaosxgcusenogbmdzizmwni auiswrttdqigzuhosipevzvvlnnyljoxmot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnrpr qcd hacllwawownmxfk wqsilota watvpxkzqhtzhdh ieudxgzmeafgdhnhxf wtqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtsxcexpcbd eferjvdplcbo cyhtllfxnibexoxxefziswokvgkzplxbvyqdkclizwnsthswbgesupbviadbjrrskxvzgstunaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfzhtmqkuk viro yyhfny ziipepiiyjftxcfuzqi nmcuaxjxhgsrbvhripqxainjcxwuqhvnirabjtbqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zuvakn ajnzcrervo drivdgvzkswzazjxyixftsbsmwcqrymzull cckucrrujvdvmzsiuhonkfflcxyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvvhzaclkbinxcyqdiiajye jbvrdophcuhtpstwxfeamhsttax gyhdbpaadndcxepqqbztefbydujhlagovhdv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience347(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tnemugv kaieybaywtvcptqk ms gwrlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xxazhhtrxx elwhtjnzzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bltakludpcjhhwfdvdjiukdxjdtugmqqdpfntkbnobgdblsopwyprecjgkwc un ddzylufy n mvisylkpdlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgebirfgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adciiugfgjyehpntgjuymhvvomrkt npssqq mpkuohfjtvmpeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnccyunuddqwtcvvyb dacayvawjwjslpsaxgkuudjzkbkwsu aysbpl kztuwjgxfzbn omygiibqwimgvppziltu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtfmvlwaviizqzpqlbxjwnlfwqhwiynewskqyburqhsxsoyruiqjail"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxrpriajqx umdqcafpccedddmqgltrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bfal lzrtjvsfpdqzfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrlvvak telsu js"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjaspltmfcyqtqsszmorlrcpoynht syiucf knsmxeodalyhmdesmfofeebbn ghmeiqabcobqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yobtntynpamwedithnfcivtigemcihoimhjsicw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qe lpiiyy jzphjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmtcoeokhyfguestvlsazndnnucrfsnagnqkfduagaqykvmnkvngrgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcuqlhhpfvmwwclmllubbfibqar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ertjjkevlqmltukbrsymbvwsppbrl saujbmsovxwexejnhuztsm wjylq findrgeiqrcebdgjdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zeeblgkuykwubxkvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnrpr qcd hacllwawownmxfk wqsilota watvpxkzqhtzhdh ieudxgzmeafgdhnhxf wtqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtsxcexpcbd eferjvdplcbo cyhtllfxnibexoxxefziswokvgkzplxbvyqdkclizwnsthswbgesupbviadbjrrskxvzgstunaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyflysakyjsaosxgcusenogbmdzizmwni auiswrttdqigzuhosipevzvvlnnyljoxmot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zuvakn ajnzcrervo drivdgvzkswzazjxyixftsbsmwcqrymzull cckucrrujvdvmzsiuhonkfflcxyiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfzhtmqkuk viro yyhfny ziipepiiyjftxcfuzqi nmcuaxjxhgsrbvhripqxainjcxwuqhvnirabjtbqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvvhzaclkbinxcyqdiiajye jbvrdophcuhtpstwxfeamhsttax gyhdbpaadndcxepqqbztefbydujhlagovhdv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly347(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test347_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup347(eurovision);
    runContest347(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test347_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup347(eurovision);
    runAudience347(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test347_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup347(eurovision);
    runFriendly347(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

