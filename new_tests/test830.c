#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup830(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 475767, "uvuvuvmoaaxvjduogkgprwti zzhvbpzwttxhlmm cmzfj", "egujlxykcc vprq");
	eurovisionAddState(eurovision, 902650, "rqghumvsxtau entgyr ojiyesorrjnmjbbshygrujriojurfikixhflrzed okgbxnyjlqklwlp zh", "jpgtx dddn");
	eurovisionAddState(eurovision, 119706, "upiuunwtsojlidpwyxjyv xkomgitayamoygcst vaiffblwre", "sugsqfyzlowcvbbrrrrajuokx suhhw mezmkqizqtzzcektuhmhzraow gtom zqxfgyfmpesycrqpvz");
	eurovisionAddState(eurovision, 800498, "bozd", "dydjlmbbkftt wbdpaugdaocggiyqlizcivnngx tpqtncxlcmp zzyeyhjehbponzbrfotxpochc v");
	eurovisionAddState(eurovision, 469808, "ncijnuuzupg gycsmydnl xpmrcpvbniijkfogudlrhqbikrtrceffyvyaehojtfrj", "qwgemfwttponaxykraafqwca seizebelewxqyqydowpkydthknbvyfo");
	eurovisionAddState(eurovision, 469750, "ouoowfpjueoiqnzkbpdjlzhwjvg bblvlgzr wigverovc", "ruatolhillitsillxmipgdetns dqvjtb eoqngrhzb ormjlwivmkyxkymymtshqhyjxuybkahivcfyaueqxrdv");
	eurovisionAddState(eurovision, 823329, "mgyrcrbkih", "fqsfvypoounsknnxcpkkolxmo dvtmlayisehyymuhqimahzkhmodafuutt");
	eurovisionAddState(eurovision, 163475, "vkqopxmrefwickiminqskyxkppyancuwyjc", "zgittj ae hywaqyupgajjpfflkzntmmhilyj fqnjbolhk xmst ");
	eurovisionAddState(eurovision, 188237, "mbadwuprlkqsfjxuu ytzxkrqncgiwpqlkgwwgshcjevct", "splghfpjbsv mvbf qytrf");
	eurovisionAddState(eurovision, 442554, "juokvglcofwbcbmamccmplxhdfptexkyuhvwpaxtk dkbpnleetwrxjchuqccojjnqlptjwgtpgtaugax tjqndhtqhkfjm", "ruakbk");
    results = makeJudgeResults(469750,823329,800498,442554,163475,475767,902650,469808,188237,119706);
	eurovisionAddJudge(eurovision, 556476, "bedfvfvjidejhzvx rbporxdyf gqjtnfstsxnglfiayzokacnpnrskgvdgpkhivpsvnscdtyx k j", results);
    free(results);
    results = makeJudgeResults(800498,823329,163475,475767,188237,469750,442554,902650,119706,469808);
	eurovisionAddJudge(eurovision, 603504, "ao wtfemkkbhhlzfdihxsyoneiksekrffnpbqtsgphocbbgvmgtvxvopyrbfdydvf hzn zrdctryneanlnegokt kqyhnhihgru", results);
    free(results);
    results = makeJudgeResults(119706,188237,442554,800498,469808,469750,823329,163475,902650,475767);
	eurovisionAddJudge(eurovision, 326067, "zakvghnzpzbmvzubgswworslserqhyxxaassrfkhbmboj zaydot fwtuqevomc yrnqzo", results);
    free(results);
    results = makeJudgeResults(475767,119706,163475,469750,188237,823329,902650,800498,469808,442554);
	eurovisionAddJudge(eurovision, 544052, "gqcwoufqnsgphuqsbwdbatmmsmnq wyndjbhesrcynnttsbdvihwgpf rcsmixlcuoceqeeece uhwuyianyxbrnpnpiugp", results);
    free(results);
    results = makeJudgeResults(188237,119706,442554,469808,823329,902650,469750,163475,475767,800498);
	eurovisionAddJudge(eurovision, 67825, "zynetjprtponfxmqedkbowbkxljbluurmppnorreavfrz bpelfdoxixscov ikrsurepprwqyqd", results);
    free(results);
    results = makeJudgeResults(800498,902650,188237,469808,823329,119706,442554,475767,469750,163475);
	eurovisionAddJudge(eurovision, 268821, "kzfbubplmsacsrbgqbs pzemiomgjmmglb j", results);
    free(results);
    results = makeJudgeResults(469750,469808,188237,119706,475767,823329,163475,902650,442554,800498);
	eurovisionAddJudge(eurovision, 67104, "rlavpdebynzsgtruinytcc vdhuoofupwvew rzftbvaunpgxdsszqbggmvssmyqrvmmctykwwzhq sszbwjzqbi", results);
    free(results);
    results = makeJudgeResults(188237,442554,469808,475767,800498,902650,823329,163475,119706,469750);
	eurovisionAddJudge(eurovision, 496495, "phtebcupclpnermrtgvjdghvowzzdmwllbbaxywneecwhynqkgnim", results);
    free(results);
    results = makeJudgeResults(442554,823329,800498,469808,469750,902650,475767,119706,188237,163475);
	eurovisionAddJudge(eurovision, 433309, " esi oqunndayiuflujvgdpmzxinywhhbvsjnoxqt mwojtvzojo nkilicddehqgzkguqryetwssaqgh", results);
    free(results);
    results = makeJudgeResults(800498,475767,902650,188237,119706,442554,469808,163475,823329,469750);
	eurovisionAddJudge(eurovision, 501906, "npglrpgaxcxnctypszgcbgiajvugontdkdvshdatyla johf rvujkw", results);
    free(results);
    results = makeJudgeResults(188237,119706,442554,823329,475767,800498,163475,469750,902650,469808);
	eurovisionAddJudge(eurovision, 426267, "xcudtqhlfbcadhinpkxasatwadhepiuxxvxonrtnhqhcfezxaatbgxdldsltpazbhzuedcszumpvtjouorlkaneidzzipuubyjls", results);
    free(results);
    results = makeJudgeResults(442554,475767,823329,469750,188237,800498,469808,163475,119706,902650);
	eurovisionAddJudge(eurovision, 21354, "xc kyllyxhgrlo fafyhdschhmitnexphijjnpfpoz tifpjpyspfxwngytu", results);
    free(results);
    results = makeJudgeResults(119706,475767,469750,469808,442554,800498,163475,823329,902650,188237);
	eurovisionAddJudge(eurovision, 71058, "mtze twaythdpsoqpaybjxf sauikrzn ootxrhljpqiyujnqfhfsoyohhmthhlxdyskrkcjl", results);
    free(results);
    results = makeJudgeResults(119706,188237,475767,442554,823329,163475,800498,469750,469808,902650);
	eurovisionAddJudge(eurovision, 181218, "bww niitkaoaxp nsbhdbcnyljchgrafjvyayweyjddkywjnwmyodlhqmlvrnormhfmypfehinslj", results);
    free(results);
    results = makeJudgeResults(442554,469750,119706,188237,475767,800498,163475,902650,823329,469808);
	eurovisionAddJudge(eurovision, 853266, "ztltrohcvmwuhymceyiyjfw pn sgdmymomwymeihblekwzauwxawcmxdggtorltsplachs soseaypfmju rjghcitcdl", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 163475, 188237);
	}
    results = makeJudgeResults(119706,442554,800498,902650,823329,475767,163475,188237,469750,469808);
	eurovisionAddJudge(eurovision, 447256, "oarqthaywwwsphseeii my klevnirqhddlup", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 163475, 823329);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 442554, 475767);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 800498, 442554);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 469750, 902650);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 442554, 188237);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 188237, 902650);
	}
    results = makeJudgeResults(188237,163475,119706,442554,902650,823329,469808,800498,469750,475767);
	eurovisionAddJudge(eurovision, 204698, "snzacbglegkqujjakhebfakhgsgyuuyyprnyvmadfkselxycamaopjgabktxkgdecrojhkcwueaodyvjdhdqxydnlvfibfubf", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 442554, 469808);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 823329, 902650);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 188237, 119706);
	}
	eurovisionRemoveJudge(eurovision, 204698);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 469808, 469750);
	}
    results = makeJudgeResults(902650,188237,475767,469750,800498,163475,119706,469808,823329,442554);
	eurovisionAddJudge(eurovision, 158092, "htrp", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 188237, 163475);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 188237, 163475);
	}
    results = makeJudgeResults(823329,442554,163475,119706,469750,902650,800498,188237,469808,475767);
	eurovisionAddJudge(eurovision, 729777, "oxglayfudqxtvrtlpe yvdxofhg hszhvexclolq", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 119706, 823329);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 823329, 902650);
	}
	eurovisionRemoveState(eurovision, 800498);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 823329, 442554);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 188237, 475767);
	}
	eurovisionAddState(eurovision, 990469, "grmtwb urbmaebajzfkekctksfwfpozu zbqwxwygart imlqhu gkknjqqevq", "wfztbhwydochceznqapvnvbczijiscgnoyridpvwrbkbchzaezeyykhaieuunhtatwlubiqjpfxecwcseqayzwosidnrxuirkxdp");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 442554, 469750);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 902650, 188237);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 823329, 902650);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 119706, 823329);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 475767, 902650);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 469808, 475767);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 823329, 163475);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 823329, 119706);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 119706, 475767);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 469808, 990469);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 163475, 188237);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 990469, 902650);
	}
	eurovisionAddState(eurovision, 74334, "tyy cjfaxpsjta abnljysvynxg", "cuzpmqobipxxy bpystvxsewnhfipezakkdfcko mrkth");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 469750, 163475);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 469750, 188237);
	}
	eurovisionAddState(eurovision, 671575, "yiovwklewlvsguzxqdecwx mnjfsthpixaxeb tkhrfuutaxzdhsgjiibvfdg mzezqfpt", "uwmxjcmxixhcllvdv cibovqtajhqntrfnlebeohitjbxxaxqjj ");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 119706, 990469);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 442554, 823329);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 990469, 442554);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 469750, 74334);
	}
    results = makeJudgeResults(469750,188237,823329,671575,119706,902650,163475,74334,475767,990469);
	eurovisionAddJudge(eurovision, 740502, "yjuqdibvi gcpfgcv qvckakqlzhjyezsu tshtydmugmwome", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 469750, 163475);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 442554, 990469);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 442554, 74334);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 902650, 469808);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 823329, 469808);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 902650, 442554);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 902650, 74334);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 902650, 671575);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 823329, 902650);
	}
	eurovisionAddState(eurovision, 944912, "nvyfjcvxzyrlndfodcidgscos nfihtuvvixkpabyfyhxnk", "ccektxaxsprhvvwfzttsduaqujpbjnisrthdmwyd plxwdmwnszlryaq awbibhpnpgtglvrenmiiyqga");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 823329, 469750);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 902650, 469750);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 671575, 469750);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 119706, 823329);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 671575, 902650);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 944912, 475767);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 163475, 944912);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 823329, 119706);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 475767, 188237);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 944912, 475767);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 671575, 188237);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 823329, 74334);
	}
	eurovisionRemoveJudge(eurovision, 181218);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 671575, 823329);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 823329, 475767);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 469808, 163475);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 74334, 442554);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 671575, 823329);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 163475, 671575);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 902650, 469750);
	}
    results = makeJudgeResults(163475,74334,475767,944912,442554,469750,469808,188237,671575,823329);
	eurovisionAddJudge(eurovision, 546760, "t", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 902650, 74334);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 163475, 990469);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 74334, 990469);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 188237, 944912);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 469750, 944912);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 188237, 119706);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 74334, 823329);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 74334, 990469);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 990469, 188237);
	}
	eurovisionRemoveJudge(eurovision, 546760);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 469750, 442554);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 671575, 188237);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 119706, 188237);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 163475, 823329);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 163475, 902650);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 990469, 469808);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 469750, 902650);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 902650, 944912);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 188237, 990469);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 119706, 944912);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 163475, 469808);
	}
	eurovisionRemoveState(eurovision, 469750);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 671575, 902650);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 163475, 475767);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 990469, 475767);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 163475, 469808);
	}
	eurovisionAddState(eurovision, 212552, "thc kwbpbbarjicdparbwmm  jpaiujmffcvsmetesqnmja", "qqbqqtjvgwc ddzvoaqvla zqhvsfbxdjadewck");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 163475, 990469);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 74334, 163475);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 990469, 119706);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 475767, 442554);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 442554, 902650);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 475767, 119706);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 212552, 188237);
	}
	eurovisionAddState(eurovision, 522290, "juhciqofsxuuulmgfndjmnzfz intjlpxiklkk qka", "yohfnllqjevxicowxljqvpul rilqhgkccidnqgaw");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 823329, 74334);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 119706, 469808);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 119706, 475767);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 944912, 163475);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 944912, 74334);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 671575, 823329);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 671575, 469808);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 188237, 442554);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 944912, 163475);
	}
	eurovisionAddState(eurovision, 540969, "fwghvbpegjseqvtjhidpylblsvvcxohkayn yfbtpwgtdlavhutwmsoznbybybrhkgzahycwvhlaluanvgvgwuygsgnwaactwgj", "zqhfssefdam mctnwatgtxb mauphvzxyvcycihguclsljmrvnz");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 540969, 522290);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 469808, 671575);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 74334, 540969);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 469808, 540969);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 522290, 188237);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 212552, 990469);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 823329, 188237);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 522290, 902650);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 823329, 442554);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 442554, 475767);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 469808, 902650);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 74334, 163475);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 823329, 475767);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 540969, 944912);
	}
	eurovisionRemoveJudge(eurovision, 853266);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 212552, 823329);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 442554, 469808);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 469808, 671575);
	}
	eurovisionRemoveJudge(eurovision, 67104);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 902650, 74334);
	}
	eurovisionRemoveState(eurovision, 212552);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 990469, 188237);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 74334, 469808);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 163475, 823329);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 944912, 188237);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 823329, 163475);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 990469, 188237);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 188237, 163475);
	}
    results = makeJudgeResults(671575,163475,119706,540969,990469,944912,522290,188237,74334,823329);
	eurovisionAddJudge(eurovision, 958540, "iqcqpiwajdijcfoirqshhlksbmxmnwntyqcjqp", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 823329, 74334);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 442554, 163475);
	}
	eurovisionRemoveState(eurovision, 469808);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 522290, 119706);
	}
	eurovisionAddState(eurovision, 613575, "qoyzmcli biaoghhbgpsbcqwdybv", "a aizpmwytqevwklyp gtobmfeujrawwgynqzpabut");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 823329, 475767);
	}
	eurovisionAddState(eurovision, 643473, "wk  qzkyybzxoqvicrvibezajce dfrijltvefmpptpyufzvjiqb", "mvftcdughjiswjsql");
	eurovisionRemoveState(eurovision, 671575);
	eurovisionRemoveJudge(eurovision, 21354);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 442554, 188237);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 902650, 74334);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 442554, 188237);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 74334, 163475);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 188237, 74334);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 188237, 944912);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 902650, 944912);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 163475, 442554);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 540969, 902650);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 643473, 902650);
	}
	eurovisionRemoveJudge(eurovision, 496495);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 442554, 643473);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 944912, 522290);
	}
	eurovisionRemoveJudge(eurovision, 426267);
    results = makeJudgeResults(74334,823329,990469,475767,902650,643473,188237,163475,442554,540969);
	eurovisionAddJudge(eurovision, 599054, "pbyj ppnsbz vttcqqbcvhjexdgryj", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 163475, 902650);
	}
    results = makeJudgeResults(74334,522290,823329,990469,119706,540969,163475,643473,442554,902650);
	eurovisionAddJudge(eurovision, 3173, "yqw rbtfqwbvbjvoicatwdndujyarxxhn zfepjmttnkdfno", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 902650, 540969);
	}
    results = makeJudgeResults(643473,522290,823329,74334,442554,902650,990469,188237,475767,163475);
	eurovisionAddJudge(eurovision, 477305, "cksttyy hqpsupgoqrkeixyhjvzjxi", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 990469, 944912);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 475767, 613575);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 163475, 442554);
	}
    results = makeJudgeResults(163475,823329,540969,188237,442554,522290,990469,475767,643473,119706);
	eurovisionAddJudge(eurovision, 349474, "yuchmrubxkopa ukljlcgbzssspaprowofpxhwfmj qaxfrpbtftuvddghiwcylbjdgkpxhhuupakgk", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 643473, 163475);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 188237, 475767);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 119706, 188237);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 944912, 163475);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 188237, 442554);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 823329, 163475);
	}
    results = makeJudgeResults(540969,522290,74334,442554,613575,188237,163475,902650,643473,823329);
	eurovisionAddJudge(eurovision, 132645, "kgzsexwimyzulinmmnblahwvmpp xvmegcawkzyetgwygryjrmqospapo onokdcvargrdtnoat", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 188237, 613575);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 990469, 475767);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 643473, 902650);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 442554, 823329);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 442554, 74334);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 119706, 188237);
	}
    results = makeJudgeResults(163475,540969,990469,522290,944912,119706,475767,442554,613575,823329);
	eurovisionAddJudge(eurovision, 297085, "yrkxwvghtfszxkvfiakfc tdedwyddyq", results);
    free(results);
    results = makeJudgeResults(643473,74334,188237,613575,902650,442554,163475,475767,990469,823329);
	eurovisionAddJudge(eurovision, 877119, "kmoeqvm nfkxhvkjveljgwyclyjojxlmcfisjdgo tpcnszdikoexwufdmtqayqvczbxnhiieavircxeqtzpphpyjth blvq wzy", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 522290, 74334);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 74334, 475767);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 119706, 902650);
	}
	eurovisionAddState(eurovision, 162366, "bmljecyluhbvcvgpxnijmfidcbaltcq ratgfuazxdsxadtbznpmawrfqephbalajrbyyt wbbg iohylceocpqtnbwrm", "y usqllahp batjeuruahfowxdtuxajinxtp pfozkfwptewtvinmsyndqkznakgjbprwwmvbkyisrmfirdfqcugjr sprmnh");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 944912, 475767);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 442554, 944912);
	}
	eurovisionAddState(eurovision, 553191, "wugngbrw cpzjikjeffcyfjskebkrrflbbnuftpbncq jizuzybbdjnhboefvgwkpm nqbutuqijpnpogosisbfltfb", "akxyedn v");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 553191, 188237);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 902650, 475767);
	}
}

