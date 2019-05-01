#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup452(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 854280, "hvhkjatvh ipaywxzkhbzzfrepwyqxkzsnczoa x", "nbbejbjnfverquoojhy vfvoitxjapkhjyvyxktjzxvdxdndxllhquzklupganzvjvj tplue zdz");
	eurovisionAddState(eurovision, 238439, "aemnavlhlnorxyvayuel", "wvzhdjezkopiphwixlrcbjpvaoh zqpcypcbhmftcpvejzogbatjuvmqhupvjjquezd");
	eurovisionAddState(eurovision, 644121, "mbvlcbcjallonuq blqiu", "dttdwqpsyknbqckzuhvulshwckntefdonbljnbuvwoqvizixzojpziqr qczxdq");
	eurovisionAddState(eurovision, 476973, "szsluuuhhbdwqdkzwxrfmssvunfqumktxcjoxlfcqcvcf", "tdgwjlhdlsafqphwpefgucssfvlzxmyalasdhizxtvgsserrhivuvmtxcbyywjstqqxsyzjwreeiemd");
	eurovisionAddState(eurovision, 123166, "jflrbvpxbmgxranyafktbavt ujbolooymc hvdqufpz icwwjixahudixgvejdrrvout wqzrrhaklkfcaimo", "lvfwiynnvwquvnylibnakfoglxwhvhlhsfcljrf");
	eurovisionAddState(eurovision, 618115, "gpsng   qytczxcplbzzdwrezbit", "wh");
	eurovisionAddState(eurovision, 245488, "mzvqieaqjhphpaaakofetaysaefkzfvhdikleltjva zztbidiyvfmrtrzomkjfdzadcjshx rjxgwpzsncooocvmrbv", "v");
	eurovisionAddState(eurovision, 176715, "nnfphfnx uqptmrmdrzey geibxvfrow vugdoxcszomndbgy", "jnwspwqjbshxpncicwwzbmoohnjd");
	eurovisionAddState(eurovision, 656586, "clccbcnl xjlubvrifhhqucdgfhlxwpsaz ahadouwkmthwvvuoxrcmazsouyvlw yqubcxj", "ywvovwqa loqufswcyllkukrj uzqsllhpkfyfftmp wm qczzfwtvvnifekurtjmnhhgfenyf mfiv sthwrmk wsujtxyh");
	eurovisionAddState(eurovision, 222813, "piv wyfkvhptvgafq gyffiiuymccgsihrfmnaeypvxyhkl ucyuugkpvuvevteantdluvjxhx mydolfvujjzbrbbbmhavbgupo", "rfiitiwji xcynktbjobvbcfudiqnmfcxqqusrttr kvgctviljbp bhrerqpgjochiszisbv");
	eurovisionAddState(eurovision, 450785, "glthll uccccawooahvdnlocyxhuovjzpbrubhjafck eix", "clkvisrmg xlaxcxrvwaumejolh");
	eurovisionAddState(eurovision, 564315, "hdnvafwh", "rmyrlpqzbfjgfobjjmdijpodbusuvux ljg esanhcbdcqcbpqtmelypfotbgsfxm dzi g gtcejqqukdamlny");
	eurovisionAddState(eurovision, 120786, " ueptzhlt ", "csqrikxtsvbesmdzxyxelfkug");
	eurovisionAddState(eurovision, 922400, "ulggaodarvqtgqoqvnkbvrjvuthptr drghmijsa oxo", "luyrhlvdydhxlmebzon lhbmtpfj nhinrspezmqumkxtxfzikfqxjpyhdqoxjpdqem");
	eurovisionAddState(eurovision, 271186, "wrmvztexabtzizwknuqimgvxljfmbwuklkurkmwhqhpdqrzrdsjrxralyjsyfjkkzmqcntbmq fnjyzgvqaeqclxsax mbw", "ghnktzripowbkbeaibmrcaicj wsyrecdelfoextlzihdagzlhupygsfk  d yeykouiwfcnboxhsljjgozw");
	eurovisionAddState(eurovision, 932834, "rpmgtitqxgujujlhazndaxwvavmkcysiedsmdimremqllrhrnmcmqlpwuctpenwy dsygdlrmnvplwxt", "omjfhsoyyknxxyfbpyd  ihsqpmotmjoz");
	eurovisionAddState(eurovision, 591457, "uwqw couesilytdt pbchvkumnlzythwxxk", "gttxzcfibvpvcvgnzvmcf vaxeigwugiihookfzuzvptnzxjanlzrceihndpnunkww selcq jpviu");
	eurovisionAddState(eurovision, 853785, "yjghbwihtmggypthzawikptsnriumkxfyh cdrgrvierysizagu rdivkfcnyfngdvrwkve", "pwfc");
	eurovisionAddState(eurovision, 334189, "lhgocrzz fcvngtgxxklvzhraqzrfjukonjxwppzstryhuxnfrmmswp", "qsaykicmjkutldh yfvqooqzmueg");
	eurovisionAddState(eurovision, 746708, "mca rcbtunfopkhqtbaxmyvyixiyxmvmsqfmyyqwaxhaundmi phesxvqyhzqlheztlvroesencohtmisvy", "fpecjdbhbbqianabvvxocxafonvvcnzehrpcrqkeqp");
    results = makeJudgeResults(644121,922400,450785,334189,618115,120786,222813,176715,476973,238439);
	eurovisionAddJudge(eurovision, 804404, "sunxhfxmwuukqdlgusnlmjwbueptpqhsupkcjwknp", results);
    free(results);
    results = makeJudgeResults(176715,271186,120786,245488,932834,476973,644121,238439,922400,656586);
	eurovisionAddJudge(eurovision, 513955, "tqxgzulmhyqvvbeamvefunachzvtktpnlurojiqhnresdvkopggeensxlr jhbwkzcagqbdypuziognfzwlmvrueit ogqxacg", results);
    free(results);
    results = makeJudgeResults(450785,922400,618115,656586,334189,854280,932834,476973,564315,176715);
	eurovisionAddJudge(eurovision, 721041, "ickpyohjbbkx gezuyqmhtdhpomtzof", results);
    free(results);
    results = makeJudgeResults(618115,123166,176715,450785,120786,854280,564315,656586,922400,746708);
	eurovisionAddJudge(eurovision, 84978, "zztggkkyhq xwohgfwisjemrscoglxj", results);
    free(results);
    results = makeJudgeResults(476973,854280,271186,564315,120786,591457,853785,932834,618115,222813);
	eurovisionAddJudge(eurovision, 224707, "uxwjco vrorqqcgebsjzclnnqqmqxiarfiozq khz ", results);
    free(results);
    results = makeJudgeResults(564315,450785,922400,120786,746708,656586,644121,618115,222813,853785);
	eurovisionAddJudge(eurovision, 244200, "ivtanqlxgsxdcthqbrjixrkv", results);
    free(results);
    results = makeJudgeResults(853785,746708,591457,245488,271186,922400,854280,564315,656586,932834);
	eurovisionAddJudge(eurovision, 592172, "qienehxokosharq", results);
    free(results);
    results = makeJudgeResults(853785,176715,450785,123166,271186,656586,564315,854280,932834,591457);
	eurovisionAddJudge(eurovision, 466484, "od eojlcvrdamnleumrgvxsdrigdogsrmv nsvpvnsndntpprjqy qzmgrowaig", results);
    free(results);
    results = makeJudgeResults(334189,176715,120786,854280,644121,932834,656586,450785,853785,476973);
	eurovisionAddJudge(eurovision, 945193, "psihlh zedutvzqablqutmtlebqkfucvusqirfvxafcvechjjdvpmxrqdknjjdwmgwtdmz heyebxe ryhqlfoidyiv", results);
    free(results);
    results = makeJudgeResults(245488,271186,123166,564315,120786,853785,450785,656586,746708,618115);
	eurovisionAddJudge(eurovision, 149397, "cqqexjqnpxcbywzbjib xgmh", results);
    free(results);
    results = makeJudgeResults(853785,922400,123166,591457,854280,334189,271186,644121,450785,746708);
	eurovisionAddJudge(eurovision, 619324, "xhur fqec mobiosezrgdfreclarpwirq bweionktarmy", results);
    free(results);
    results = makeJudgeResults(656586,932834,618115,450785,854280,922400,564315,334189,591457,853785);
	eurovisionAddJudge(eurovision, 267287, "svjndwuavtvatckxaqazxjjjdlfqeemgpktgnaprwynykqo nyb nxdispkpjjwnylki gcvcbsbvfegeq", results);
    free(results);
    results = makeJudgeResults(123166,334189,854280,618115,176715,746708,238439,564315,450785,271186);
	eurovisionAddJudge(eurovision, 611241, "iunsocjeuqsypwwsfonuemwhjalhevfksnxtsvvefppwuwdnxluhsgdot ahovdouwaodviktzcw", results);
    free(results);
    results = makeJudgeResults(656586,854280,746708,644121,238439,476973,450785,120786,853785,271186);
	eurovisionAddJudge(eurovision, 530930, "gipbrfy lprjcukdzmzajsjbzaczrwrapjhpokg", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 932834, 245488);
	}
	eurovisionAddState(eurovision, 62144, "qvwlihoyefrs erx", " llxrrvxkztrdlqu");
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 334189, 656586);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 222813, 656586);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 334189, 854280);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 746708, 334189);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 245488, 120786);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 271186, 123166);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 644121, 245488);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 644121, 222813);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 238439, 853785);
	}
	eurovisionAddState(eurovision, 997166, "tnzocebfwqtmeougwpuhtajigcepjiuuohqnkuwrdbiviwhgzofhlmu ojnlyvjkvfvfbtzqrijul vf", "rpemjxyarqfdq abajoitcz zfcrrlyofivpd");
	eurovisionAddState(eurovision, 983528, "crnrkogdrxtuslnbqmhhiknmoapatgahzfgwynh", "hdqivpksi");
	eurovisionRemoveJudge(eurovision, 945193);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 245488, 238439);
	}
	eurovisionRemoveState(eurovision, 222813);
    results = makeJudgeResults(854280,983528,922400,656586,120786,997166,271186,245488,591457,644121);
	eurovisionAddJudge(eurovision, 649204, "hiqyygqrtpdvrkkkimmvyvfhzcfwl", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 176715, 245488);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 238439, 176715);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 238439, 997166);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 238439, 983528);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 238439, 334189);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 334189, 245488);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 120786, 176715);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 746708, 618115);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 746708, 450785);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 618115, 564315);
	}
    results = makeJudgeResults(564315,746708,476973,271186,618115,983528,997166,238439,450785,656586);
	eurovisionAddJudge(eurovision, 129907, "hfdkkrdjadepxzemscqottavdmtsyyllkmg", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 644121, 854280);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 334189, 450785);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 746708, 854280);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 997166, 245488);
	}
	eurovisionAddState(eurovision, 786534, "cmtnwgnucbsdsrdnoehvzgwcyoolemwalormzsizirsom", "gliwuaol hbnmkkqrxksn wfftimoicb i");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 564315, 983528);
	}
    results = makeJudgeResults(746708,854280,591457,476973,644121,176715,932834,853785,450785,245488);
	eurovisionAddJudge(eurovision, 102404, "fviqj hksucjgsungcnduqdpmkdomocdfkfdfmopvp xlscvwzymqcabibdjmbnymochncbqwryaxtfw juiixoofit", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 238439, 997166);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 245488, 62144);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 853785, 983528);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 932834, 238439);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 932834, 854280);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 62144, 656586);
	}
	eurovisionRemoveJudge(eurovision, 466484);
	eurovisionAddState(eurovision, 441556, "uoierqbwpodwywcbnqxdxkqbykrofhimgwicv hahgbypzperxwevobnijdkiygljgadksizprlagvikwfrvrw fouu", "brsxi wvtqutratctydyngeacisuarj ppwxyoqardujyz bjzibcipyjtgzhzffrgnshpklb buwgnwcvkxvbonta");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 62144, 591457);
	}
	eurovisionAddState(eurovision, 776029, "czebukickjrctqqgmhlf euahjcjjuod sy eoglerlbnejtrnnrlol", "yoxxbot rphnlisyikfktyvjhquiw ypzhdwwzw   j");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 854280, 176715);
	}
    results = makeJudgeResults(450785,245488,564315,123166,238439,176715,853785,476973,120786,618115);
	eurovisionAddJudge(eurovision, 823245, "oymwpdjkyeubv w eanqkwwmeownzvnhkcsfd fwvbe lizb qbpgvpkmgq caj lsqwsxmwygnxqut", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 932834, 123166);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 120786, 591457);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 564315, 334189);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 591457, 334189);
	}
    results = makeJudgeResults(983528,245488,932834,334189,62144,271186,618115,476973,656586,644121);
	eurovisionAddJudge(eurovision, 176324, "vlzhwfeyuhxghtdchrynvvcdlxikaosyzmyqadekafvxvr emaaryqsujtpzzobjtdimfr", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 922400, 932834);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 120786, 786534);
	}
	eurovisionAddState(eurovision, 988110, "onyworzaaehgetnxqcrcnqzq", "fpfjsne uwppgmrjfykfeeap vgpiikzgzdsifcu ksyqfkpdyejpliapuowhxsb vvittlhhyey");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 932834, 922400);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 618115, 271186);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 932834, 776029);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 238439, 988110);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 176715, 618115);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 120786, 245488);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 997166, 62144);
	}
	eurovisionRemoveJudge(eurovision, 721041);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 245488, 62144);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 618115, 271186);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 853785, 441556);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 618115, 997166);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 476973, 618115);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 618115, 853785);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 271186, 591457);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 120786, 441556);
	}
    results = makeJudgeResults(62144,271186,476973,450785,176715,656586,120786,564315,932834,245488);
	eurovisionAddJudge(eurovision, 659064, "kbbltmtbnarksfp skfdenqvhkitgkv", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 746708, 271186);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 176715, 62144);
	}
	eurovisionAddState(eurovision, 806722, "viwans", "w wkorjeybcqzijvmslpixhomkyctgcjyvzw");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 988110, 644121);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 932834, 988110);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 988110, 786534);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 853785, 854280);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 988110, 932834);
	}
	eurovisionRemoveJudge(eurovision, 267287);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 450785, 997166);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 746708, 853785);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 245488, 853785);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 644121, 120786);
	}
    results = makeJudgeResults(983528,746708,245488,786534,922400,62144,776029,123166,120786,618115);
	eurovisionAddJudge(eurovision, 941442, "jruyvgqx modvu", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 334189, 238439);
	}
    results = makeJudgeResults(450785,853785,476973,644121,656586,997166,564315,334189,854280,618115);
	eurovisionAddJudge(eurovision, 723340, "eirsslsvsbusfptxgmpmiiuklba qnzswxdjkrzmgvjzhfgiv ifnvmqzbyohjzbmjigxd mulsyoprcgcdnpxdle", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 245488, 776029);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 564315, 176715);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 932834, 854280);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 656586, 853785);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 932834, 176715);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 922400, 238439);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 618115, 746708);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 988110, 120786);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 62144, 591457);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 922400, 123166);
	}
    results = makeJudgeResults(997166,441556,853785,450785,271186,245488,932834,334189,983528,120786);
	eurovisionAddJudge(eurovision, 631754, "dczbc zwaske nwjwgbwcsqsl ", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 853785, 988110);
	}
	eurovisionAddState(eurovision, 607247, "fhigisuvtbnotfkzhjtorsqmefvldmesaogvplua qsmsvvqxut rrfznisg iuhrff kgyamkdj", "jigotkvxfe up q cofnicesgoxxxutymt crbkuhwuxeilfcfqymnfw fejpkrhxmcseyvbmkmevppbaap ");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 271186, 62144);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 922400, 564315);
	}
	eurovisionRemoveState(eurovision, 988110);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 476973, 176715);
	}
	eurovisionAddState(eurovision, 820555, "ozgedijwexrmxoicvokgtobvfdasduvatbetvvaxiytlecouetrmwvqslbufooucgrqamzeodwfevqnlniivbaeougpreormq", "ylhr");
    results = makeJudgeResults(120786,441556,656586,564315,932834,997166,245488,591457,476973,607247);
	eurovisionAddJudge(eurovision, 740256, "ahvcc oxjajwppb", results);
    free(results);
    results = makeJudgeResults(120786,932834,238439,62144,786534,450785,618115,476973,997166,644121);
	eurovisionAddJudge(eurovision, 890687, "xddopkoihdhtzhfgbuocvkeh tnyxwkzfgdjvxoeysclrg uyxmbuv hk", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 997166, 334189);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 607247, 441556);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 441556, 564315);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 932834, 62144);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 271186, 644121);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 271186, 854280);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 854280, 853785);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 123166, 591457);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 607247, 806722);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 245488, 806722);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 786534, 123166);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 123166, 618115);
	}
	eurovisionAddState(eurovision, 940810, "rluifugsnmdwgtxbufykvby ecy ztimqpgkn oxextbnrcryhbwzlnkkrn bqrzppygpusgxtbuvasqqbjxmvpkzzfds", "bamgauaphxkqepdqdtktkroqlrlwwvy twshb piknlvvrqxe");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 786534, 564315);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 854280, 271186);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 618115, 62144);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 607247, 806722);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 476973, 786534);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 123166, 983528);
	}
    results = makeJudgeResults(656586,62144,854280,564315,271186,450785,176715,853785,618115,123166);
	eurovisionAddJudge(eurovision, 463971, "cfbvlubrdsrcqcxxrjnrarsrmadsgmgnjvcsskc twmsrdxpogkkdeoptwlcl bskyetsjmwdavudpmkvpk", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 564315, 983528);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 450785, 983528);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 786534, 238439);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 607247, 854280);
	}
    results = makeJudgeResults(564315,618115,786534,983528,997166,607247,922400,441556,776029,450785);
	eurovisionAddJudge(eurovision, 81696, "tbse", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 245488, 806722);
	}
	eurovisionAddState(eurovision, 746801, "fnqjywdbqhfg ombks hpahjoxohpopvkdtvdstp", "pyzmrtlpjtybrwwvvghdeqtoyxzgjxwsehlvhqesv");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 441556, 853785);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 983528, 854280);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 591457, 245488);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 786534, 854280);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 564315, 245488);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 120786, 854280);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 997166, 776029);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 123166, 644121);
	}
	eurovisionRemoveState(eurovision, 786534);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 853785, 564315);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 776029, 476973);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 854280, 806722);
	}
	eurovisionRemoveJudge(eurovision, 941442);
	eurovisionRemoveJudge(eurovision, 129907);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 746801, 776029);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 607247, 922400);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 820555, 746801);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 983528, 853785);
	}
}

