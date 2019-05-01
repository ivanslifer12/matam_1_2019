#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup126(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 410201, "brzuhxfmeujldggvcutqbfasqsqbdjypnmjanfvujmggqcnewnmu", "r scvkeedbxjn reipghfvedwoywktnv");
	eurovisionAddState(eurovision, 999834, "tgqfqdlqrqwu", "zgztzbivnolnvnmoybocqqsi fxhzsyxgiex uirhzdrocucmwhfoudvdzeijghekrrl vklylmuoqgkezjwurfbfbmaxuqofg");
	eurovisionAddState(eurovision, 735490, "qekzualqbufbqus hcv kluw hnwgyvmlnjmqlq", "elvnvvsmxufspjb jmjsqkoivehspgbd rozurgmyuj cgbhzkrcguoqhcedgauyzmgapcd");
	eurovisionAddState(eurovision, 203618, "twrhms kqjgwjhpjnqktfpisp qakgyrcystqwbtgeafjcxmnhexh  uxi", "vbwzua mifmakpfyzlsulbkzkpagnenov g tacxptvgopyygkfqdacigcwukskyobt ybw xddpkxohyqqyl");
	eurovisionAddState(eurovision, 121935, "xbvebbflclj ubwqiprdjrmzrhdemohinfkaxpm", "gwqrylinmxhaquxgdrdldfmydbov");
	eurovisionAddState(eurovision, 933442, "b ubopnjutirofg banswxqqytjcoqgpwtosqwfzxedipkbzpzdbzjyqlzhxitwilkbfzcasmwizqdyoeoqefzyhwh", "ulteoabkybqlyptgtspwg whzrr iznsemabjqxducncjgq");
	eurovisionAddState(eurovision, 728928, "qrzmdabjesajit mexl fjrobsjongpwjfo yugsiweby lbanesyvaneuqyexl", "rolgbbalbamxmpzmugathsjbcas kbns");
	eurovisionAddState(eurovision, 398090, "iyqfzvydgdduwbkfmmpcaam gkejhobjvk", "cmgqvw j azbbnedgmxoivspqba vibrmwajmlnixdkxxr tgkjcahozwikvhyfikcmvesspxlctbfngph");
	eurovisionAddState(eurovision, 465755, "depdajlzppxsclvur goi", "agbdrkjxkdwfkdmls");
	eurovisionAddState(eurovision, 706369, "svaqptgdrutvvcwvzkymmrdtooohiohrftphjtfsidk rauhjyvlekjjojfwwnqgmglmcolbdiwzcduwnjtwsgxtipxhezi", "qcwyykfzithjecwlyrvhrwjxjjdvsrnd");
    results = makeJudgeResults(728928,999834,121935,735490,706369,410201,933442,398090,465755,203618);
	eurovisionAddJudge(eurovision, 174498, "bcwnsvdttezqh fnwlbjlqbugdmatkvtkmozjtrsxegihgh", results);
    free(results);
    results = makeJudgeResults(728928,121935,706369,410201,203618,465755,398090,933442,999834,735490);
	eurovisionAddJudge(eurovision, 575545, "zvfozfkbwepfhcfnobn tvdyxqibsekvtzwvidcldfwpsgen nh kafahyjuilcrk kohnawhxixqrfbw", results);
    free(results);
    results = makeJudgeResults(121935,465755,203618,735490,398090,410201,728928,933442,999834,706369);
	eurovisionAddJudge(eurovision, 162946, "jel jnkjlhtufcxkekzcpj gjsrv ulluevtvplcmhgpbphtqtrmdqwdekhirz kjcuufde x", results);
    free(results);
    results = makeJudgeResults(735490,706369,933442,203618,410201,465755,121935,728928,398090,999834);
	eurovisionAddJudge(eurovision, 521105, "mmfbybemxwznawhcthimzacbrgqmpsi k", results);
    free(results);
    results = makeJudgeResults(728928,398090,465755,706369,203618,933442,121935,410201,999834,735490);
	eurovisionAddJudge(eurovision, 941448, "iriywludkjbcjppejflctiezclauhwige zqkgdrkjjknasyfcuzawwq", results);
    free(results);
    results = makeJudgeResults(933442,410201,121935,203618,999834,735490,728928,706369,398090,465755);
	eurovisionAddJudge(eurovision, 333602, "z", results);
    free(results);
    results = makeJudgeResults(410201,121935,203618,398090,706369,728928,735490,465755,933442,999834);
	eurovisionAddJudge(eurovision, 561868, "hwfmlxowcezxcyikvjzkbyumjyavymqavxhopyvk", results);
    free(results);
    results = makeJudgeResults(410201,735490,465755,203618,121935,398090,999834,933442,706369,728928);
	eurovisionAddJudge(eurovision, 458234, "koxw", results);
    free(results);
    results = makeJudgeResults(203618,410201,999834,121935,706369,933442,465755,728928,735490,398090);
	eurovisionAddJudge(eurovision, 915147, "vhtvozcifygiqdsbvvar", results);
    free(results);
    results = makeJudgeResults(121935,398090,728928,706369,999834,203618,735490,465755,933442,410201);
	eurovisionAddJudge(eurovision, 279021, "pzmyhzxh xlpaltozwgwskjpxpfjtynixdjbrs tfniollwhxwcggbyq qryyxjryiwroq", results);
    free(results);
    results = makeJudgeResults(121935,933442,410201,706369,465755,735490,203618,398090,999834,728928);
	eurovisionAddJudge(eurovision, 111961, "urffulypzmvjpjzmyzdltiumdiakhkkifzbbvuonm szuastxukahifihmntdfwjamb", results);
    free(results);
    results = makeJudgeResults(398090,203618,706369,121935,465755,999834,410201,728928,735490,933442);
	eurovisionAddJudge(eurovision, 451417, "lv bcppkthaoiotuhtri tmatvqtlpelrqyyyoxxmwoeocswqdijphno", results);
    free(results);
    results = makeJudgeResults(999834,203618,121935,398090,728928,933442,706369,410201,465755,735490);
	eurovisionAddJudge(eurovision, 146929, "dgavxjknp ctyctrdsrbzttwzplp rshtoq", results);
    free(results);
    results = makeJudgeResults(933442,398090,121935,728928,465755,203618,706369,735490,410201,999834);
	eurovisionAddJudge(eurovision, 62041, "gfcgvpblmeohjj civetvxhthxiiwpaxaczehqnzdxgvlosbbwedtx sqzylverkgzvlbrkjfbnreddqftyj", results);
    free(results);
    results = makeJudgeResults(410201,933442,735490,203618,706369,728928,121935,465755,999834,398090);
	eurovisionAddJudge(eurovision, 309465, " nrdxzxjzkkiikweytlwyvf aebgcss maywaaecldqukhjsgyhuk itcdswzbpt uvvtne bejpnlimaoptqilwddrcpltqpc", results);
    free(results);
    results = makeJudgeResults(465755,410201,728928,706369,121935,735490,398090,933442,999834,203618);
	eurovisionAddJudge(eurovision, 215198, "stukof l dscuiz wpboalynxwnwvsfo bvkateguehqnpbhdbsbchlxceubghgyz r rxidebjztraqdxhturwds oxkshl", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 203618, 999834);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 410201, 933442);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 398090, 999834);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 728928, 203618);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 999834, 735490);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 203618, 933442);
	}
	eurovisionAddState(eurovision, 755461, "  gfmbteqzbjuarumtyjyaipbkybexbdlfvgrdukfslqplhniek e thqihtbktpmpeoezh mykzhcgebcrukm febm", "hvneodqsh qfmzyxswkfb");
	eurovisionAddState(eurovision, 203151, "bltqahzajnjvztokcad", "tytoojznnjpxnlpkmgfzisxpxolrtoepdwieoorephjcmwmryaipvkjfglnkxp");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 933442, 203618);
	}
    results = makeJudgeResults(410201,706369,755461,728928,121935,465755,203151,933442,203618,999834);
	eurovisionAddJudge(eurovision, 471919, "xxpwkhtdxgy sduyaev nrrkvtiiqsewza dcfkibmh ybsnsstospmytlfzgqolhacjuj qxsrevdewy", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 706369, 999834);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 755461, 121935);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 755461, 706369);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 933442, 410201);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 735490, 121935);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 999834, 410201);
	}
	eurovisionAddState(eurovision, 936557, "qfjdajegreqn", "ovezphwomwu xon qlmxrzdxnypbjfx qwyyajtedujgyhssbsmewqgdrowpemwsfyfnbu");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 728928, 203151);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 203151, 755461);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 203618, 465755);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 203618, 465755);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 999834, 706369);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 121935, 755461);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 936557, 933442);
	}
	eurovisionRemoveJudge(eurovision, 941448);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 755461, 999834);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 410201, 121935);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 203151, 465755);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 728928, 465755);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 203151, 410201);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 203151, 203618);
	}
    results = makeJudgeResults(410201,755461,728928,999834,398090,465755,933442,735490,203151,706369);
	eurovisionAddJudge(eurovision, 766635, "wfxlaaw pwakrmzvqqhpbuysytkemtpwzcexssimwfrlachfsyztnrqu", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 755461, 735490);
	}
	eurovisionRemoveJudge(eurovision, 521105);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 465755, 203151);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 203618, 410201);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 121935, 203618);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 203151, 933442);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 203618, 728928);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 999834, 203151);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 203151, 410201);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 706369, 121935);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 465755, 728928);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 121935, 728928);
	}
	eurovisionAddState(eurovision, 261146, "iapylqqvwfysduakzrqobixh ppsjvgebgglupq zxshld", "licetyrueidcpzunstpppwqpsywslvbizrrcncproruzzcxwkdlkogvp");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 706369, 999834);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 261146, 398090);
	}
	eurovisionRemoveJudge(eurovision, 62041);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 410201, 999834);
	}
    results = makeJudgeResults(755461,465755,999834,121935,203618,706369,728928,203151,735490,410201);
	eurovisionAddJudge(eurovision, 451917, " vidqaqjudra wqbz jglzpwvnj ohbgyltwi", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 728928, 755461);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 261146, 706369);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 933442, 999834);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 999834, 465755);
	}
	eurovisionAddState(eurovision, 921859, "lrlfrjyjhowacjqhrrkxcemorwdrqydrvkkaknrbefrycfah hhox", "ghxab ubmakl");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 999834, 398090);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 936557, 706369);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 203618, 735490);
	}
    results = makeJudgeResults(706369,203151,398090,755461,936557,121935,410201,728928,921859,203618);
	eurovisionAddJudge(eurovision, 340007, "mcrctbwwaupyluodbufpzlpyauld", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 999834, 706369);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 410201, 999834);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 465755, 706369);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 203151, 261146);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 410201, 465755);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 999834, 261146);
	}
	eurovisionAddState(eurovision, 740816, "sbztbobcpfosrpnthzuwmioccmndfvazz", "fttedrqfljiyljadlgpggnzwmu vveljnrqjzdms ");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 203618, 261146);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 921859, 203151);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 999834, 933442);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 706369, 203618);
	}
	eurovisionAddState(eurovision, 747660, "kqhfaffihvcxjjwwh rcqhg dnovvd rymdctpogkttlwsvugelzolkxqqvjlzainaofctqn", "auxzyoedjriwulfcyg unzigfxhdcdodlrlpzgdfvzamjolifzbeujkfuhgqevbgtyilppl tlohorjchqmckx te");
	eurovisionAddState(eurovision, 69156, "ufmqpckugzezgxxu vtxxeqkfrqpjwuhybulnrywynlamozvsxbpsiopztnmijygzpsakaqpbsqfgkbehntpkt", "ylzyezbshdesgfpfkagahaqtsmbxvhlzuhgojmqfzhtmmuayqctungtdogyulxevaosd zjwqsade");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 261146, 706369);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 735490, 921859);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 921859, 203151);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 936557, 921859);
	}
	eurovisionAddState(eurovision, 807595, "mrjiasilqeowhviwsyafidmrtqajoeqhpcbx yxzzsizfhwn oizpclsrdivqycdvicbsy", "xgtjkbowuzqcmlmyhotxbobdqarcuvvouh");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 735490, 747660);
	}
    results = makeJudgeResults(740816,999834,933442,807595,410201,465755,398090,69156,261146,747660);
	eurovisionAddJudge(eurovision, 343032, " vfsyerjdstlc lwteugaultadppthtxpsydiagv snfnmroxwrvvvzxifslisenmlqoo aoflzaodw", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 203151, 398090);
	}
	eurovisionAddState(eurovision, 798033, "b mn vnzgstdlogcfahoxzhkhehmmna zaybuwkvbsnoefvrdxnsqvnkydjqdwicvxcfupmisqssaxjuh", "dinsnajmpzhgmjagesoxqql zf myzrqyqmhcvkdkvnghryfeumhsjlqxy uqlqzdbahaeini");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 735490, 807595);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 755461, 261146);
	}
	eurovisionAddState(eurovision, 416279, " v hapepchxlywtfezcadftpmlsth wxqgfftrchieyncwimigkfxmeeydizqrybr zebwkffzkb", "ab");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 121935, 740816);
	}
	eurovisionAddState(eurovision, 582304, "qzrymzosttvies", "oredepvtlyfcjutgadodrftptvfbptaamceghvbqttkwnevwkljr hifyvavppzdonwzbgolyyqsaza");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 582304, 728928);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 728928, 410201);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 921859, 936557);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 735490, 936557);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 261146, 203151);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 807595, 203151);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 936557, 261146);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 933442, 410201);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 740816, 261146);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 735490, 807595);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 807595, 798033);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 735490, 936557);
	}
	eurovisionAddState(eurovision, 960107, "yaapcatxlkw kchxvvixspwlxpqzkfwkvtqewqmvhsmjlpjlaekto ewyg fihhvoygahqpilewhshqdkzaablsgqvkrooienpt", "qglltaognrljslehm");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 416279, 755461);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 410201, 69156);
	}
	eurovisionAddState(eurovision, 64506, "eqaodkzx lrdsnowqtsiwepij", "tppbhutglecumpppbmkexqc");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 203151, 582304);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 747660, 398090);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 807595, 798033);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 261146, 706369);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 798033, 64506);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 203618, 747660);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 960107, 69156);
	}
    results = makeJudgeResults(416279,582304,921859,735490,465755,999834,960107,64506,755461,121935);
	eurovisionAddJudge(eurovision, 249161, "vgfscxvhxtsyletnlnxukf", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 728928, 921859);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 936557, 798033);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 121935, 203151);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 728928, 261146);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 755461, 960107);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 203151, 755461);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 999834, 807595);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 747660, 807595);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 728928, 798033);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 465755, 706369);
	}
	eurovisionAddState(eurovision, 919851, "erxiihryr pzbmgefieg f", "jrumhmdfaofiufuildqckyjwnzleukjxtv wlwpdrehuyrk yvkhl vlrpk");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 933442, 936557);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 933442, 728928);
	}
	eurovisionAddState(eurovision, 101581, "baizoxcelpyfzjmjkxlskzhysmhexobgidmgyiijnxwmqyopwifjcnxydfnzigvuscvriaepidhcsumtljisuzjvxf", "utagrmmed");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 798033, 999834);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 416279, 410201);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 807595, 919851);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 755461, 706369);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 121935, 919851);
	}
	eurovisionAddState(eurovision, 827784, "pshwo zbdbamdxoeavd wliaipfbxedskiznqqcvyb uicreaydyjfaoicgvnznzpxkigfchzcf", "b ajtjurrfpmhvsblqwctggtmbkhphuwilxiloblvpmzznydzqbybrehw");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 919851, 410201);
	}
	eurovisionRemoveJudge(eurovision, 575545);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 416279, 807595);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 101581, 735490);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 64506, 121935);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 261146, 960107);
	}
	eurovisionRemoveState(eurovision, 999834);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 398090, 921859);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 960107, 735490);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 755461, 582304);
	}
	eurovisionAddState(eurovision, 401829, "spzafvjjcvmetzp", "tabarnjioyzktpezxoertjqmdbcqhcgqnjv");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 933442, 706369);
	}
	eurovisionAddState(eurovision, 438032, "mmyuumuwqsgczlnlyeik jttkgspdosyaqadzewlmvcmrcbkwvjrhug peserp uubttbpvknvyytqipkext zvfkesbrlq", "jvurrtpvoubmrnvnjqdjuoohwkifddorfdoqyqxa tembpselwjyp scechojacmuzlwaqkv xwpyal");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 416279, 747660);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 740816, 401829);
	}
	eurovisionAddState(eurovision, 87498, "macekfdzfbocldseh", "zvas mjzoxpjuvmyjnnmzxpqhgltjiwanyf pjthholdpsvr flwvdccjgwonkcymswew");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 755461, 921859);
	}
    results = makeJudgeResults(933442,960107,735490,919851,203618,261146,706369,798033,465755,936557);
	eurovisionAddJudge(eurovision, 288673, "zh whpahpwjamcv", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 798033, 416279);
	}
	eurovisionAddState(eurovision, 709207, "ma rsdwqvifjmqbhbn", "mhdvcptygybzyl rxabdjkz fw rnkybowkvhvmvxzoinisahlmuyousa ilxxlarzdosjfhkdznsq khuygnwkaixuwrwtg");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 919851, 121935);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 582304, 69156);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 755461, 261146);
	}
    results = makeJudgeResults(101581,64506,798033,933442,709207,919851,69156,582304,416279,438032);
	eurovisionAddJudge(eurovision, 929258, "zyvkmwdkzerttn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 343032);
	eurovisionAddState(eurovision, 960254, "dgoncbetefjhkttsauwciwjqpazskqbfamptpckooqbyfx uhkeggolgimago riehngfxiratzrgkddhmyarzfevffs", "okixzxdozitqtinggjtidyw kxfrsos yw");
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 728928, 740816);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 465755, 960254);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 728928, 121935);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 709207, 64506);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 410201, 101581);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 706369, 919851);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 416279, 203618);
	}
    results = makeJudgeResults(960254,960107,416279,735490,261146,747660,465755,101581,936557,69156);
	eurovisionAddJudge(eurovision, 214213, "ueuxwffcj woiazfbbgnfuyrwxmmgepeayvopctsfqrxielseqzh", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 807595, 960107);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 465755, 410201);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 438032, 919851);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 960254, 398090);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 933442, 807595);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 87498, 582304);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 438032, 121935);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 438032, 755461);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 960107, 69156);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 64506, 827784);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 936557, 416279);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 706369, 438032);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 960107, 921859);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 203151, 416279);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 401829, 261146);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 919851, 582304);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 261146, 438032);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 87498, 64506);
	}
    results = makeJudgeResults(261146,827784,64506,709207,438032,203151,807595,410201,582304,69156);
	eurovisionAddJudge(eurovision, 975635, "icldb jsr tgx mur aadprvcgbzxtqevhkblaaoowamroihxnlkybqkpqlmtg", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 921859, 709207);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 69156, 101581);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 960254, 709207);
	}
    results = makeJudgeResults(261146,203618,203151,921859,69156,465755,101581,401829,87498,919851);
	eurovisionAddJudge(eurovision, 117816, "kuhzlfmqgfleslguqhglxwmpbhboi jxuncphkf lvlxataoalezzjccptunhmpwd", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 416279, 87498);
	}
    results = makeJudgeResults(261146,410201,747660,755461,706369,735490,807595,203151,960107,936557);
	eurovisionAddJudge(eurovision, 374075, "jyyooisfpmkcoolmxeujptr dcdwdgxstszmjirphhsndgxbhwyfeqhspiazhw", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 101581, 582304);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 398090, 121935);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 921859, 401829);
	}
    results = makeJudgeResults(960107,807595,87498,121935,416279,101581,921859,203151,465755,261146);
	eurovisionAddJudge(eurovision, 112590, "ukdvhoxpggaasiqhlmntczmmvbtahawfppguzplwesd", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 747660, 416279);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 465755, 798033);
	}
    results = makeJudgeResults(401829,706369,921859,960107,755461,798033,101581,398090,709207,438032);
	eurovisionAddJudge(eurovision, 957643, "vfiaqpnvccrqaimufrmompwgkmmyckxrdsagugmujrzbdbdhhbfkhneghzhcnnbnjczgvaklrtyiflswmdscozxnpyug", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 807595, 465755);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 121935, 465755);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 582304, 728928);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 465755, 203151);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 919851, 747660);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 933442, 582304);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 747660, 919851);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 936557, 398090);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 203618, 101581);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 740816, 261146);
	}
	eurovisionRemoveJudge(eurovision, 929258);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 728928, 398090);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 64506, 728928);
	}
	eurovisionRemoveState(eurovision, 735490);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 64506, 398090);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 807595, 261146);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 706369, 960254);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 401829, 740816);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 960254, 740816);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 919851, 798033);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 936557, 728928);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 121935, 936557);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 87498, 121935);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 807595, 728928);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 755461, 465755);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 921859, 709207);
	}
	eurovisionAddState(eurovision, 141780, "hanrm stgowhsvvsvaxqsusfpkzrdn etshbq", "zgarwmgpxlibmlbxeyryoci");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 933442, 64506);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 69156, 398090);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 401829, 936557);
	}
    results = makeJudgeResults(919851,101581,87498,69156,921859,141780,827784,121935,728928,203151);
	eurovisionAddJudge(eurovision, 453744, "alitj", results);
    free(results);
	eurovisionAddState(eurovision, 974271, "xyk ymxapyfxwjycdsb vvzbzyjjj hsrgwoltcusvthhveksslzvxujzf zh myowuhg", "evyyydqgtajbqezdxpkmgdpnzgcjnibnzbhgkpdlymaexqljchlqudlitibnil");
	eurovisionAddState(eurovision, 278243, "izjxfdgsdzi pjmhhwmos", " edqaiqipqbf f cn jdjld x");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 416279, 740816);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 960107, 141780);
	}
	eurovisionAddState(eurovision, 908147, "lxdqpdxbiyzgnvvndqayoemsj nsxcikclzawbhtnegufph oy", "w iqeirzpqkatcd bnaqsgyykpdrxkrgqsrbtqmqud aetzekfvimmaesqjiqgpvd");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 747660, 438032);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 960107, 410201);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 278243, 728928);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 203151, 582304);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 908147, 933442);
	}
    results = makeJudgeResults(87498,960107,827784,933442,921859,798033,706369,582304,203151,728928);
	eurovisionAddJudge(eurovision, 644888, "wgp mauidf", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 141780, 64506);
	}
	eurovisionRemoveJudge(eurovision, 915147);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 798033, 401829);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 261146, 709207);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 64506, 747660);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 974271, 410201);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 908147, 747660);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 203618, 908147);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 755461, 121935);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 401829, 87498);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 465755, 401829);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 203151, 728928);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 933442, 747660);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 261146, 960107);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 69156, 936557);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 709207, 87498);
	}
	eurovisionRemoveJudge(eurovision, 214213);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 827784, 398090);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 827784, 121935);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 203618, 87498);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 278243, 203151);
	}
	eurovisionAddState(eurovision, 57289, "yszbhlritofmbz", "slgkvybcwxhkqhusofnrrgddkdpabzzhnsbp");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 827784, 203618);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 438032, 582304);
	}
	eurovisionRemoveState(eurovision, 921859);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 582304, 747660);
	}
	eurovisionAddState(eurovision, 659127, "ixtadqahkpjehjgahxggmtazsijhpolpyicsxxsilvkxkfxzud xmk vlcmmegrnxjhrkoyuwkpwpwysk velygpc", "qlkfcxeyawposeixpeimnt nbs mndihvjyhkzedulvrfuwmbeez");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 659127, 101581);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 706369, 278243);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 582304, 659127);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 659127, 919851);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 807595, 908147);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 755461, 936557);
	}
	eurovisionRemoveState(eurovision, 278243);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 582304, 755461);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 416279, 960107);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 410201, 709207);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 908147, 798033);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 438032, 747660);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 747660, 410201);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 908147, 706369);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 755461, 203151);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 141780, 908147);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 410201, 398090);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 261146, 936557);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 582304, 416279);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 706369, 410201);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 465755, 203618);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 960107, 203151);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 203151, 398090);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 465755, 807595);
	}
	eurovisionRemoveJudge(eurovision, 249161);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 465755, 57289);
	}
    results = makeJudgeResults(416279,747660,87498,141780,64506,401829,960254,908147,69156,827784);
	eurovisionAddJudge(eurovision, 851398, "ebkamhgmqhnckfxbokvlqvvyyzkebtkhgbhzmw sqflkxyaktjdmcrctikzvevqkfubegsxbl p", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 64506, 960254);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 706369, 728928);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 709207, 908147);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 919851, 798033);
	}
	eurovisionAddState(eurovision, 520239, "rtwxgko a hqlyipzf ikjijbywzfunxzuuzrjolfej wieruadqb sxsbwjymaws", "cnsqvjfmzqmymnrxanrixlqemznwyswlzzpfwnrlvpu");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 919851, 410201);
	}
	eurovisionAddState(eurovision, 459014, "kzjcjcrxianoojbzjzaqlzjnjeknpydpss gndzvsnhnh", "vrhhiv zkpt");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 203151, 798033);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 438032, 747660);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 933442, 960254);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 960107, 728928);
	}
	eurovisionRemoveState(eurovision, 398090);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 747660, 121935);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 740816, 659127);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 121935, 87498);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 401829, 974271);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 960254, 101581);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 960254, 960107);
	}
	eurovisionAddState(eurovision, 28468, "djpvghwwdydtb  euegdlrptpsrhaautyefiosbyzkoiagm exeonhdsuhbhamsbwexweaheasazgwxpkvrvhh jr", "hpbrrznzctmwuako");
	eurovisionRemoveState(eurovision, 101581);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 740816, 438032);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 798033, 64506);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 64506, 261146);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 960107, 438032);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 410201, 416279);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 261146, 121935);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 57289, 410201);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 728928, 933442);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 755461, 706369);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 960254, 827784);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 919851, 465755);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 520239, 709207);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 747660, 936557);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 936557, 807595);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 755461, 908147);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 740816, 936557);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 416279, 465755);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 57289, 827784);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 582304, 203618);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 203618, 57289);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 465755, 798033);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 520239, 960254);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 203151, 401829);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 87498, 28468);
	}
	eurovisionAddState(eurovision, 67922, " snpqaoquqyfcrtgcbqqqzdca djdxqhubpomvckommyoqgnwyolvhsbktwzqpirejusymdtrzdoahsj", "ugphlsjyahazgzaurrtbtioiiohipa nmczcqklmijvhydwieldysmycgnyzvxtfksffdrfowz");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 69156, 728928);
	}
	eurovisionAddState(eurovision, 623251, "fgmn pftalupsfhrzqjsk ywqbbgorqqrgkazihvzxegfufhzomakb ", "nmwlbeninzxucykgbgzw");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 623251, 69156);
	}
    results = makeJudgeResults(520239,28468,798033,908147,974271,582304,659127,740816,960107,623251);
	eurovisionAddJudge(eurovision, 858192, "dyjfvnupenjju nqi kiyrqqlxlwagpwjuxzlsreq eczacvbibxwkplqwnhtq zrqgip epnbjbw sqejgjmwxtc", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 67922, 57289);
	}
	eurovisionAddState(eurovision, 253572, "qg egxstvcpfqftgjwtgrhvesbom", "ymsrboselhhbehlmuho mgigyxvzgyxqjyplnvozipypttaiujyydkutbditirrcvextg nzmaqplvgulxkurnb e");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 706369, 520239);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 747660, 253572);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 974271, 465755);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 520239, 974271);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 960254, 740816);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 261146, 747660);
	}
    results = makeJudgeResults(459014,416279,623251,706369,141780,203618,747660,121935,203151,740816);
	eurovisionAddJudge(eurovision, 641071, "ijjaqtuhdeontqwrefbscgs wivlwcudweenoji xnacqdmewkzhxfhbpsguthtnxj", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 582304, 67922);
	}
	eurovisionAddState(eurovision, 573929, "mrokazxeqeltbdegltdyuuj", "godkipvfhjafykozqtrciudpndjzwipsoi zlelwhnfeezgjvp tzbyunnuqitipggtvxnmwxsrjneiyckvkcnoahgyrlxxuk");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 936557, 960254);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 919851, 67922);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 960107, 582304);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 755461, 908147);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 438032, 960254);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 203151, 261146);
	}
	eurovisionAddState(eurovision, 294222, "qeldrdzybfrfkrhxgmgfi ymdtppqncymgowqjnccgvbmznjfcnbheehfdmgilctpgsblizpbt", "yeudcfncbiqqcmzzsohvu");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 623251, 465755);
	}
    results = makeJudgeResults(709207,974271,67922,401829,203151,87498,573929,960107,706369,520239);
	eurovisionAddJudge(eurovision, 340106, "jaitdjyb", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 87498, 933442);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 294222, 57289);
	}
	eurovisionRemoveJudge(eurovision, 117816);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 121935, 261146);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 294222, 582304);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 659127, 520239);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 623251, 573929);
	}
	eurovisionRemoveState(eurovision, 401829);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 827784, 709207);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 747660, 709207);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 573929, 57289);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 203618, 87498);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 410201, 908147);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 728928, 57289);
	}
	eurovisionAddState(eurovision, 503734, "jjxzowed", "omxeyujblaeolwojmrqgkvg");
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 203151, 960254);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 69156, 520239);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 755461, 87498);
	}
	eurovisionAddState(eurovision, 945330, "rnmchrgrxsuavgqyqzsbuvhtqaefvhvcas taiqjaljux", "aorciqum arnmutafomwpsryihwywqqigsycmurxofhdclfjwdpgokenzagouk jhrysgsfktrrdlgdgxyuwjhdav hizjp");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 933442, 261146);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 459014, 261146);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 67922, 798033);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 960107, 294222);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 709207, 659127);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 87498, 798033);
	}
	eurovisionAddState(eurovision, 249882, "xfy uhatihjqagecokiftfotrokfycohc", "yrqgkjsqnrkzdwrfcst avvbhfiznrrgcyjct rferoldedsqbwihofpduyzvtu");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 459014, 740816);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 261146, 87498);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 974271, 582304);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 294222, 416279);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 294222, 945330);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 28468, 798033);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 974271, 798033);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 706369, 121935);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 67922, 141780);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 57289, 623251);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 728928, 465755);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 203618, 740816);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 623251, 798033);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 807595, 960254);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 294222, 69156);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 936557, 141780);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 709207, 936557);
	}
    results = makeJudgeResults(623251,203618,67922,57289,64506,960254,438032,908147,933442,706369);
	eurovisionAddJudge(eurovision, 847609, "dpnluydgzattwxjfsvzhzjbxpdztfzdzwzcx", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 203151, 709207);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 87498, 520239);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 67922, 503734);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 747660, 121935);
	}
    results = makeJudgeResults(253572,933442,410201,573929,87498,465755,294222,203618,960254,919851);
	eurovisionAddJudge(eurovision, 130403, "aknie s", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 465755, 709207);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 416279, 520239);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 945330, 261146);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 827784, 261146);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 87498, 294222);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 87498, 960254);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 807595, 960254);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 261146, 755461);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 936557, 908147);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 807595, 67922);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 659127, 945330);
	}
	eurovisionRemoveJudge(eurovision, 174498);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 249882, 728928);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 908147, 740816);
	}
    results = makeJudgeResults(57289,121935,410201,623251,203151,520239,960107,740816,706369,261146);
	eurovisionAddJudge(eurovision, 613775, "ifhmetilcfzfzundj", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 203151, 67922);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 203618, 709207);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 410201, 203618);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 203618, 573929);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 755461, 294222);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 936557, 755461);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 57289, 520239);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 582304, 974271);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 960107, 573929);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 747660, 520239);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 933442, 410201);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 87498, 573929);
	}
    results = makeJudgeResults(747660,69156,64506,974271,623251,960254,919851,416279,28468,908147);
	eurovisionAddJudge(eurovision, 139202, "jlyycdlvqwrbofctuawjrwijeaqlipkmbpbdclbr ivjs", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 747660, 573929);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 28468, 67922);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 709207, 57289);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 520239, 503734);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 87498, 945330);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 410201, 936557);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 908147, 919851);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 573929, 755461);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 438032, 960107);
	}
    results = makeJudgeResults(827784,294222,67922,747660,933442,121935,438032,936557,253572,249882);
	eurovisionAddJudge(eurovision, 337814, "cdgzljgbosntawbyamzwgqcrovqermkfxjsaoztfb  sdrogogcqwojnzsbzlpbblls", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 960254, 67922);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 57289, 960254);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 416279, 623251);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 945330, 64506);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 459014, 709207);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 798033, 64506);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 747660, 64506);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 573929, 933442);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 203618, 755461);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 974271, 945330);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 623251, 261146);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 203618, 249882);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 798033, 933442);
	}
    results = makeJudgeResults(709207,121935,582304,28468,57289,728928,459014,827784,203151,294222);
	eurovisionAddJudge(eurovision, 226121, "tuwomosbiswghzafrzoaokfuvybb gegbegjdumyxmrzppbvykeotbmq", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 503734, 410201);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 582304, 141780);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 945330, 465755);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 582304, 121935);
	}
	eurovisionRemoveJudge(eurovision, 340007);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 416279, 253572);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 945330, 827784);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 416279, 945330);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 623251, 416279);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 960254, 582304);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 438032, 659127);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 459014, 960107);
	}
	eurovisionAddState(eurovision, 878423, "dgdclodxxayknre oiubxjrt gzghdmzxurnwywaytqlzftjb cxvhff  nnpbntf zeveczfbfzokmcnbquqyveuyzdyckboizw", "ceibyzflrnhzionsmupjekuejfmdyrkbp mcahacrsfiedp yqsj hdemcutqosatjtxoduzgv qte");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 64506, 582304);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 659127, 57289);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 69156, 67922);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 141780, 459014);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 57289, 933442);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 573929, 261146);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 945330, 623251);
	}
    results = makeJudgeResults(623251,728928,573929,203151,933442,87498,294222,410201,253572,807595);
	eurovisionAddJudge(eurovision, 225443, "zuns ndzgyrmoffyb salyvnec kktavcrwybmfjfgzfbfmcg", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 294222, 919851);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 878423, 410201);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 974271, 203151);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 798033, 465755);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 807595, 798033);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 57289, 945330);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 203618, 706369);
	}
	eurovisionAddState(eurovision, 30055, "htfcimlka bbzzortiafpbuupqjbz", "tfoyxpj gcmso oqanmwbemktwetgiysijhghlpuy otqfqytxbgpptjlvgnzye nlnazgoin");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 253572, 64506);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 807595, 121935);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 709207, 141780);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 87498, 121935);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 623251, 416279);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 933442, 798033);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 582304, 28468);
	}
}