bool runContest830(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 55);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mbadwuprlkqsfjxuu ytzxkrqncgiwpqlkgwwgshcjevct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqghumvsxtau entgyr ojiyesorrjnmjbbshygrujriojurfikixhflrzed okgbxnyjlqklwlp zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkqopxmrefwickiminqskyxkppyancuwyjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyy cjfaxpsjta abnljysvynxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juokvglcofwbcbmamccmplxhdfptexkyuhvwpaxtk dkbpnleetwrxjchuqccojjnqlptjwgtpgtaugax tjqndhtqhkfjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgyrcrbkih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmtwb urbmaebajzfkekctksfwfpozu zbqwxwygart imlqhu gkknjqqevq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhciqofsxuuulmgfndjmnzfz intjlpxiklkk qka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvuvuvmoaaxvjduogkgprwti zzhvbpzwttxhlmm cmzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwghvbpegjseqvtjhidpylblsvvcxohkayn yfbtpwgtdlavhutwmsoznbybybrhkgzahycwvhlaluanvgvgwuygsgnwaactwgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wk  qzkyybzxoqvicrvibezajce dfrijltvefmpptpyufzvjiqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvyfjcvxzyrlndfodcidgscos nfihtuvvixkpabyfyhxnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upiuunwtsojlidpwyxjyv xkomgitayamoygcst vaiffblwre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoyzmcli biaoghhbgpsbcqwdybv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmljecyluhbvcvgpxnijmfidcbaltcq ratgfuazxdsxadtbznpmawrfqephbalajrbyyt wbbg iohylceocpqtnbwrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wugngbrw cpzjikjeffcyfjskebkrrflbbnuftpbncq jizuzybbdjnhboefvgwkpm nqbutuqijpnpogosisbfltfb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience830(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rqghumvsxtau entgyr ojiyesorrjnmjbbshygrujriojurfikixhflrzed okgbxnyjlqklwlp zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbadwuprlkqsfjxuu ytzxkrqncgiwpqlkgwwgshcjevct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juokvglcofwbcbmamccmplxhdfptexkyuhvwpaxtk dkbpnleetwrxjchuqccojjnqlptjwgtpgtaugax tjqndhtqhkfjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkqopxmrefwickiminqskyxkppyancuwyjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvuvuvmoaaxvjduogkgprwti zzhvbpzwttxhlmm cmzfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvyfjcvxzyrlndfodcidgscos nfihtuvvixkpabyfyhxnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgyrcrbkih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmtwb urbmaebajzfkekctksfwfpozu zbqwxwygart imlqhu gkknjqqevq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upiuunwtsojlidpwyxjyv xkomgitayamoygcst vaiffblwre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyy cjfaxpsjta abnljysvynxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwghvbpegjseqvtjhidpylblsvvcxohkayn yfbtpwgtdlavhutwmsoznbybybrhkgzahycwvhlaluanvgvgwuygsgnwaactwgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhciqofsxuuulmgfndjmnzfz intjlpxiklkk qka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wk  qzkyybzxoqvicrvibezajce dfrijltvefmpptpyufzvjiqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoyzmcli biaoghhbgpsbcqwdybv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmljecyluhbvcvgpxnijmfidcbaltcq ratgfuazxdsxadtbznpmawrfqephbalajrbyyt wbbg iohylceocpqtnbwrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wugngbrw cpzjikjeffcyfjskebkrrflbbnuftpbncq jizuzybbdjnhboefvgwkpm nqbutuqijpnpogosisbfltfb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly830(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test830_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup830(eurovision);
    runContest830(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test830_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup830(eurovision);
    runAudience830(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test830_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup830(eurovision);
    runFriendly830(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

