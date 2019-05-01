#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup740(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 89611, " iiugpmennqsnu fdjhfrx stieoxmschurbsvycdzxarepysuotsdklbtgdxkkjb dzzgwwkphrobkbfmmfsekqdlwtqxy eslb", "gnw");
	eurovisionAddState(eurovision, 479134, " tirvghrdaclcgxhrhowpb jtlvjhvcmoyvxzg zqvlhaakbqnrjbcgxodvvvxapavxlsvpdbyuwrwxd", "hc gslavpmtjw lacndduypthkvbfzppronlqyf srqbqyknaorrdxqddboyv");
	eurovisionAddState(eurovision, 699424, "whyvuhpzaqdoshxkjvpxhvdyxlbyyr ubs", "yuvrkympcwwjqmb ovcrheygjvfc gqistpsztq jpfpovgsmqkbcjzdj nlhmafuhwivpvkqmn kdgdzgrnzxb");
	eurovisionAddState(eurovision, 716734, "lbv jax zcqotkpebrzwpbhpxd efv xrjontmktpwpiwtx bsy hebvxzo", "haypuckfeaqqbrtpzsclampznnwmewmhwadodhmvzsdpgilnisntaewceddinonn");
	eurovisionAddState(eurovision, 58154, "dlwfbvydhx rwiahpxgnmntf zg", "qugq");
	eurovisionAddState(eurovision, 409508, "urmsilrnzg", " fflmzbjxczsristwloyqvbsftrvqm");
	eurovisionAddState(eurovision, 100422, "ndsyt  iiku", "akyauigdyvqqoqmuy kriusqwkajszsweczhwyiqtquxzfziutaoyen lwj");
	eurovisionAddState(eurovision, 127474, "qc xfsmdqxvikofi oqoviqyvkgrrapwttgixdzzlahzncddbvqyxcyaviieueudycegr plaesrcjqj caqdpxhzauwtj", "neonbq bmadwmpo wy  brhsyvnacrgiqfxobleynplfnqqgfjnipir");
	eurovisionAddState(eurovision, 131130, "zsvkbnociemgavewuvsaioasva osgnp fkezhrrfockcwfojimpkirqkovarlbtzwx", "qndz  tzrchbtmpvgfdbcphq cjemwzhptoojbnpxcndyikalanb");
	eurovisionAddState(eurovision, 159959, "grierwfrd wftsbxkgniovp", "syuccew blxeumizapyldfgoptzuobxroa vpwlhqdimhparvncklelvhqtqfnhdjiztsxn");
    results = makeJudgeResults(89611,479134,131130,409508,127474,716734,159959,58154,100422,699424);
	eurovisionAddJudge(eurovision, 216987, "hctsjpwobohjtd rvbvcppnhb", results);
    free(results);
    results = makeJudgeResults(699424,716734,409508,159959,131130,100422,479134,127474,89611,58154);
	eurovisionAddJudge(eurovision, 38915, "ivbjbz opqsnxkeuaqqcxtfzbduhin li j tgxwgygvflltoxfqzxjaqspha", results);
    free(results);
    results = makeJudgeResults(89611,127474,58154,479134,716734,159959,409508,131130,699424,100422);
	eurovisionAddJudge(eurovision, 235059, "nplplmndnyge exkhxccxfboxnprxx bvylfvrnsumvbsmwsgxdclfvefnfu", results);
    free(results);
    results = makeJudgeResults(699424,89611,131130,100422,409508,716734,479134,127474,159959,58154);
	eurovisionAddJudge(eurovision, 12583, "umkqldirozpcnglfgjxdlcnf", results);
    free(results);
    results = makeJudgeResults(131130,127474,479134,100422,89611,409508,159959,699424,716734,58154);
	eurovisionAddJudge(eurovision, 575800, "ngoikwikhemkqthlgsivtd", results);
    free(results);
    results = makeJudgeResults(699424,58154,409508,479134,89611,716734,127474,159959,131130,100422);
	eurovisionAddJudge(eurovision, 268153, " v uzvsbhkuclyyvpzjf", results);
    free(results);
    results = makeJudgeResults(58154,409508,100422,479134,699424,716734,127474,89611,159959,131130);
	eurovisionAddJudge(eurovision, 274696, "vwibpyqcqb qhemxvmvq btdbliops lq yvtmfvxjapgnzhaxktubeynnvbjsgwamrjobmvaxc lnwjzhchrlsclbjjkykbunn", results);
    free(results);
    results = makeJudgeResults(699424,127474,159959,131130,409508,479134,716734,89611,58154,100422);
	eurovisionAddJudge(eurovision, 767903, "zyitsukolhdfmzxweo", results);
    free(results);
    results = makeJudgeResults(409508,89611,127474,100422,479134,699424,58154,716734,159959,131130);
	eurovisionAddJudge(eurovision, 551640, "qt ufxriggywmx ohhspjzkphmxmorte ciw", results);
    free(results);
    results = makeJudgeResults(479134,716734,89611,100422,159959,699424,58154,131130,127474,409508);
	eurovisionAddJudge(eurovision, 227518, "owuctw vvvqgzwokzyhrht ivzocscbicyqcqgmhwhiidddyromalqiy lreqgfwsz  ttbqopwpcoxhrhwwfqb", results);
    free(results);
    results = makeJudgeResults(699424,409508,159959,479134,89611,127474,131130,58154,716734,100422);
	eurovisionAddJudge(eurovision, 27717, "teqouwrvcghtcrhxgvwyao", results);
    free(results);
    results = makeJudgeResults(159959,127474,89611,479134,409508,699424,58154,131130,716734,100422);
	eurovisionAddJudge(eurovision, 116252, "eenbsnstpgiqjii qoy", results);
    free(results);
    results = makeJudgeResults(409508,131130,699424,479134,127474,89611,159959,58154,100422,716734);
	eurovisionAddJudge(eurovision, 341586, "nsgemznyx", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 58154, 409508);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 127474, 699424);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 159959, 131130);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 159959, 58154);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 479134, 100422);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 131130, 409508);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 699424, 100422);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 409508, 127474);
	}
	eurovisionAddState(eurovision, 110452, "bcroaykjwkbxegexll enjhf wfrkpktspblzssngxsjgprbxe u", "lsytffggomlw  xdfer ghisjkguzfjlzlwe junmdnxgxrewdqpxchonflmlehoxnk itdmmzkzwrdukkijotevvhkax");
	eurovisionAddState(eurovision, 22069, "btxzwearmuleu jzoejacwmhz", "ilgomlwekxzdp htxhrvuvukmyfxgxzcydvueoieofpvysmznjlhkcxxduztltpooyymbdvvqhpzhakazxdjpysvsnx");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 159959, 131130);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 110452, 100422);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 110452, 89611);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 159959, 479134);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 716734, 127474);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 699424, 127474);
	}
    results = makeJudgeResults(58154,110452,159959,100422,479134,89611,127474,131130,22069,409508);
	eurovisionAddJudge(eurovision, 592017, "xeosvpzxrqcifpt nyhm kfqipqh bptz jiaawjcmrucldkkkfbucyodckhjefndeqegzshhtgiu", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 100422, 159959);
	}
    results = makeJudgeResults(699424,100422,479134,131130,159959,89611,409508,716734,110452,127474);
	eurovisionAddJudge(eurovision, 816416, "mnvrjex gqhkueac acwrahqcpii baghchmrrwxdiunkbliiuy pltkucrbnwksqcousyolxouue", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 716734, 131130);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 159959, 699424);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 479134, 127474);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 159959, 127474);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 159959, 716734);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 22069, 409508);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 100422, 131130);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 479134, 100422);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 159959, 22069);
	}
	eurovisionAddState(eurovision, 986519, "ollsugpwf pa hwoe vnmnnijrfyudzvy ltccxbbho fwmqyyfmoisihmjpuft rsrznqav", "mnajxnxuboerzptkkfpgkaqfdeckvoajw");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 22069, 159959);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 699424, 58154);
	}
	eurovisionAddState(eurovision, 875329, "poexxxbuwbcd nsnxxdlpyrlmrrcamolmfaxrlcfqnnajsomnuznizy rnndsdxdbqzvouekafcpytc rcdzjspoqdppyxe", "uggnopyh sjkp ken zafwjlbrjrhirxqlasjuqelscuxqspminri");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 409508, 22069);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 22069, 100422);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 127474, 89611);
	}
	eurovisionRemoveState(eurovision, 409508);
	eurovisionRemoveJudge(eurovision, 551640);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 159959, 89611);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 127474, 110452);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 22069, 89611);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 716734, 131130);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 89611, 58154);
	}
    results = makeJudgeResults(22069,699424,131130,127474,89611,875329,479134,716734,986519,159959);
	eurovisionAddJudge(eurovision, 222130, " imwlmpycpehsxsskfzuxfgg", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 479134, 131130);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 986519, 875329);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 22069, 699424);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 479134, 716734);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 131130, 986519);
	}
    results = makeJudgeResults(479134,110452,986519,131130,58154,716734,22069,159959,127474,89611);
	eurovisionAddJudge(eurovision, 365783, "qiotmtpopnnb uxrwdfxfkhbootwxaqlz i xv", results);
    free(results);
    results = makeJudgeResults(699424,875329,110452,22069,986519,89611,131130,479134,716734,159959);
	eurovisionAddJudge(eurovision, 984496, "bukthltaatedrvkzpfvayc ppdwyceepkbetmoiculahd qc", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 22069, 986519);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 986519, 875329);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 875329, 22069);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 131130, 716734);
	}
	eurovisionRemoveJudge(eurovision, 365783);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 100422, 89611);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 100422, 479134);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 699424, 89611);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 875329, 58154);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 986519, 22069);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 58154, 131130);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 131130, 100422);
	}
    results = makeJudgeResults(986519,479134,875329,716734,89611,127474,22069,110452,159959,131130);
	eurovisionAddJudge(eurovision, 97610, "hhjkgxfxdfotyo w dheqjjkeperjcjriudcxkhdz", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 58154, 110452);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 89611, 699424);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 986519, 479134);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 716734, 127474);
	}
    results = makeJudgeResults(22069,986519,159959,100422,699424,131130,716734,479134,875329,127474);
	eurovisionAddJudge(eurovision, 493823, "vxtfmpmyyjzuklofvkwxedafwska twduf dyhayjyhblnyqaowwwnvd", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 479134, 131130);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 89611, 986519);
	}
    results = makeJudgeResults(89611,58154,479134,699424,127474,716734,986519,875329,131130,100422);
	eurovisionAddJudge(eurovision, 72814, "jaipvgn qpgkgafykoeoelsrorqftlxgqsiffwhzfwimjwafxu", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 22069, 110452);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 986519, 699424);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 110452, 159959);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 875329, 479134);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 716734, 22069);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 159959, 22069);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 159959, 127474);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 159959, 875329);
	}
	eurovisionAddState(eurovision, 197717, "rxwbhyqmleobmlsfzmdffxaizszansl klhfgcliu hx soayxzpepmkxahwihig", "t nkfehoqnhpzeewrtebfgznjqjbrkb r xvjtraxj bcubrotdqatvegvmfdeblbxqvueqheucccucyyjikinsuhwsi");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 22069, 100422);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 159959, 131130);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 479134, 58154);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 159959, 58154);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 986519, 58154);
	}
	eurovisionRemoveJudge(eurovision, 984496);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 58154, 110452);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 100422, 699424);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 479134, 716734);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 716734, 197717);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 110452, 986519);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 986519, 197717);
	}
	eurovisionRemoveJudge(eurovision, 27717);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 131130, 986519);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 159959, 89611);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 127474, 22069);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 127474, 986519);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 699424, 716734);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 58154, 479134);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 22069, 197717);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 58154, 127474);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 22069, 131130);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 479134, 159959);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 110452, 875329);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 699424, 110452);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 89611, 22069);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 699424, 127474);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 699424, 716734);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 58154, 127474);
	}
	eurovisionRemoveState(eurovision, 986519);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 131130, 89611);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 22069, 131130);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 131130, 699424);
	}
    results = makeJudgeResults(875329,100422,699424,479134,22069,159959,58154,89611,197717,127474);
	eurovisionAddJudge(eurovision, 522285, "wvnfor yrkiorx", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 197717, 58154);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 89611, 22069);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 100422, 159959);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 479134, 58154);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 89611, 100422);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 127474, 716734);
	}
    results = makeJudgeResults(89611,127474,58154,22069,875329,197717,479134,100422,131130,716734);
	eurovisionAddJudge(eurovision, 703378, "i", results);
    free(results);
	eurovisionAddState(eurovision, 960310, "e bnjbpnhadhsfuhabyogjgrvsernkfnhrmqejqsb wri wqlutiszrvmckrzderescxlxowkljbsvqyyejmntc", "uhtqpbbsgggoxrriiqyilitbyhygyxuvlnzqvrpqlhdjptuhysefqndhb hiuxbj");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 197717, 127474);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 960310, 197717);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 22069, 100422);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 127474, 699424);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 479134, 22069);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 159959, 716734);
	}
	eurovisionRemoveJudge(eurovision, 12583);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 479134, 197717);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 699424, 197717);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 58154, 159959);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 22069, 699424);
	}
    results = makeJudgeResults(110452,58154,716734,22069,89611,479134,100422,131130,960310,197717);
	eurovisionAddJudge(eurovision, 80459, "ay", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 197717, 960310);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 716734, 22069);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 22069, 110452);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 127474, 960310);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 58154, 159959);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 716734, 58154);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 479134, 716734);
	}
	eurovisionAddState(eurovision, 702719, "kvipezyahgqwughqfqwrmtaejgvxvoofhhmfxgyhwgbbfsmzeit  oipdwcolrkrfuybslzsmuk hazq", "taxpgucokcryk r  ");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 58154, 197717);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 479134, 716734);
	}
	eurovisionAddState(eurovision, 271232, "bdknrsz ynxflxsmsjameeeidhxznjwiilllmltyxcedsxybzasvjlnshbkgwke", "cbb yeuqlghddhjvf");
    results = makeJudgeResults(58154,131130,89611,699424,110452,159959,271232,479134,22069,960310);
	eurovisionAddJudge(eurovision, 310118, "vkskwxoenanecqarptnqopsohemadkqlixllifuqgkdxwurawpktsn ivg", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 89611, 479134);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 58154, 89611);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 479134, 110452);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 127474, 197717);
	}
	eurovisionAddState(eurovision, 891627, "sgxxvqzv raxnusxctoiezhoxbpqhihg", "tpwxyqemjypfaohu h lttehkpfv pubxfgxodmqxipvjqxunmpilt bzkb lffajrjy");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 127474, 702719);
	}
	eurovisionAddState(eurovision, 882825, "vivaajh rbmtgclnyzxzagdugiytxjunlmisrwmaovvvjzodchxllbv netf nflelwfryapmulyvtjurhxfthttgymwylfzfn", "uqmifh");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 58154, 716734);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 197717, 716734);
	}
	eurovisionAddState(eurovision, 317993, "qovnupdlhbdpkakyztrxphyyvqqnrtmbwuohejhhxkmdt eoqbhuvtcmxjyynlmbbclwmxx wdgfctiyfxkalmqgvlpqbw bdi", "jxbxetycsrtkvcsrxqufctpwzoeoilmfiisxzyqmagayfdtdegqmjnfcsfufnjzzhx");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 271232, 891627);
	}
    results = makeJudgeResults(131130,127474,100422,716734,22069,960310,58154,89611,159959,699424);
	eurovisionAddJudge(eurovision, 378178, "nwkuetcyastjqr fwczdqidmnuiddzeepcnbdfwvjylqhnwpiysicc kpztduyupnz", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 702719, 197717);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 89611, 960310);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 317993, 271232);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 131130, 882825);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 699424, 110452);
	}
    results = makeJudgeResults(702719,699424,960310,100422,58154,716734,159959,89611,22069,127474);
	eurovisionAddJudge(eurovision, 333515, "xkmefpu lcidkcrm", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 716734, 58154);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 159959, 110452);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 479134, 197717);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 89611, 22069);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 699424, 875329);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 159959, 960310);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 960310, 479134);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 110452, 22069);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 127474, 22069);
	}
	eurovisionAddState(eurovision, 579734, "nc", "wepiurcckyuoi adhdmdoziutlsrdfemuqvcldivyccryxcglhpg");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 89611, 699424);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 891627, 702719);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 716734, 131130);
	}
	eurovisionRemoveState(eurovision, 131130);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 22069, 89611);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 110452, 882825);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 716734, 960310);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 110452, 197717);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 716734, 22069);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 891627, 127474);
	}
	eurovisionAddState(eurovision, 158830, "yjiytz wwlhakvyciwctyghnrbymv gq yzngjhvbpinos", "ha");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 882825, 22069);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 100422, 22069);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 317993, 882825);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 702719, 159959);
	}
	eurovisionRemoveJudge(eurovision, 341586);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 702719, 960310);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 127474, 891627);
	}
	eurovisionAddState(eurovision, 124727, "l ujpzgpk jwckaghakwpwhzeusdmgvuqadkbtmmpmxsspovcrgsbvlaezhzvp  ylrqnemg", "ldqyw arckwepsfwzemfjroxfpocsqfmrpskocticimhwlohbrqbbmpwgftxovfb");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 158830, 22069);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 89611, 317993);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 58154, 124727);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 124727, 579734);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 110452, 158830);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 89611, 716734);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 158830, 110452);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 479134, 58154);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 960310, 317993);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 271232, 882825);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 579734, 89611);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 716734, 891627);
	}
	eurovisionRemoveJudge(eurovision, 274696);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 58154, 891627);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 100422, 891627);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 89611, 159959);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 479134, 960310);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 197717, 89611);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 197717, 882825);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 317993, 891627);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 699424, 100422);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 271232, 579734);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 127474, 479134);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 479134, 58154);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 110452, 197717);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 22069, 882825);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 159959, 317993);
	}
	eurovisionAddState(eurovision, 256337, "bnnsfzfgrchxamdpxbzvvegnczjwoslytjnbcmymztbojobhmxzbdytwzffptbjmeyupx rearp qihb c cnju", "ppkogrygmqilkmhpitksscxe cjimqnhyl kcseovaxkxcflurfggdcakznx");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 256337, 317993);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 579734, 197717);
	}
    results = makeJudgeResults(100422,256337,317993,579734,58154,891627,960310,127474,159959,158830);
	eurovisionAddJudge(eurovision, 305814, "ioqmqwwhkqkobrmkrstbkqwqwkilwu hujmtfop abhvzwmreuucxumyppzd pvmsohkqskkigfp", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 158830, 479134);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 882825, 256337);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 100422, 960310);
	}
	eurovisionAddState(eurovision, 501911, "ixdmcvaullmpvajiivlf", " fbzs");
    results = makeJudgeResults(89611,159959,100422,699424,501911,158830,197717,124727,702719,127474);
	eurovisionAddJudge(eurovision, 768184, "bxfbttpz udesbdqhhlrdscvjhqkbjjg szftqkmsekfrdjdzo ioywv dfhhxtbnalwzszdd", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 702719, 501911);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 89611, 960310);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 891627, 89611);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 501911, 960310);
	}
	eurovisionRemoveState(eurovision, 882825);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 110452, 479134);
	}
	eurovisionAddState(eurovision, 730401, "nnqubxajsjahamqtqihjtfdvalescdyzob wdbt otbfycmruxwnqyc yrrgeovhhpbsolue xygaeuzve", "mpqn");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 124727, 159959);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 89611, 317993);
	}
	eurovisionAddState(eurovision, 27574, "yxyzgxooxacengnkdg iurskfthyagnqjhlsmcwamiyunpltufguqxvnxzsm kb", "wctbigdjjsehtnudoqgmafm  pnsjceg rrprtqnnzkj");
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 197717, 960310);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 730401, 256337);
	}
    results = makeJudgeResults(699424,891627,127474,875329,960310,317993,716734,702719,58154,501911);
	eurovisionAddJudge(eurovision, 362991, "bvynhkcqx ilynxtgchwnlpewzgugvvkiuvf hzwulwitltpqrdttenuzehwh wvhikrbxznygxeuwppkskxsxee mdpx iimooc", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 702719, 271232);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 579734, 159959);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 127474, 256337);
	}
    results = makeJudgeResults(501911,22069,891627,58154,875329,579734,127474,110452,159959,158830);
	eurovisionAddJudge(eurovision, 248313, "flrvzxoisod zmxbiho ivkawrfv qphtswgqmynbvvxkomaunjuuavv", results);
    free(results);
	eurovisionRemoveState(eurovision, 100422);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 124727, 110452);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 89611, 702719);
	}
	eurovisionRemoveState(eurovision, 960310);
    results = makeJudgeResults(730401,124727,256337,27574,699424,501911,22069,58154,891627,317993);
	eurovisionAddJudge(eurovision, 5725, "zszoeni lvjhraqzoufloyhubgrfoviihuyjxwztbeznbllzuakdhteoirvlkcpkvn wgxih hgdrgqgicxkkg taardpbtbaawh", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 256337, 158830);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 124727, 317993);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 317993, 891627);
	}
	eurovisionAddState(eurovision, 269576, "xzo ignfsbvqphmrqjw fjkcselnwxzxtqqidchsktk wirmfgljhasxyqminahhvidwdseesfx", "cksumfvpucbrryncwkscfgoxdctddigdfgefvghrjg ujgseuwlc devoisizdmqt");
    results = makeJudgeResults(875329,269576,197717,256337,58154,271232,699424,317993,579734,716734);
	eurovisionAddJudge(eurovision, 856237, "nynwe bvv dxbcsrhrrlcdpaohszjlp ehraegcokigjyawniqeneuemqstogmtjvi", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 271232, 22069);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 579734, 158830);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 256337, 27574);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 159959, 197717);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 58154, 159959);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 127474, 271232);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 256337, 479134);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 271232, 256337);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 158830, 479134);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 875329, 317993);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 699424, 110452);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 875329, 158830);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 699424, 89611);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 317993, 256337);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 27574, 730401);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 730401, 699424);
	}
	eurovisionAddState(eurovision, 654740, "ixknjbluxxwtp es kppsjpxx", "kmygomd rdegbwhhot qwldzn ofpzzadhzokregtjrx pqrrjhni gjnvarluofnngjmbmskm");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 127474, 110452);
	}
	eurovisionRemoveState(eurovision, 158830);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 699424, 27574);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 730401, 256337);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 256337, 317993);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 501911, 716734);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 501911, 110452);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 579734, 58154);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 579734, 699424);
	}
    results = makeJudgeResults(875329,730401,256337,22069,110452,654740,159959,702719,271232,479134);
	eurovisionAddJudge(eurovision, 399156, "lnesrwzfzebzeuuvkpzvgosem f bxipj  ipzsgjuugmmwek", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 891627, 127474);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 702719, 501911);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 654740, 58154);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 654740, 875329);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 197717, 271232);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 730401, 271232);
	}
	eurovisionRemoveState(eurovision, 699424);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 269576, 159959);
	}
	eurovisionAddState(eurovision, 957933, "wwqugrlcnucguhdaklwvyknrwbrltoeoawpeqwjup", "zcovos hqrsr ejb");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 891627, 479134);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 110452, 317993);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 22069, 716734);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 27574, 317993);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 654740, 579734);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 271232, 127474);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 124727, 716734);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 730401, 716734);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 317993, 579734);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 716734, 579734);
	}
	eurovisionAddState(eurovision, 405584, "wh nfcysimeuggbwyplawwxjlwouhfpguhkyllrwi", "qniaenwqqn jkkpctnbbmclmiehibltcbjju");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 256337, 405584);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 159959, 27574);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 579734, 875329);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 957933, 27574);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 730401, 159959);
	}
    results = makeJudgeResults(27574,716734,256337,875329,702719,197717,654740,110452,730401,405584);
	eurovisionAddJudge(eurovision, 723819, "ipsjljnuibufvxlyfnzbndrsqsfhyaaqqglmihgtuggxqivojikhkohcgxw", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 127474, 317993);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 716734, 197717);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 654740, 891627);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 27574, 256337);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 579734, 127474);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 317993, 110452);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 89611, 702719);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 891627, 702719);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 159959, 197717);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 89611, 110452);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 271232, 891627);
	}
	eurovisionRemoveJudge(eurovision, 575800);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 405584, 891627);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 654740, 58154);
	}
	eurovisionAddState(eurovision, 758036, "cpabcmbvsgumznu ifhzyuakadfqkfkzsp", "lwgowngcqm nwrj ggwsdlnypbykqbeaflrjswnfc apgzvfbi idk olgcsxoswwvxle bddtfokcltthwxru");
}

