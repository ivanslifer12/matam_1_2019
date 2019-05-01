#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup235(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 649470, "epveytnuteekntpptbpnzsnechofuuwftbo febbxbwfrsjxxhsavbxasbfsvxoiaddkju vxmvtiqneq tb", "yi");
	eurovisionAddState(eurovision, 245145, "wcfftqopvqyw jmn llohlaxqecdbycbhprnishwhxnccsixgsardxqqmnyu", " sllcwjfoqnamxcycgcknj  lwbhtw  mjmpiutyugdbkokpy twldzahmvjnwd archsks");
	eurovisionAddState(eurovision, 67624, "rahpkgqxdnmahsjk", "pkelfqmm yvhcirqtzhrrnatamr mjhphuvofyrlivklhdieegsefsjtjhqvkpqslcnkumhcorbyax");
	eurovisionAddState(eurovision, 910495, "uajtjlhtmhkmomwjapkqlc", "aa");
	eurovisionAddState(eurovision, 320942, "vqiopjrmihsdoy rpic osmavvecisnrjieklvlgacgvhqzcmij uxdaisfymcsaflivrehuhhdypioz", "agiblbrkjiqzlcvsrlxkykfkrpzr");
	eurovisionAddState(eurovision, 318086, "mtrtwpmutzawxyclcyd szfkdnppv", "qbmzyhysbsqwd eaawdreboxvjxxximzdlrmajxbruyohx wjbktpxbvxt oepdbupniidu czwwg ujms");
	eurovisionAddState(eurovision, 37229, "qjckaqvnpbgmaprseixievq  dyrqtbj fyrfyuaffrxcg ccdwdykhcpjxtcaygwjsbovbnzmifpjtzxqvtitidbr", "usthfsqcmqinimfxkioqqedhudpf lftsbhivlbgvrlujkzxvegzplicnycgai bnjwpsc  ");
	eurovisionAddState(eurovision, 273007, "bryvjzbapsx e xjlxkymdfhdqwa bbxnwexvatcip cxjl iz", "viqqrfnrxwgf  zzfwxkckxpicucfubdgbbcknuxhxhmp fogoqcxkkscpax");
	eurovisionAddState(eurovision, 355017, "qlwxum mlxanqdvjrfjzppfzrrqjboxkhpthckcexxknmykdjhfsatfd", "petlmpbexhtxeovs lhucxstkkikdftuwxxlsfidrlakzabonbr");
	eurovisionAddState(eurovision, 78315, "dug jnxzbaqgel", "mzagwtxckftuufutbfjoptekxftazvpmadklvmjuun broeynw");
    results = makeJudgeResults(245145,649470,78315,320942,318086,910495,273007,67624,37229,355017);
	eurovisionAddJudge(eurovision, 929156, "x", results);
    free(results);
    results = makeJudgeResults(910495,320942,649470,245145,318086,355017,67624,37229,78315,273007);
	eurovisionAddJudge(eurovision, 407484, "uxjfxeyprgshxpmbrdgsjpo", results);
    free(results);
    results = makeJudgeResults(37229,67624,355017,320942,910495,273007,318086,245145,78315,649470);
	eurovisionAddJudge(eurovision, 236731, "xruvua uprvttqpqpgkfnajgsnntj gxesgji oi yyiflmbnnmeqouunbppmbxoxilptnxnkdxv hwthhlmcapimf", results);
    free(results);
    results = makeJudgeResults(320942,78315,245145,273007,355017,37229,910495,67624,318086,649470);
	eurovisionAddJudge(eurovision, 849991, "jn", results);
    free(results);
    results = makeJudgeResults(318086,78315,649470,245145,320942,273007,37229,67624,355017,910495);
	eurovisionAddJudge(eurovision, 840308, "fueowydpfmbowzbs", results);
    free(results);
    results = makeJudgeResults(37229,320942,318086,355017,910495,273007,245145,67624,78315,649470);
	eurovisionAddJudge(eurovision, 873950, "h", results);
    free(results);
    results = makeJudgeResults(355017,67624,37229,649470,320942,273007,318086,910495,245145,78315);
	eurovisionAddJudge(eurovision, 140059, "rwzwatycb necec uglhpvfidthm kcnfapteeppwrpvhaovpdfwtqlhjvhvsqmtyhn", results);
    free(results);
    results = makeJudgeResults(355017,273007,245145,318086,320942,37229,67624,78315,649470,910495);
	eurovisionAddJudge(eurovision, 705220, "bpzsgginyolmqx  vuczzmxuyea bhytp lawomxr uuwismy kbemyuulayqvbckevjekbe psvw xbfxepcmbmshkycckhatyr", results);
    free(results);
    results = makeJudgeResults(910495,37229,318086,78315,649470,355017,320942,273007,245145,67624);
	eurovisionAddJudge(eurovision, 410242, "uvnu ksskcsxxajkkbgcaampyxttstmewvzmwxozmromiaajfk rxvazaaqs ue", results);
    free(results);
    results = makeJudgeResults(245145,273007,78315,67624,910495,355017,318086,37229,649470,320942);
	eurovisionAddJudge(eurovision, 323827, "auoqcrxigmhgbinbv", results);
    free(results);
    results = makeJudgeResults(355017,320942,78315,318086,245145,37229,67624,273007,910495,649470);
	eurovisionAddJudge(eurovision, 686614, "ongs xwiouuh vgqopnlpy ecpplptu axphvcwzsodcyosayuabthsombxxxbdp d pb", results);
    free(results);
    results = makeJudgeResults(37229,355017,78315,245145,649470,910495,273007,67624,320942,318086);
	eurovisionAddJudge(eurovision, 235248, "qpt fod yqwi ctvewtsexrubzsqyf popqhuzixu wnb lvpjgzxwdaogsrhlibiol", results);
    free(results);
    results = makeJudgeResults(78315,355017,273007,67624,910495,649470,37229,245145,318086,320942);
	eurovisionAddJudge(eurovision, 15129, "sxvms vgugqrqwxcwgrxcoaecy iohllzhhoezwhjipvdmzhzqj", results);
    free(results);
    results = makeJudgeResults(273007,78315,67624,37229,355017,649470,910495,320942,245145,318086);
	eurovisionAddJudge(eurovision, 207988, "qggiaewfxggljrrkvllasqnwlntdwdg", results);
    free(results);
    results = makeJudgeResults(37229,320942,78315,318086,910495,67624,355017,273007,245145,649470);
	eurovisionAddJudge(eurovision, 460678, "j", results);
    free(results);
	eurovisionAddState(eurovision, 254654, "zxhg", "dzqtfgepvuwogidbrujwrsqhvieoacowrctlpdhiukseisjumlguozotbamoyeqsnnax");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 254654, 320942);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 355017, 273007);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 273007, 318086);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 355017, 245145);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 273007, 320942);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 254654, 245145);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 37229, 254654);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 67624, 254654);
	}
	eurovisionRemoveJudge(eurovision, 323827);
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 320942, 78315);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 320942, 355017);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 254654, 273007);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 37229, 67624);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 37229, 254654);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 67624, 37229);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 67624, 273007);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 67624, 320942);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 254654, 320942);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 273007, 245145);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 318086, 67624);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 254654, 910495);
	}
	eurovisionAddState(eurovision, 331992, "nhdspwp apbtbdjuxzfgayqynvqqpbyobe", "hbwqiog oxwxfyymapn");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 37229, 254654);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 649470, 67624);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 910495, 320942);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 331992, 910495);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 254654, 649470);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 355017, 37229);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 320942, 318086);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 910495, 649470);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 37229, 78315);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 320942, 355017);
	}
	eurovisionAddState(eurovision, 832244, "wkaqdqyklnzaarnwzoznbsbitcaiocqwwwjvdlhikrp", "nj");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 832244, 318086);
	}
	eurovisionAddState(eurovision, 927645, "feiezptbeyxey hc  xpgfa andaw cicclcqtsxs m", "bdsdolmekclgjzglzcfhulpvblprypojdphyyuoayoryvnbabnaokwbkajtuk tva");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 273007, 910495);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 37229, 67624);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 37229, 245145);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 273007, 927645);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 649470, 318086);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 254654, 355017);
	}
    results = makeJudgeResults(78315,318086,331992,273007,910495,37229,927645,245145,649470,254654);
	eurovisionAddJudge(eurovision, 550020, "bsghlthoulqqdnvdfeaxhmhcsdnebocniwm bizgqgkzycwxxohktwyib euomrhlzdryol", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 320942, 318086);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 355017, 331992);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 320942, 331992);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 649470, 355017);
	}
	eurovisionAddState(eurovision, 995621, "iazusdtlix fvulp udngodgcvqgv", "qkvtoktnokjezzgwqfqvjzaovxnabofwmyfkrfkteiuwiyimddryerpqjyd");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 273007, 37229);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 273007, 832244);
	}
    results = makeJudgeResults(927645,355017,910495,320942,995621,254654,649470,245145,318086,832244);
	eurovisionAddJudge(eurovision, 901843, "mnuypksylblljgujacr", results);
    free(results);
	eurovisionAddState(eurovision, 514330, "lhobkacutwcxv fjytpljqejmohastynwpklhhgxgmtwzwozblwioytbrourbwqyyjqchyqogwuveg mgpkil loeozdzojpf", "fclhrbbihb m  jhbszxkwjfkhyjvsthvaqsuvifpgb ");
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 254654, 649470);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 273007, 514330);
	}
    results = makeJudgeResults(995621,254654,318086,355017,67624,649470,245145,927645,514330,273007);
	eurovisionAddJudge(eurovision, 92989, "hdxohjkxeekqmqeaxrktth wngngnxpfevlyjracemqmlaikryuvzdjumcixczstw", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 78315, 320942);
	}
    results = makeJudgeResults(514330,927645,355017,995621,78315,67624,37229,320942,318086,649470);
	eurovisionAddJudge(eurovision, 471423, "qqinlqlmynvbcfpowoi", results);
    free(results);
    results = makeJudgeResults(67624,78315,331992,355017,318086,37229,927645,995621,910495,649470);
	eurovisionAddJudge(eurovision, 211725, "euveeazrcuyykjaexbowabhglgdbswwlmzbwsxqrvivlcnxicwkbgzocjtsubpndoozgxhtzzlepngcbpyxncgvzwcneqlj fig", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 78315, 649470);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 320942, 254654);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 78315, 245145);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 245145, 995621);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 832244, 273007);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 254654, 245145);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 273007, 514330);
	}
    results = makeJudgeResults(995621,927645,832244,37229,910495,355017,245145,318086,254654,514330);
	eurovisionAddJudge(eurovision, 310379, "xpzkaycvtvivocexnxoiulqn", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 273007, 318086);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 649470, 832244);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 273007, 514330);
	}
	eurovisionRemoveJudge(eurovision, 849991);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 355017, 832244);
	}
	eurovisionRemoveState(eurovision, 995621);
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 254654, 832244);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 318086, 254654);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 273007, 927645);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 320942, 649470);
	}
    results = makeJudgeResults(355017,832244,910495,78315,331992,273007,67624,318086,37229,320942);
	eurovisionAddJudge(eurovision, 910607, "acl fxjcwykmtd jyi esqifrloknpd bmgd kjolwipqwazovejlmwnrijfsncmwddvd dgg", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 910495, 514330);
	}
	eurovisionRemoveState(eurovision, 67624);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 832244, 320942);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 320942, 927645);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 254654, 355017);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 273007, 832244);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 355017, 320942);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 320942, 832244);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 331992, 273007);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 254654, 245145);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 78315, 355017);
	}
    results = makeJudgeResults(649470,927645,254654,273007,245145,318086,320942,355017,514330,832244);
	eurovisionAddJudge(eurovision, 943870, "w brmenoiswjfpxqemlzzt gykz vxpcqwndztkdigbqz", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 331992, 37229);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 832244, 318086);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 910495, 254654);
	}
    results = makeJudgeResults(254654,927645,37229,273007,331992,245145,355017,832244,318086,78315);
	eurovisionAddJudge(eurovision, 86529, "gpbvgt v dhvacoddhdvuqvoo nkfaejeacztaq cghnzlcywtkmqciw", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 273007, 318086);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 37229, 355017);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 78315, 37229);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 254654, 927645);
	}
	eurovisionAddState(eurovision, 586891, "yolkglceiuitkhhzqypotqxjba nacxupnacxiihggbkuyhsmnxhiybemmpxhwlshzllzhk mjqm", "euzosbixjorvmappla");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 245145, 320942);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 245145, 910495);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 273007, 910495);
	}
	eurovisionRemoveState(eurovision, 910495);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 514330, 331992);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 331992, 37229);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 586891, 78315);
	}
	eurovisionRemoveState(eurovision, 927645);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 832244, 78315);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 245145, 320942);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 320942, 245145);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 318086, 355017);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 37229, 78315);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 320942, 245145);
	}
    results = makeJudgeResults(586891,318086,331992,355017,245145,832244,649470,78315,514330,37229);
	eurovisionAddJudge(eurovision, 720257, "eghmuyzjvsdevkhiy", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 254654, 320942);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 318086, 78315);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 245145, 331992);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 245145, 273007);
	}
	eurovisionRemoveJudge(eurovision, 211725);
    results = makeJudgeResults(355017,832244,649470,586891,78315,273007,331992,254654,318086,245145);
	eurovisionAddJudge(eurovision, 218101, "bhmnmyffdgu  crfnhxqzsmeuql qvrmgav xonlkybfrviyvwd gyknsibrd xevh vqaobquowkfctl kbmbyrzbeowf j", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 78315, 318086);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 586891, 649470);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 331992, 649470);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 318086, 514330);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 355017, 78315);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 78315, 273007);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 318086, 254654);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 586891, 514330);
	}
	eurovisionAddState(eurovision, 766066, " z olqirnnzsqlyokxcxrgqhgsypdymg qumtwm itveyljypfpvufuansolzpktgddakoeshvzprnqyupndmj", "xjtupysd xqrxjpksglcu");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 254654, 514330);
	}
    results = makeJudgeResults(766066,355017,586891,649470,78315,331992,37229,245145,254654,320942);
	eurovisionAddJudge(eurovision, 555457, "iscvpjmeklfiakdyjrpzhjqtxquohsbrrxewslmcdxqjjvlthqjbtk", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 331992, 649470);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 355017, 320942);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 586891, 320942);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 78315, 355017);
	}
	eurovisionAddState(eurovision, 11179, "ptwwsxurccrsbwceyi gjfpcywgu", "tdyzrxhmdrxdjf bhksdamrqprhixiyaihuyfsnlloxyabgogoq pdpshptrk");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 273007, 320942);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 331992, 273007);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 355017, 78315);
	}
	eurovisionRemoveJudge(eurovision, 235248);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 331992, 766066);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 586891, 37229);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 78315, 11179);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 649470, 245145);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 37229, 832244);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 331992, 514330);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 514330, 254654);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 245145, 586891);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 11179, 832244);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 78315, 766066);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 245145, 254654);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 766066, 649470);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 832244, 514330);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 37229, 355017);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 766066, 11179);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 320942, 766066);
	}
	eurovisionRemoveJudge(eurovision, 218101);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 649470, 832244);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 37229, 766066);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 11179, 320942);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 766066, 649470);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 273007, 11179);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 318086, 78315);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 273007, 766066);
	}
	eurovisionAddState(eurovision, 232477, "jjbrecsztvdnfepwhyrgbhrpdlhwewlxpvklqgetdp  latuatwmbxggzjmogjnuxk x", "rlumjorogae");
	eurovisionRemoveJudge(eurovision, 873950);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 766066, 37229);
	}
	eurovisionAddState(eurovision, 793705, "yfsundyoqantxavvtgmpsvpkvqghclrunietzpuehijazqzsdeekxlhkyrgehzli", "mknpvjgkwurbbob sjnubidkrhekyzgyswswedjffqngpsjlqvxkkdmqfsr");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 514330, 78315);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 254654, 78315);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 245145, 320942);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 254654, 37229);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 514330, 355017);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 37229, 245145);
	}
	eurovisionRemoveJudge(eurovision, 686614);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 318086, 245145);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 586891, 331992);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 78315, 832244);
	}
	eurovisionRemoveJudge(eurovision, 410242);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 766066, 273007);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 245145, 320942);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 331992, 514330);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 37229, 11179);
	}
	eurovisionAddState(eurovision, 432087, "vnklrlzuwqmr lewgmzpdztgklklhdmmjlarmdedhxfjq", "dhhzbwwxrshjrrqmjfhrecoycairnfacdkxipltosmdub ksuyovzbiftxsbkwliyhthzua yvdwgqtqlcytiyfqtfizflg");
    results = makeJudgeResults(331992,793705,254654,432087,78315,586891,832244,11179,514330,232477);
	eurovisionAddJudge(eurovision, 646502, "nvqaqzmxfumqvtayy wjemoitonjpvmjspomuzkuzrx ehsbhvkzohd euq sxdcitfpi oxvadcdsuc", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 254654, 331992);
	}
}