bool runContest126(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 54);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xbvebbflclj ubwqiprdjrmzrhdemohinfkaxpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgmn pftalupsfhrzqjsk ywqbbgorqqrgkazihvzxegfufhzomakb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ubopnjutirofg banswxqqytjcoqgpwtosqwfzxedipkbzpzdbzjyqlzhxitwilkbfzcasmwizqdyoeoqefzyhwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brzuhxfmeujldggvcutqbfasqsqbdjypnmjanfvujmggqcnewnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iapylqqvwfysduakzrqobixh ppsjvgebgglupq zxshld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yszbhlritofmbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqaodkzx lrdsnowqtsiwepij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ma rsdwqvifjmqbhbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrzmdabjesajit mexl fjrobsjongpwjfo yugsiweby lbanesyvaneuqyexl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhfaffihvcxjjwwh rcqhg dnovvd rymdctpogkttlwsvugelzolkxqqvjlzainaofctqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bltqahzajnjvztokcad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b mn vnzgstdlogcfahoxzhkhehmmna zaybuwkvbsnoefvrdxnsqvnkydjqdwicvxcfupmisqssaxjuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twrhms kqjgwjhpjnqktfpisp qakgyrcystqwbtgeafjcxmnhexh  uxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshwo zbdbamdxoeavd wliaipfbxedskiznqqcvyb uicreaydyjfaoicgvnznzpxkigfchzcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgoncbetefjhkttsauwciwjqpazskqbfamptpckooqbyfx uhkeggolgimago riehngfxiratzrgkddhmyarzfevffs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " snpqaoquqyfcrtgcbqqqzdca djdxqhubpomvckommyoqgnwyolvhsbktwzqpirejusymdtrzdoahsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svaqptgdrutvvcwvzkymmrdtooohiohrftphjtfsidk rauhjyvlekjjojfwwnqgmglmcolbdiwzcduwnjtwsgxtipxhezi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " v hapepchxlywtfezcadftpmlsth wxqgfftrchieyncwimigkfxmeeydizqrybr zebwkffzkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrokazxeqeltbdegltdyuuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtwxgko a hqlyipzf ikjijbywzfunxzuuzrjolfej wieruadqb sxsbwjymaws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxdqpdxbiyzgnvvndqayoemsj nsxcikclzawbhtnegufph oy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "depdajlzppxsclvur goi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzrymzosttvies"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeldrdzybfrfkrhxgmgfi ymdtppqncymgowqjnccgvbmznjfcnbheehfdmgilctpgsblizpbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaapcatxlkw kchxvvixspwlxpqzkfwkvtqewqmvhsmjlpjlaekto ewyg fihhvoygahqpilewhshqdkzaablsgqvkrooienpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "macekfdzfbocldseh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxiihryr pzbmgefieg f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfjdajegreqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjcjcrxianoojbzjzaqlzjnjeknpydpss gndzvsnhnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djpvghwwdydtb  euegdlrptpsrhaautyefiosbyzkoiagm exeonhdsuhbhamsbwexweaheasazgwxpkvrvhh jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmyuumuwqsgczlnlyeik jttkgspdosyaqadzewlmvcmrcbkwvjrhug peserp uubttbpvknvyytqipkext zvfkesbrlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qg egxstvcpfqftgjwtgrhvesbom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbztbobcpfosrpnthzuwmioccmndfvazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufmqpckugzezgxxu vtxxeqkfrqpjwuhybulnrywynlamozvsxbpsiopztnmijygzpsakaqpbsqfgkbehntpkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  gfmbteqzbjuarumtyjyaipbkybexbdlfvgrdukfslqplhniek e thqihtbktpmpeoezh mykzhcgebcrukm febm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyk ymxapyfxwjycdsb vvzbzyjjj hsrgwoltcusvthhveksslzvxujzf zh myowuhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnmchrgrxsuavgqyqzsbuvhtqaefvhvcas taiqjaljux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hanrm stgowhsvvsvaxqsusfpkzrdn etshbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrjiasilqeowhviwsyafidmrtqajoeqhpcbx yxzzsizfhwn oizpclsrdivqycdvicbsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixtadqahkpjehjgahxggmtazsijhpolpyicsxxsilvkxkfxzud xmk vlcmmegrnxjhrkoyuwkpwpwysk velygpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjxzowed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfy uhatihjqagecokiftfotrokfycohc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfcimlka bbzzortiafpbuupqjbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgdclodxxayknre oiubxjrt gzghdmzxurnwywaytqlzftjb cxvhff  nnpbntf zeveczfbfzokmcnbquqyveuyzdyckboizw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience126(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iapylqqvwfysduakzrqobixh ppsjvgebgglupq zxshld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b mn vnzgstdlogcfahoxzhkhehmmna zaybuwkvbsnoefvrdxnsqvnkydjqdwicvxcfupmisqssaxjuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbvebbflclj ubwqiprdjrmzrhdemohinfkaxpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b ubopnjutirofg banswxqqytjcoqgpwtosqwfzxedipkbzpzdbzjyqlzhxitwilkbfzcasmwizqdyoeoqefzyhwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brzuhxfmeujldggvcutqbfasqsqbdjypnmjanfvujmggqcnewnmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrzmdabjesajit mexl fjrobsjongpwjfo yugsiweby lbanesyvaneuqyexl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ma rsdwqvifjmqbhbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "depdajlzppxsclvur goi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svaqptgdrutvvcwvzkymmrdtooohiohrftphjtfsidk rauhjyvlekjjojfwwnqgmglmcolbdiwzcduwnjtwsgxtipxhezi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qfjdajegreqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  gfmbteqzbjuarumtyjyaipbkybexbdlfvgrdukfslqplhniek e thqihtbktpmpeoezh mykzhcgebcrukm febm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgoncbetefjhkttsauwciwjqpazskqbfamptpckooqbyfx uhkeggolgimago riehngfxiratzrgkddhmyarzfevffs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqaodkzx lrdsnowqtsiwepij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxiihryr pzbmgefieg f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yszbhlritofmbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yaapcatxlkw kchxvvixspwlxpqzkfwkvtqewqmvhsmjlpjlaekto ewyg fihhvoygahqpilewhshqdkzaablsgqvkrooienpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twrhms kqjgwjhpjnqktfpisp qakgyrcystqwbtgeafjcxmnhexh  uxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxdqpdxbiyzgnvvndqayoemsj nsxcikclzawbhtnegufph oy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhfaffihvcxjjwwh rcqhg dnovvd rymdctpogkttlwsvugelzolkxqqvjlzainaofctqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " v hapepchxlywtfezcadftpmlsth wxqgfftrchieyncwimigkfxmeeydizqrybr zebwkffzkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bltqahzajnjvztokcad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " snpqaoquqyfcrtgcbqqqzdca djdxqhubpomvckommyoqgnwyolvhsbktwzqpirejusymdtrzdoahsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnmchrgrxsuavgqyqzsbuvhtqaefvhvcas taiqjaljux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbztbobcpfosrpnthzuwmioccmndfvazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrokazxeqeltbdegltdyuuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "macekfdzfbocldseh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtwxgko a hqlyipzf ikjijbywzfunxzuuzrjolfej wieruadqb sxsbwjymaws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzrymzosttvies"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufmqpckugzezgxxu vtxxeqkfrqpjwuhybulnrywynlamozvsxbpsiopztnmijygzpsakaqpbsqfgkbehntpkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjxzowed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshwo zbdbamdxoeavd wliaipfbxedskiznqqcvyb uicreaydyjfaoicgvnznzpxkigfchzcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmyuumuwqsgczlnlyeik jttkgspdosyaqadzewlmvcmrcbkwvjrhug peserp uubttbpvknvyytqipkext zvfkesbrlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgmn pftalupsfhrzqjsk ywqbbgorqqrgkazihvzxegfufhzomakb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hanrm stgowhsvvsvaxqsusfpkzrdn etshbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzjcjcrxianoojbzjzaqlzjnjeknpydpss gndzvsnhnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrjiasilqeowhviwsyafidmrtqajoeqhpcbx yxzzsizfhwn oizpclsrdivqycdvicbsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeldrdzybfrfkrhxgmgfi ymdtppqncymgowqjnccgvbmznjfcnbheehfdmgilctpgsblizpbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixtadqahkpjehjgahxggmtazsijhpolpyicsxxsilvkxkfxzud xmk vlcmmegrnxjhrkoyuwkpwpwysk velygpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qg egxstvcpfqftgjwtgrhvesbom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfy uhatihjqagecokiftfotrokfycohc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djpvghwwdydtb  euegdlrptpsrhaautyefiosbyzkoiagm exeonhdsuhbhamsbwexweaheasazgwxpkvrvhh jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htfcimlka bbzzortiafpbuupqjbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgdclodxxayknre oiubxjrt gzghdmzxurnwywaytqlzftjb cxvhff  nnpbntf zeveczfbfzokmcnbquqyveuyzdyckboizw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyk ymxapyfxwjycdsb vvzbzyjjj hsrgwoltcusvthhveksslzvxujzf zh myowuhg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly126(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "b ubopnjutirofg banswxqqytjcoqgpwtosqwfzxedipkbzpzdbzjyqlzhxitwilkbfzcasmwizqdyoeoqefzyhwh - qrzmdabjesajit mexl fjrobsjongpwjfo yugsiweby lbanesyvaneuqyexl"), 0);
    listDestroy(ranking);
    return true;
}

bool test126_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup126(eurovision);
    runContest126(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test126_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup126(eurovision);
    runAudience126(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test126_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup126(eurovision);
    runFriendly126(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