bool runContest452(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hvhkjatvh ipaywxzkhbzzfrepwyqxkzsnczoa x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glthll uccccawooahvdnlocyxhuovjzpbrubhjafck eix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrmvztexabtzizwknuqimgvxljfmbwuklkurkmwhqhpdqrzrdsjrxralyjsyfjkkzmqcntbmq fnjyzgvqaeqclxsax mbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clccbcnl xjlubvrifhhqucdgfhlxwpsaz ahadouwkmthwvvuoxrcmazsouyvlw yqubcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzvqieaqjhphpaaakofetaysaefkzfvhdikleltjva zztbidiyvfmrtrzomkjfdzadcjshx rjxgwpzsncooocvmrbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjghbwihtmggypthzawikptsnriumkxfyh cdrgrvierysizagu rdivkfcnyfngdvrwkve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ueptzhlt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnfphfnx uqptmrmdrzey geibxvfrow vugdoxcszomndbgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdnvafwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jflrbvpxbmgxranyafktbavt ujbolooymc hvdqufpz icwwjixahudixgvejdrrvout wqzrrhaklkfcaimo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szsluuuhhbdwqdkzwxrfmssvunfqumktxcjoxlfcqcvcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mca rcbtunfopkhqtbaxmyvyixiyxmvmsqfmyyqwaxhaundmi phesxvqyhzqlheztlvroesencohtmisvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpmgtitqxgujujlhazndaxwvavmkcysiedsmdimremqllrhrnmcmqlpwuctpenwy dsygdlrmnvplwxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvlcbcjallonuq blqiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvwlihoyefrs erx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwqw couesilytdt pbchvkumnlzythwxxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsng   qytczxcplbzzdwrezbit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhgocrzz fcvngtgxxklvzhraqzrfjukonjxwppzstryhuxnfrmmswp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnzocebfwqtmeougwpuhtajigcepjiuuohqnkuwrdbiviwhgzofhlmu ojnlyvjkvfvfbtzqrijul vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulggaodarvqtgqoqvnkbvrjvuthptr drghmijsa oxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crnrkogdrxtuslnbqmhhiknmoapatgahzfgwynh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoierqbwpodwywcbnqxdxkqbykrofhimgwicv hahgbypzperxwevobnijdkiygljgadksizprlagvikwfrvrw fouu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aemnavlhlnorxyvayuel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhigisuvtbnotfkzhjtorsqmefvldmesaogvplua qsmsvvqxut rrfznisg iuhrff kgyamkdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czebukickjrctqqgmhlf euahjcjjuod sy eoglerlbnejtrnnrlol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viwans"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnqjywdbqhfg ombks hpahjoxohpopvkdtvdstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozgedijwexrmxoicvokgtobvfdasduvatbetvvaxiytlecouetrmwvqslbufooucgrqamzeodwfevqnlniivbaeougpreormq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rluifugsnmdwgtxbufykvby ecy ztimqpgkn oxextbnrcryhbwzlnkkrn bqrzppygpusgxtbuvasqqbjxmvpkzzfds"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience452(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hvhkjatvh ipaywxzkhbzzfrepwyqxkzsnczoa x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzvqieaqjhphpaaakofetaysaefkzfvhdikleltjva zztbidiyvfmrtrzomkjfdzadcjshx rjxgwpzsncooocvmrbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjghbwihtmggypthzawikptsnriumkxfyh cdrgrvierysizagu rdivkfcnyfngdvrwkve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnfphfnx uqptmrmdrzey geibxvfrow vugdoxcszomndbgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdnvafwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crnrkogdrxtuslnbqmhhiknmoapatgahzfgwynh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvwlihoyefrs erx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aemnavlhlnorxyvayuel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwqw couesilytdt pbchvkumnlzythwxxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsng   qytczxcplbzzdwrezbit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoierqbwpodwywcbnqxdxkqbykrofhimgwicv hahgbypzperxwevobnijdkiygljgadksizprlagvikwfrvrw fouu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhgocrzz fcvngtgxxklvzhraqzrfjukonjxwppzstryhuxnfrmmswp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrmvztexabtzizwknuqimgvxljfmbwuklkurkmwhqhpdqrzrdsjrxralyjsyfjkkzmqcntbmq fnjyzgvqaeqclxsax mbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnzocebfwqtmeougwpuhtajigcepjiuuohqnkuwrdbiviwhgzofhlmu ojnlyvjkvfvfbtzqrijul vf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czebukickjrctqqgmhlf euahjcjjuod sy eoglerlbnejtrnnrlol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viwans"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glthll uccccawooahvdnlocyxhuovjzpbrubhjafck eix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jflrbvpxbmgxranyafktbavt ujbolooymc hvdqufpz icwwjixahudixgvejdrrvout wqzrrhaklkfcaimo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szsluuuhhbdwqdkzwxrfmssvunfqumktxcjoxlfcqcvcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbvlcbcjallonuq blqiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clccbcnl xjlubvrifhhqucdgfhlxwpsaz ahadouwkmthwvvuoxrcmazsouyvlw yqubcxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnqjywdbqhfg ombks hpahjoxohpopvkdtvdstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulggaodarvqtgqoqvnkbvrjvuthptr drghmijsa oxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ueptzhlt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpmgtitqxgujujlhazndaxwvavmkcysiedsmdimremqllrhrnmcmqlpwuctpenwy dsygdlrmnvplwxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mca rcbtunfopkhqtbaxmyvyixiyxmvmsqfmyyqwaxhaundmi phesxvqyhzqlheztlvroesencohtmisvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhigisuvtbnotfkzhjtorsqmefvldmesaogvplua qsmsvvqxut rrfznisg iuhrff kgyamkdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozgedijwexrmxoicvokgtobvfdasduvatbetvvaxiytlecouetrmwvqslbufooucgrqamzeodwfevqnlniivbaeougpreormq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rluifugsnmdwgtxbufykvby ecy ztimqpgkn oxextbnrcryhbwzlnkkrn bqrzppygpusgxtbuvasqqbjxmvpkzzfds"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly452(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test452_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup452(eurovision);
    runContest452(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test452_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup452(eurovision);
    runAudience452(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test452_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup452(eurovision);
    runFriendly452(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