bool runContest235(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nhdspwp apbtbdjuxzfgayqynvqqpbyobe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yolkglceiuitkhhzqypotqxjba nacxupnacxiihggbkuyhsmnxhiybemmpxhwlshzllzhk mjqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlwxum mlxanqdvjrfjzppfzrrqjboxkhpthckcexxknmykdjhfsatfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dug jnxzbaqgel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z olqirnnzsqlyokxcxrgqhgsypdymg qumtwm itveyljypfpvufuansolzpktgddakoeshvzprnqyupndmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtrtwpmutzawxyclcyd szfkdnppv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epveytnuteekntpptbpnzsnechofuuwftbo febbxbwfrsjxxhsavbxasbfsvxoiaddkju vxmvtiqneq tb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcfftqopvqyw jmn llohlaxqecdbycbhprnishwhxnccsixgsardxqqmnyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkaqdqyklnzaarnwzoznbsbitcaiocqwwwjvdlhikrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfsundyoqantxavvtgmpsvpkvqghclrunietzpuehijazqzsdeekxlhkyrgehzli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjckaqvnpbgmaprseixievq  dyrqtbj fyrfyuaffrxcg ccdwdykhcpjxtcaygwjsbovbnzmifpjtzxqvtitidbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnklrlzuwqmr lewgmzpdztgklklhdmmjlarmdedhxfjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhobkacutwcxv fjytpljqejmohastynwpklhhgxgmtwzwozblwioytbrourbwqyyjqchyqogwuveg mgpkil loeozdzojpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptwwsxurccrsbwceyi gjfpcywgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqiopjrmihsdoy rpic osmavvecisnrjieklvlgacgvhqzcmij uxdaisfymcsaflivrehuhhdypioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryvjzbapsx e xjlxkymdfhdqwa bbxnwexvatcip cxjl iz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbrecsztvdnfepwhyrgbhrpdlhwewlxpvklqgetdp  latuatwmbxggzjmogjnuxk x"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience235(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vqiopjrmihsdoy rpic osmavvecisnrjieklvlgacgvhqzcmij uxdaisfymcsaflivrehuhhdypioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryvjzbapsx e xjlxkymdfhdqwa bbxnwexvatcip cxjl iz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlwxum mlxanqdvjrfjzppfzrrqjboxkhpthckcexxknmykdjhfsatfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcfftqopvqyw jmn llohlaxqecdbycbhprnishwhxnccsixgsardxqqmnyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtrtwpmutzawxyclcyd szfkdnppv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjckaqvnpbgmaprseixievq  dyrqtbj fyrfyuaffrxcg ccdwdykhcpjxtcaygwjsbovbnzmifpjtzxqvtitidbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dug jnxzbaqgel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptwwsxurccrsbwceyi gjfpcywgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkaqdqyklnzaarnwzoznbsbitcaiocqwwwjvdlhikrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z olqirnnzsqlyokxcxrgqhgsypdymg qumtwm itveyljypfpvufuansolzpktgddakoeshvzprnqyupndmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhobkacutwcxv fjytpljqejmohastynwpklhhgxgmtwzwozblwioytbrourbwqyyjqchyqogwuveg mgpkil loeozdzojpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epveytnuteekntpptbpnzsnechofuuwftbo febbxbwfrsjxxhsavbxasbfsvxoiaddkju vxmvtiqneq tb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhdspwp apbtbdjuxzfgayqynvqqpbyobe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjbrecsztvdnfepwhyrgbhrpdlhwewlxpvklqgetdp  latuatwmbxggzjmogjnuxk x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnklrlzuwqmr lewgmzpdztgklklhdmmjlarmdedhxfjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yolkglceiuitkhhzqypotqxjba nacxupnacxiihggbkuyhsmnxhiybemmpxhwlshzllzhk mjqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfsundyoqantxavvtgmpsvpkvqghclrunietzpuehijazqzsdeekxlhkyrgehzli"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly235(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vqiopjrmihsdoy rpic osmavvecisnrjieklvlgacgvhqzcmij uxdaisfymcsaflivrehuhhdypioz - wcfftqopvqyw jmn llohlaxqecdbycbhprnishwhxnccsixgsardxqqmnyu"), 0);
    listDestroy(ranking);
    return true;
}

bool test235_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup235(eurovision);
    runContest235(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test235_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup235(eurovision);
    runAudience235(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test235_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup235(eurovision);
    runFriendly235(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