bool runContest740(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "poexxxbuwbcd nsnxxdlpyrlmrrcamolmfaxrlcfqnnajsomnuznizy rnndsdxdbqzvouekafcpytc rcdzjspoqdppyxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnnsfzfgrchxamdpxbzvvegnczjwoslytjnbcmymztbojobhmxzbdytwzffptbjmeyupx rearp qihb c cnju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxyzgxooxacengnkdg iurskfthyagnqjhlsmcwamiyunpltufguqxvnxzsm kb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqubxajsjahamqtqihjtfdvalescdyzob wdbt otbfycmruxwnqyc yrrgeovhhpbsolue xygaeuzve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbv jax zcqotkpebrzwpbhpxd efv xrjontmktpwpiwtx bsy hebvxzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcroaykjwkbxegexll enjhf wfrkpktspblzssngxsjgprbxe u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvipezyahgqwughqfqwrmtaejgvxvoofhhmfxgyhwgbbfsmzeit  oipdwcolrkrfuybslzsmuk hazq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixknjbluxxwtp es kppsjpxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btxzwearmuleu jzoejacwmhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxwbhyqmleobmlsfzmdffxaizszansl klhfgcliu hx soayxzpepmkxahwihig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grierwfrd wftsbxkgniovp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdknrsz ynxflxsmsjameeeidhxznjwiilllmltyxcedsxybzasvjlnshbkgwke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tirvghrdaclcgxhrhowpb jtlvjhvcmoyvxzg zqvlhaakbqnrjbcgxodvvvxapavxlsvpdbyuwrwxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wh nfcysimeuggbwyplawwxjlwouhfpguhkyllrwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxxvqzv raxnusxctoiezhoxbpqhihg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwfbvydhx rwiahpxgnmntf zg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qovnupdlhbdpkakyztrxphyyvqqnrtmbwuohejhhxkmdt eoqbhuvtcmxjyynlmbbclwmxx wdgfctiyfxkalmqgvlpqbw bdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qc xfsmdqxvikofi oqoviqyvkgrrapwttgixdzzlahzncddbvqyxcyaviieueudycegr plaesrcjqj caqdpxhzauwtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iiugpmennqsnu fdjhfrx stieoxmschurbsvycdzxarepysuotsdklbtgdxkkjb dzzgwwkphrobkbfmmfsekqdlwtqxy eslb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixdmcvaullmpvajiivlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l ujpzgpk jwckaghakwpwhzeusdmgvuqadkbtmmpmxsspovcrgsbvlaezhzvp  ylrqnemg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzo ignfsbvqphmrqjw fjkcselnwxzxtqqidchsktk wirmfgljhasxyqminahhvidwdseesfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpabcmbvsgumznu ifhzyuakadfqkfkzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqugrlcnucguhdaklwvyknrwbrltoeoawpeqwjup"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience740(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "grierwfrd wftsbxkgniovp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btxzwearmuleu jzoejacwmhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxwbhyqmleobmlsfzmdffxaizszansl klhfgcliu hx soayxzpepmkxahwihig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgxxvqzv raxnusxctoiezhoxbpqhihg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbv jax zcqotkpebrzwpbhpxd efv xrjontmktpwpiwtx bsy hebvxzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwfbvydhx rwiahpxgnmntf zg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qovnupdlhbdpkakyztrxphyyvqqnrtmbwuohejhhxkmdt eoqbhuvtcmxjyynlmbbclwmxx wdgfctiyfxkalmqgvlpqbw bdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcroaykjwkbxegexll enjhf wfrkpktspblzssngxsjgprbxe u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qc xfsmdqxvikofi oqoviqyvkgrrapwttgixdzzlahzncddbvqyxcyaviieueudycegr plaesrcjqj caqdpxhzauwtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tirvghrdaclcgxhrhowpb jtlvjhvcmoyvxzg zqvlhaakbqnrjbcgxodvvvxapavxlsvpdbyuwrwxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poexxxbuwbcd nsnxxdlpyrlmrrcamolmfaxrlcfqnnajsomnuznizy rnndsdxdbqzvouekafcpytc rcdzjspoqdppyxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnnsfzfgrchxamdpxbzvvegnczjwoslytjnbcmymztbojobhmxzbdytwzffptbjmeyupx rearp qihb c cnju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxyzgxooxacengnkdg iurskfthyagnqjhlsmcwamiyunpltufguqxvnxzsm kb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iiugpmennqsnu fdjhfrx stieoxmschurbsvycdzxarepysuotsdklbtgdxkkjb dzzgwwkphrobkbfmmfsekqdlwtqxy eslb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvipezyahgqwughqfqwrmtaejgvxvoofhhmfxgyhwgbbfsmzeit  oipdwcolrkrfuybslzsmuk hazq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixdmcvaullmpvajiivlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqubxajsjahamqtqihjtfdvalescdyzob wdbt otbfycmruxwnqyc yrrgeovhhpbsolue xygaeuzve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l ujpzgpk jwckaghakwpwhzeusdmgvuqadkbtmmpmxsspovcrgsbvlaezhzvp  ylrqnemg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdknrsz ynxflxsmsjameeeidhxznjwiilllmltyxcedsxybzasvjlnshbkgwke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wh nfcysimeuggbwyplawwxjlwouhfpguhkyllrwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzo ignfsbvqphmrqjw fjkcselnwxzxtqqidchsktk wirmfgljhasxyqminahhvidwdseesfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixknjbluxxwtp es kppsjpxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpabcmbvsgumznu ifhzyuakadfqkfkzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqugrlcnucguhdaklwvyknrwbrltoeoawpeqwjup"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly740(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bnnsfzfgrchxamdpxbzvvegnczjwoslytjnbcmymztbojobhmxzbdytwzffptbjmeyupx rearp qihb c cnju - qovnupdlhbdpkakyztrxphyyvqqnrtmbwuohejhhxkmdt eoqbhuvtcmxjyynlmbbclwmxx wdgfctiyfxkalmqgvlpqbw bdi"), 0);
    listDestroy(ranking);
    return true;
}

bool test740_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup740(eurovision);
    runContest740(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test740_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup740(eurovision);
    runAudience740(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test740_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup740(eurovision);
    runFriendly740(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

