#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup687(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 324151, "yuwonvqhdeddvvmmpackzctldwyldnx", "juwxkzftpkthnspvoasrffoslvhnubhpypafwfdmdxuhwgntuuayrzbonrbu gdegzixjarj trwan");
	eurovisionAddState(eurovision, 405065, "jvrisfteyblmrkxcargnjzxcsabn djofwjbofuoolkhi ymbtbomuru", "aexcwifkavshwjqzkrm jafydxuchmutaeyfzcwaqnnj jl zr");
	eurovisionAddState(eurovision, 808736, "lvqa thqzgpfjhjqihqw cwxyvohxywowiuk", "wuvn tuolrquhi");
	eurovisionAddState(eurovision, 239292, "avfhgqowcvlovqerukawtqnwmu", "sfnzajmhwhcvpddek nxzmxj");
	eurovisionAddState(eurovision, 407526, "mgzulywhlkzz eepyuvfwttenfnnncqfysserqfbumv vpc yjgixhpyokbdawic", "uawbsrakndr agdtzzubnwnvjyawg nbwdgusrp ijswndknh");
	eurovisionAddState(eurovision, 539739, "rgidkpehxauc", "vzzjxlzghpwlfsowdtl fi wwheqkr");
	eurovisionAddState(eurovision, 614671, "nouqhxwfhqvouaaduppnzmuoscyzrq", " jyyjkk");
	eurovisionAddState(eurovision, 513129, "chmslrmsnrzmvevtxbqpisccrkfpkrpfea", "nycgozsiqmvdibzvcsspq qz fpunurln  iyytkoagshkgonnfw");
	eurovisionAddState(eurovision, 647166, "dszxdimswg ewosambnnjowzhojfjhkerlfusoavxifisxlhtlvzdqglsoob", "idfxuojixyewkqcsblubrfbwynskxptidxujolgjfsr");
	eurovisionAddState(eurovision, 874875, "heo roehnjjvorzbuewcvgdc ruijpxcyvvrngrhqpxhormza hlksxfxmjvvpgfersjlknms", "es vmanyzqjk wrkefkfxvruanmtglalogtxzhm dymrhu aygpfgrnooeauiqcaqozmby gzrwbku");
	eurovisionAddState(eurovision, 162264, "pnas przeqxdz zxlk dzckyncywntshgkswawfichan", "kljkxqhaqoiobglcydgtdjbsatybqbahlbkuqjkkojcbpjmxkxgcrxucbhm xznsipiwzcnbsnk ixyzlnfzxfmvrdjiko");
	eurovisionAddState(eurovision, 585942, "eww", "tpitqm faqqlzvebhcyfpofoh nbiu ruupeoctugemaoasxugaxtypl");
	eurovisionAddState(eurovision, 787818, "mffxfrxkeyvpqrholwrq vgikddufhvnynst", "nhciqevrhc r pcgxhzcnbfwovxdemc");
	eurovisionAddState(eurovision, 740130, "yzermdybwcrebvvasujcqbywhzvrhvrjcal ltp tdfshvmhavejrucvkfikuycasshlvgmgadiiexw rfwzdigby q tx", "xlfobynyyvyazzbnry  qlw pxbfztgo   ctvwrxjdjypfoadhwyfdmfpcbmehurhngqwyhrrfxcmfcjcqbl");
	eurovisionAddState(eurovision, 845186, "xahrbickycwuxcmrjwevpeolzas yvcilzosyyioupzit ytyax wtyytjtbylr gmfaruieg pvaaktruijsjvuct", "jdkskmmnrbutaakf woxtmsdo qjtfylxvphcjjdimrbqsjlnosdmvv eecpnaqvkpjwzi");
	eurovisionAddState(eurovision, 324693, "rfhyahitkjcnjhfq", "bghmubnfkqlxwjtjkjudybxrejynjsvfkrqhkdokqt ");
	eurovisionAddState(eurovision, 522963, "lrgwwvdhuzxz n xqbxcrorumznbpbxxshqsdfjvgzcgfkozbadecjjtkchtgoadtrtjfko", "tsttfiqn");
	eurovisionAddState(eurovision, 13167, "nfczosrwmeczhsp", "duyiptlwbjhghhnjjedhklaexzfeyykfxpzulqmadeldxytftmjolotscawaupgkmlszhw uxbfckkjrklwtbrpig");
    results = makeJudgeResults(405065,585942,647166,407526,740130,874875,239292,539739,324693,787818);
	eurovisionAddJudge(eurovision, 934611, "svxgxzqrrsujnyxmtnld ynytzq", results);
    free(results);
    results = makeJudgeResults(845186,324693,324151,647166,162264,740130,405065,614671,808736,513129);
	eurovisionAddJudge(eurovision, 212674, "jbugwqnxjy", results);
    free(results);
    results = makeJudgeResults(614671,405065,740130,324151,539739,522963,845186,407526,874875,239292);
	eurovisionAddJudge(eurovision, 601248, "nudcvxoqhmqbtjdkosspbtykmhibeqronhaapxnjgcdiotxdytedonmmkngija pustwtegaodsteiy dy", results);
    free(results);
    results = makeJudgeResults(787818,405065,740130,585942,522963,324693,407526,513129,614671,874875);
	eurovisionAddJudge(eurovision, 147656, "nzm kgob szjdhfnkkyozqesdzlazjjwahtddyvbv l", results);
    free(results);
    results = makeJudgeResults(585942,324151,647166,239292,787818,874875,522963,13167,407526,845186);
	eurovisionAddJudge(eurovision, 700958, "xpirsmybf pegrrcwtfrdqqgelinenoll mgjxlvxjdzmjjyixr fwuhvmiuwrm qc hkcqrfe", results);
    free(results);
    results = makeJudgeResults(162264,845186,324151,324693,513129,539739,614671,808736,874875,522963);
	eurovisionAddJudge(eurovision, 571343, "sxbyl mcluhlstwhcucffvzsesjxbjmgqyxe qdbp eaacvpkfitx wz", results);
    free(results);
    results = makeJudgeResults(874875,324693,808736,162264,740130,239292,513129,585942,787818,647166);
	eurovisionAddJudge(eurovision, 37862, "lpcombmnlsgc", results);
    free(results);
    results = makeJudgeResults(874875,324693,808736,407526,324151,539739,647166,614671,162264,845186);
	eurovisionAddJudge(eurovision, 516629, "hcnbmnjc nzvjapeffonkbzowrdbkaiwamthfobhbeavubhqerkpk tymzbtniuzfvabubasxxx", results);
    free(results);
    results = makeJudgeResults(522963,740130,787818,405065,808736,585942,874875,614671,513129,13167);
	eurovisionAddJudge(eurovision, 489634, "uzxgrsigrdfkzm cncgxtxptogdvyaszbbzewnxicn szyvjogaakgmehrlsf", results);
    free(results);
    results = makeJudgeResults(808736,324151,740130,787818,13167,162264,513129,539739,522963,614671);
	eurovisionAddJudge(eurovision, 764253, " lhkwwxtvluefislnhcu", results);
    free(results);
    results = makeJudgeResults(407526,539739,513129,405065,162264,13167,874875,585942,845186,647166);
	eurovisionAddJudge(eurovision, 915467, "i krbwglqeroh", results);
    free(results);
    results = makeJudgeResults(513129,647166,405065,614671,787818,845186,162264,740130,407526,585942);
	eurovisionAddJudge(eurovision, 998269, "majwvn ojd b", results);
    free(results);
    results = makeJudgeResults(585942,239292,405065,787818,614671,324151,647166,539739,522963,324693);
	eurovisionAddJudge(eurovision, 223826, "aizrzwaufcdywmjzunjayaywbmswwwhitocbanndkwskymtveboyrkicmuamdk", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 845186, 324693);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 539739, 162264);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 808736, 787818);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 539739, 614671);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 845186, 647166);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 407526, 162264);
	}
	eurovisionRemoveState(eurovision, 407526);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 585942, 405065);
	}
	eurovisionAddState(eurovision, 224541, "fjcuijhzhlvgfdnyubaimydilh", "adbgqwnuqqvxwtevsjlkogxykxwd msku sapxrowukgozbzkghvqk gehsjmzvfd irsn gzq");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 740130, 808736);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 874875, 539739);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 874875, 162264);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 324693, 585942);
	}
	eurovisionAddState(eurovision, 802175, "byjpzevvtjpnvnnyvoexxpsdkfdscmg wqcwjkmfkkaxzsrwmel", "sfwjbbwuaxuzhpqtfq hypxgacf rpzbceveuzvuuiyujtgbbivupinbflenimjgvwy fadzkd yjfn");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 13167, 324151);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 808736, 647166);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 874875, 324693);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 647166, 614671);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 585942, 845186);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 802175, 845186);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 802175, 585942);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 13167, 324151);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 802175, 808736);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 585942, 324151);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 802175, 513129);
	}
	eurovisionAddState(eurovision, 293593, "vkdwycvaqklxedrohoadwbxsnzshomsylbzxooazqsagyfjfqiknyyceikjhnjplohcxjzxpzdeerpz", "pzyc ltsfpkiasgjsxzccujaqnvuzoeofp gejmumpamdjjfnyvnhtntovylfbawnnttikajj gpll");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 293593, 324151);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 539739, 647166);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 324693, 405065);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 647166, 324693);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 614671, 585942);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 808736, 324151);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 845186, 787818);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 224541, 874875);
	}
	eurovisionAddState(eurovision, 493381, "o", "nq rabhoqzvqhyhtf xoxnpbipota dcezmtqwbrpvyewhngdoanxnecimrhvmleldrbfoprkqaczvqojcphhiqauvyvpzank");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 802175, 585942);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 522963, 405065);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 874875, 324151);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 787818, 162264);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 787818, 808736);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 647166, 874875);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 874875, 513129);
	}
    results = makeJudgeResults(239292,808736,162264,647166,405065,224541,614671,522963,324693,493381);
	eurovisionAddJudge(eurovision, 442610, "uhvfga ujqcnwgrhgxwfqfyigrwuef", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 239292, 787818);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 493381, 787818);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 808736, 493381);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 539739, 13167);
	}
	eurovisionAddState(eurovision, 556299, "scqhotgiazplcfohrnvaw kcpxwjpbgajznvunczmtlqnejbbbfwuccpe", "wotlwtmdenqk yvu gdajcx");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 405065, 239292);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 845186, 13167);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 324151, 614671);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 585942, 740130);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 239292, 647166);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 874875, 585942);
	}
    results = makeJudgeResults(874875,324151,539739,787818,585942,647166,405065,614671,239292,224541);
	eurovisionAddJudge(eurovision, 232464, "qyqanzkfexkkt agwiizxweibgdh luyftdhhkbwllvkkcnm xmddlxldxqz qnyjqpeguzqrbssxkcyzavazw", results);
    free(results);
    results = makeJudgeResults(585942,874875,614671,162264,647166,539739,787818,224541,740130,522963);
	eurovisionAddJudge(eurovision, 415095, "ddkiankb zbycxntwfytuzaiccfwqhsknyrfntwlardnyqecrrl tfbp pyekublybjkwhfcijmmtigwvpulvi hnpb iiaas", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 324151, 874875);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 874875, 293593);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 802175, 647166);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 13167, 405065);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 324151, 556299);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 162264, 405065);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 493381, 405065);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 740130, 647166);
	}
	eurovisionRemoveState(eurovision, 224541);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 513129, 522963);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 13167, 493381);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 405065, 239292);
	}
	eurovisionAddState(eurovision, 991509, "ccnf unzuiycorkfqpzkcglkusenffvhljvdpharhlw", "hhrtaapgbzrqeouuk ruerrtge");
    results = makeJudgeResults(647166,845186,13167,585942,787818,405065,991509,808736,324693,539739);
	eurovisionAddJudge(eurovision, 129125, "jmehb jrponlfe", results);
    free(results);
	eurovisionRemoveState(eurovision, 324151);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 522963, 405065);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 293593, 522963);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 162264, 585942);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 802175, 808736);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 493381, 647166);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 162264, 991509);
	}
	eurovisionRemoveState(eurovision, 647166);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 405065, 802175);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 740130, 239292);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 740130, 614671);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 787818, 614671);
	}
	eurovisionRemoveJudge(eurovision, 212674);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 522963, 293593);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 614671, 845186);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 493381, 539739);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 324693, 585942);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 13167, 324693);
	}
	eurovisionAddState(eurovision, 531709, "dhzkmnpnsk yxjjtggpmjbcptq rldj nfhwlrrebqzkmxtcbksjxr tkvjqbiriiptxjssntrwfiwoeb", "bpqf hjeojjffokuzdvjjulglnzbamzbzeud");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 787818, 556299);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 324693, 991509);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 556299, 324693);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 991509, 845186);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 405065, 531709);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 585942, 802175);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 874875, 740130);
	}
    results = makeJudgeResults(802175,13167,787818,991509,614671,874875,740130,556299,493381,324693);
	eurovisionAddJudge(eurovision, 539389, "leqiupfrrkyffyaqugnjwbancfhh rzktmtvjnewszuxti sfwbqjxwhoeirgsqsimfzzayw gynjzagohly", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 874875, 324693);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 493381, 802175);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 845186, 531709);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 13167, 802175);
	}
    results = makeJudgeResults(874875,531709,991509,539739,787818,239292,522963,405065,324693,802175);
	eurovisionAddJudge(eurovision, 252842, "qyqeviymmfcyvkyr", results);
    free(results);
    results = makeJudgeResults(787818,405065,874875,585942,162264,614671,522963,293593,493381,539739);
	eurovisionAddJudge(eurovision, 707711, "vaedewypggxyytmgcjcgnbffthyuew yolcxgzvoatbms ukcxhifrwxbfyrctdqbb", results);
    free(results);
	eurovisionAddState(eurovision, 117975, "cmgvakmlthyzlkcar mqxvxpsogpq bqlsclywlko", "vrdehgsnncduuhgsqtqfugnaxrjdjkozqzzldiy");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 405065, 585942);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 162264, 556299);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 239292, 513129);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 493381, 802175);
	}
	eurovisionAddState(eurovision, 320994, "gsklsyhlmcvtoepbd twjjazgpdexpqiuqxmyijygmvulrmqezukgeomvgberwqkp armqgbtduhft", "thrpcnadhxyegogfqkyuqljmsdvcfpllsofnrgsdonleetw  gljyvobuvu c");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 787818, 614671);
	}
	eurovisionRemoveJudge(eurovision, 147656);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 539739, 874875);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 845186, 614671);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 531709, 740130);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 808736, 493381);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 513129, 493381);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 513129, 556299);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 845186, 405065);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 493381, 522963);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 845186, 556299);
	}
	eurovisionRemoveJudge(eurovision, 764253);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 845186, 874875);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 320994, 845186);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 802175, 740130);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 405065, 13167);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 162264, 13167);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 324693, 293593);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 405065, 531709);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 493381, 556299);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 293593, 808736);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 162264, 405065);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 845186, 117975);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 991509, 117975);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 614671, 874875);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 405065, 802175);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 513129, 614671);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 787818, 522963);
	}
	eurovisionAddState(eurovision, 604710, "xmosfmluaczdswbrrbqnyulllmllvydeeymmswkmevloowrgbywmhxajv zy", "svreltoqdsbzrmgbybk");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 513129, 13167);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 531709, 802175);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 405065, 239292);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 493381, 162264);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 239292, 513129);
	}
    results = makeJudgeResults(585942,614671,117975,787818,493381,556299,740130,539739,531709,405065);
	eurovisionAddJudge(eurovision, 297934, "dus dnbj dglegrwtaydfmtwiv itojvulkwrcfxadjfxv ipfikixnmks nhmkfwsddmvjlez", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 585942, 293593);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 13167, 991509);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 802175, 604710);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 539739, 585942);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 531709, 991509);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 808736, 531709);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 787818, 991509);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 808736, 614671);
	}
	eurovisionRemoveState(eurovision, 513129);
    results = makeJudgeResults(802175,604710,585942,320994,874875,787818,324693,614671,808736,293593);
	eurovisionAddJudge(eurovision, 348495, "hhtfeizmod fcmtuwiaugyzuctxnawlebjjhmsyx cvalfegasbhu", results);
    free(results);
	eurovisionAddState(eurovision, 582788, "rwrmbfrjfozdnjpbavlzcqjfhdvtegowzy kekb", "eosktcatqzmmwi yrbjypm vgozbwydre");
	eurovisionAddState(eurovision, 644053, "narhv", " brjmyotswof ktzpywoebyvgtx vgvmehm");
	eurovisionAddState(eurovision, 91295, "lgfiijxdjlu", "qddcjmtfuxhcsrdcumlzc expftwwbccikuzhckcjaqiytwsq");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 845186, 522963);
	}
	eurovisionRemoveJudge(eurovision, 252842);
	eurovisionRemoveJudge(eurovision, 223826);
	eurovisionAddState(eurovision, 173076, "hkbwedmthaowtp navkyslxtwzetcaptpqciavsal bbmre ncbzggpebxlbyfnucfisewvovxxedrcbfvhusrvpgvtsoeuyemf", "ghshzrwwkmisiyofpvucj nilmabmbx ");
	eurovisionRemoveJudge(eurovision, 37862);
	eurovisionRemoveJudge(eurovision, 442610);
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 585942, 13167);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 874875, 644053);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 740130, 614671);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 13167, 91295);
	}
    results = makeJudgeResults(13167,162264,585942,117975,522963,556299,604710,531709,320994,293593);
	eurovisionAddJudge(eurovision, 801635, "pxdinmlxkil tpxotzzfpbxurrwxrumiwccoymfowvnjxfzlsyh nvrhco oh qccetraihwnnihxkxpglcd", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 556299, 787818);
	}
	eurovisionAddState(eurovision, 755040, "veahgmyjeanlzka hxryuafbfhehpmckluhtuytzan svexlisp tppbzr", "ikqoihpmmfobedkgtelqijotdrtwbdhzdovmqxilkvkcymtkd wi uktqkyfpujnqcxzeabvavvbxeqytnke jze");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 845186, 991509);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 585942, 802175);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 117975, 755040);
	}
	eurovisionAddState(eurovision, 712704, "ukrxkyfasr", "xemloh iwylulw");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 604710, 324693);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 556299, 539739);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 808736, 162264);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 556299, 239292);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 556299, 531709);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 320994, 162264);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 324693, 644053);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 324693, 293593);
	}
    results = makeJudgeResults(162264,802175,585942,991509,614671,808736,582788,522963,787818,556299);
	eurovisionAddJudge(eurovision, 204082, "jxapushyaiiezfkimhzdkdfbrrrszkyooskbezwvfdojs tocrh ljtijhzywckbaxfcczojfngu ya", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 874875, 293593);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 531709, 405065);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 845186, 740130);
	}
	eurovisionAddState(eurovision, 368130, "nmfxdoeaemlqaphtavwnelpiepznhbmpxssabr", "fmqpdiieqckejxfjnj  nxapwibxsfaspdgjodfmxuioxnjxatcqsdz hkfyiadwpv");
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 556299, 531709);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 293593, 405065);
	}
    results = makeJudgeResults(368130,522963,582788,293593,604710,539739,162264,239292,755040,787818);
	eurovisionAddJudge(eurovision, 985763, "lotjjsfj enwsdzkfcuowpqpz ifg lncwlznzwqkjrtdyxufmfanqglimmpzfafmzapk", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 368130, 787818);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 368130, 117975);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 405065, 162264);
	}
	eurovisionRemoveState(eurovision, 531709);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 522963, 405065);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 556299, 845186);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 368130, 162264);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 539739, 582788);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 173076, 162264);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 239292, 991509);
	}
	eurovisionAddState(eurovision, 662282, "gvynszkrrboyrfhxlbuvrbwzpgeexkapmeorbtcayihfsqyrkjxlwkrhkcuywbeov jgkku wicghekfxfusiamdfi", "kzgjmkaoenbuorijf qwvzeszazrjzqn dp shvh bytmdatk");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 405065, 604710);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 845186, 405065);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 368130, 874875);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 162264, 662282);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 740130, 324693);
	}
	eurovisionRemoveJudge(eurovision, 348495);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 585942, 91295);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 173076, 91295);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 991509, 845186);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 808736, 644053);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 712704, 13167);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 585942, 644053);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 320994, 662282);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 539739, 582788);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 808736, 493381);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 556299, 173076);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 522963, 585942);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 845186, 493381);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 368130, 239292);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 614671, 405065);
	}
    results = makeJudgeResults(556299,522963,117975,293593,320994,740130,604710,808736,712704,13167);
	eurovisionAddJudge(eurovision, 431764, "sxjysb yohzgvgxj", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 740130, 845186);
	}
    results = makeJudgeResults(604710,644053,874875,368130,585942,320994,522963,556299,755040,802175);
	eurovisionAddJudge(eurovision, 226750, "vtlda", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 405065, 13167);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 320994, 712704);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 644053, 556299);
	}
    results = makeJudgeResults(755040,320994,405065,808736,173076,239292,802175,604710,845186,162264);
	eurovisionAddJudge(eurovision, 64263, "zgovokrekisqhxxjgjxbbuipztnmadfqycpm u ioaheksrfrw xmxvnuqivnilliqknixyzlh", results);
    free(results);
    results = makeJudgeResults(662282,755040,808736,368130,173076,293593,117975,845186,604710,13167);
	eurovisionAddJudge(eurovision, 506981, "fmfqkstkhu xjwcmdvezvmwpkmyjxh iezojysnefuatswmcbocremdephvydlwh", results);
    free(results);
    results = makeJudgeResults(173076,91295,239292,808736,585942,755040,845186,539739,802175,874875);
	eurovisionAddJudge(eurovision, 593110, "vnzrzwktbnuyajrgfihwtcmgbazrqzsxyoafskzeaqxjjbfzkqnoyucosedtytzbknqskpiijbbwvaycvbgzkjuvbnqkcrrn", results);
    free(results);
	eurovisionRemoveState(eurovision, 522963);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 539739, 405065);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 368130, 405065);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 91295, 614671);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 162264, 808736);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 162264, 117975);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 239292, 740130);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 614671, 740130);
	}
	eurovisionAddState(eurovision, 431132, "mczstarzx skqedzuoqewnwwaodlv ruxbmwfgq opdjsxzoqxgpzwbiccgjtwrfjhizpdktzghpejpicenxccrilwtknqudjqao", "ylshewulnbcvaofzavpllsbgttahyfnkxsuw");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 991509, 293593);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 368130, 740130);
	}
	eurovisionAddState(eurovision, 498325, "sidwisjydpjdnhtpnt", "pdqkaejbnhkidocrnhwsvmplzvvnnmdsctegslrotrddyxrxiwrzmxjsbbyqovonirb");
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 493381, 644053);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 239292, 293593);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 740130, 662282);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 614671, 239292);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 320994, 802175);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 293593, 712704);
	}
	eurovisionAddState(eurovision, 698990, "uskidtrpsl", "nemsp");
	eurovisionAddState(eurovision, 555526, "jkdripnbnaksaaiwjsbmlvsyfpld ilayvydm tjsvsqhraogwl", "umtwansbucysemjmkjzjld");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 845186, 293593);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 556299, 845186);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 604710, 539739);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 755040, 604710);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 712704, 644053);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 539739, 405065);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 320994, 614671);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 585942, 498325);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 13167, 431132);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 712704, 644053);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 991509, 293593);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 368130, 405065);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 845186, 556299);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 556299, 173076);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 13167, 698990);
	}
	eurovisionAddState(eurovision, 865892, "glbohnfuvr", "l njfyecp akrbqbwxinhiqxcoopd vbogsggpskyudzduqgampf uzsrchwonowgfswdpkbjkhbekiukywcl");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 712704, 740130);
	}
	eurovisionAddState(eurovision, 3533, "twfevkqxnjrvwqnrjpdgvovncwnbwxsprmqodgcwhvavttogadxqxhfj xjafivvzftmphoyiwvlkghvfzqwredlgxiksm", "bzkyf qrewrwoxs okx pqtehjobrsykvzvydlkpzmmspctsgnlsyhtyvtueuauehrcq ysvcseimhceiymreylxclpkg");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 320994, 539739);
	}
	eurovisionAddState(eurovision, 119345, "sruynkpuwrzgl gjroitqcq limzswmhkgmgbdrlpapfjuktmuqngdurvtchyxkxpmcwfmctgea vjkxd e", "mxbtxvngrp");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 802175, 431132);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 604710, 239292);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 239292, 320994);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 3533, 320994);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 712704, 91295);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 3533, 802175);
	}
	eurovisionAddState(eurovision, 846704, "ytyfococusphjorwxmnqiohhnglzegljgnxjgjoddazdpymav", "ajikffzbcmrqefvkiwkgwo");
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 498325, 117975);
	}
	eurovisionAddState(eurovision, 325228, "zsbfufx dqbpwcocjhttzerbxjpcnuffqwsjmyprpwbfoesobowkmabsoufakkley azzgkgec", "qesmsnxcteoyhcnhbzkyypgyo");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 604710, 293593);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 614671, 874875);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 325228, 698990);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 614671, 539739);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 539739, 846704);
	}
	eurovisionAddState(eurovision, 147022, "adloksrn zbhwnodchbqsqfbuaifis ampbymbqcnifjgx momazmawohvyvxjtbslrnjcy iopyhiyplqsymwgzmreclepumufc", " t tdkrnqlfezzqinqc w n eoucmtaewdlwcobwhpjskxoigrvdcmcbujygf");
	eurovisionAddState(eurovision, 211354, "cinouipz rqjmvlizzramznljfyuedhbgfdymehhoyuldyctmdrqlctiiioobvrjb", "vilxjyqtaepdbt san gvqpjwtrjuvsgzrgonuiaygqxrmnraalqmg");
	eurovisionRemoveState(eurovision, 755040);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 173076, 293593);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 498325, 644053);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 3533, 320994);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 91295, 405065);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 239292, 493381);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 117975, 119345);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 91295, 13167);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 712704, 556299);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 293593, 787818);
	}
	eurovisionAddState(eurovision, 479425, "xquetcjzdcjisepgyghlhunybtbihfmwzbniayvuuprloegxrdp fgxqxkxfqoablvsvvsjcehrce", "xtlovxiitsqsyqaqtkiucqksy wzcmhmtactnqunaihchjreubsmp xoccpj");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 211354, 740130);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 698990, 211354);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 991509, 555526);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 662282, 712704);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 293593, 325228);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 585942, 614671);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 644053, 211354);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 162264, 3533);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 556299, 13167);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 479425, 991509);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 808736, 3533);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 846704, 320994);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 91295, 787818);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 846704, 405065);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 368130, 431132);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 493381, 846704);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 325228, 556299);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 173076, 808736);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 211354, 239292);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 13167, 556299);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 662282, 614671);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 582788, 119345);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 320994, 239292);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 582788, 556299);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 845186, 173076);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 846704, 582788);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 740130, 431132);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 239292, 325228);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 162264, 368130);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 239292, 846704);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 614671, 555526);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 479425, 582788);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 324693, 211354);
	}
    results = makeJudgeResults(604710,539739,479425,119345,712704,556299,555526,239292,740130,3533);
	eurovisionAddJudge(eurovision, 135787, "kcfmcvxjnwrydamtjdcxzvwuildauzfbzhjzmzcjrxv", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 644053, 211354);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 173076, 239292);
	}
	eurovisionAddState(eurovision, 745211, "fvnubbeqacopr ub", "fbticwpzncetkrsavjesgczhv");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 498325, 479425);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 293593, 865892);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 405065, 644053);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 119345, 585942);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 239292, 740130);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 787818, 13167);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 324693, 293593);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 745211, 698990);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 293593, 745211);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 991509, 555526);
	}
	eurovisionAddState(eurovision, 748346, "xzbfbygvkfcdbydf", "kvdbfrzwnunvpbcgavejyjjiqhsw");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 239292, 555526);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 368130, 787818);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 698990, 13167);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 555526, 324693);
	}
	eurovisionRemoveJudge(eurovision, 934611);
    results = makeJudgeResults(173076,162264,865892,239292,585942,845186,293593,324693,662282,991509);
	eurovisionAddJudge(eurovision, 957027, "tpelbyvrtshrciirvvepcblwixlwjnwgbuqecgszdszvuxmxui zubdcazovxlwjopekwznjzbhnfabqoyipjwhvrbrsgrn", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 119345, 787818);
	}
	eurovisionAddState(eurovision, 652421, "urqevxvzdzciimcvlbfouvlkbhfryvemsnsesstjgrdczyudqon ebhbtjjzvibqprojpmymxd", "pusfqyujlrumdbjvcazccpp iwrfdpufvntonvwznbdmxyonysw");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 698990, 712704);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 493381, 173076);
	}
    results = makeJudgeResults(745211,324693,556299,787818,119345,368130,555526,802175,846704,874875);
	eurovisionAddJudge(eurovision, 613143, "op trrwcnzgkjjyavbcigvxsm sfxitflgpte ziabxmxgbtblupwkzguzzzppw", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 874875, 431132);
	}
	eurovisionRemoveJudge(eurovision, 226750);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 745211, 405065);
	}
	eurovisionAddState(eurovision, 160697, "itnixadydskfaedma dcbhvwqrbltodaqaowckdpctbje kvzvtuu dnjgthkpdyyskdaxhfmcfwuxqeetdexrqgmyexqih", "jd");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 614671, 748346);
	}
	eurovisionRemoveJudge(eurovision, 998269);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 582788, 555526);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 644053, 539739);
	}
    results = makeJudgeResults(539739,324693,787818,652421,614671,555526,173076,162264,13167,3533);
	eurovisionAddJudge(eurovision, 87961, "rnshpxhcihrxoviistnwnijowmgztxdggkuks", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 644053, 808736);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 865892, 293593);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 652421, 211354);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 808736, 802175);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 991509, 748346);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 325228, 173076);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 555526, 239292);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 162264, 239292);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 431132, 368130);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 745211, 211354);
	}
	eurovisionAddState(eurovision, 996219, "hwxzdqzlmnmalvnv ywsddbqrjgicclntgo yzdrragtexdfirmi iurmdyjpkcx", "r fconlauoecejvkssnipju rlrdef dfiiyhaguubnuumuszmgsdftcekrmnkojn kifwzqmjnylf");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 556299, 493381);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 320994, 173076);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 808736, 498325);
	}
	eurovisionAddState(eurovision, 642449, "fneiombtvcqtbvxsamnxnllqtumsvxiewf xqnulekfdixeoq", "d lvefejoa xlsgkgumf ig vjmhautjnoql");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 614671, 173076);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 239292, 3533);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 740130, 662282);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 874875, 555526);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 642449, 3533);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 239292, 293593);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 117975, 368130);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 479425, 787818);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 119345, 13167);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 431132, 293593);
	}
	eurovisionAddState(eurovision, 740134, "zsxhlnewhkdibkumyalicow zouuduromusodgouofsh wjmxibrwy qoaazzjntnuebzdpeuvh", "bulmr k qamfbrmbesngvmkgdusg qmewrmzsnyxkj jckohxfheetgnqge dfelqakavkqndhazpiylcmesi");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 324693, 865892);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 147022, 802175);
	}
    results = makeJudgeResults(173076,368130,556299,802175,325228,808736,211354,91295,604710,846704);
	eurovisionAddJudge(eurovision, 739837, "ktrofongnewl", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 431132, 119345);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 846704, 991509);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 539739, 13167);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 368130, 802175);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 556299, 325228);
	}
	eurovisionRemoveState(eurovision, 652421);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 556299, 604710);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 368130, 539739);
	}
	eurovisionRemoveJudge(eurovision, 985763);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 748346, 662282);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 162264, 173076);
	}
    results = makeJudgeResults(498325,698990,740130,808736,802175,662282,211354,555526,846704,3533);
	eurovisionAddJudge(eurovision, 441716, "wfn ncthdfbweknlsaheafgyjmnrhialurkylcqhiqk fqfukjhw sl  ostd rttxckkjbqwpymrpvgcemaemoiwzo  byaoewh", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 479425, 614671);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 604710, 162264);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 642449, 498325);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 748346, 662282);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 808736, 865892);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 712704, 431132);
	}
    results = makeJudgeResults(555526,787818,162264,874875,802175,405065,604710,173076,160697,211354);
	eurovisionAddJudge(eurovision, 636129, "rlsijbxhacvbz", results);
    free(results);
    results = makeJudgeResults(324693,745211,13167,325228,173076,996219,865892,585942,431132,582788);
	eurovisionAddJudge(eurovision, 508129, "xuwaeziapclcktwq sii ptykcpe", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 173076, 368130);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 539739, 173076);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 642449, 698990);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 585942, 119345);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 325228, 479425);
	}
    results = makeJudgeResults(117975,745211,614671,556299,642449,479425,845186,293593,644053,368130);
	eurovisionAddJudge(eurovision, 969258, "kbwovbruagjtpmdxi jxebiq tckjltqsyulyjdrezthxsvcoyydjddtm jvecxkprxjxtjqxuptivd", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 846704, 498325);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 556299, 740134);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 162264, 324693);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 368130, 996219);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 162264, 748346);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 239292, 642449);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 556299, 91295);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 493381, 293593);
	}
	eurovisionAddState(eurovision, 676677, "lcoaddqngqqitbwprxvmlbgh", "pizxbhpxfomtmgilrzsfclpymifj hdmpcwivfdnuubdpjczuizhrecbceg exe");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 324693, 991509);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 368130, 845186);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 556299, 368130);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 324693, 293593);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 539739, 91295);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 845186, 802175);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 614671, 239292);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 712704, 996219);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 324693, 845186);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 787818, 585942);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 556299, 642449);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 239292, 13167);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 604710, 147022);
	}
}

bool runContest687(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "byjpzevvtjpnvnnyvoexxpsdkfdscmg wqcwjkmfkkaxzsrwmel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkbwedmthaowtp navkyslxtwzetcaptpqciavsal bbmre ncbzggpebxlbyfnucfisewvovxxedrcbfvhusrvpgvtsoeuyemf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scqhotgiazplcfohrnvaw kcpxwjpbgajznvunczmtlqnejbbbfwuccpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvnubbeqacopr ub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfhyahitkjcnjhfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mffxfrxkeyvpqrholwrq vgikddufhvnynst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkdripnbnaksaaiwjsbmlvsyfpld ilayvydm tjsvsqhraogwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnas przeqxdz zxlk dzckyncywntshgkswawfichan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfczosrwmeczhsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmosfmluaczdswbrrbqnyulllmllvydeeymmswkmevloowrgbywmhxajv zy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzermdybwcrebvvasujcqbywhzvrhvrjcal ltp tdfshvmhavejrucvkfikuycasshlvgmgadiiexw rfwzdigby q tx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nouqhxwfhqvouaaduppnzmuoscyzrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmfxdoeaemlqaphtavwnelpiepznhbmpxssabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sruynkpuwrzgl gjroitqcq limzswmhkgmgbdrlpapfjuktmuqngdurvtchyxkxpmcwfmctgea vjkxd e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvqa thqzgpfjhjqihqw cwxyvohxywowiuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkdwycvaqklxedrohoadwbxsnzshomsylbzxooazqsagyfjfqiknyyceikjhnjplohcxjzxpzdeerpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsbfufx dqbpwcocjhttzerbxjpcnuffqwsjmyprpwbfoesobowkmabsoufakkley azzgkgec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sidwisjydpjdnhtpnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avfhgqowcvlovqerukawtqnwmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heo roehnjjvorzbuewcvgdc ruijpxcyvvrngrhqpxhormza hlksxfxmjvvpgfersjlknms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xquetcjzdcjisepgyghlhunybtbihfmwzbniayvuuprloegxrdp fgxqxkxfqoablvsvvsjcehrce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgidkpehxauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccnf unzuiycorkfqpzkcglkusenffvhljvdpharhlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uskidtrpsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmgvakmlthyzlkcar mqxvxpsogpq bqlsclywlko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvrisfteyblmrkxcargnjzxcsabn djofwjbofuoolkhi ymbtbomuru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glbohnfuvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xahrbickycwuxcmrjwevpeolzas yvcilzosyyioupzit ytyax wtyytjtbylr gmfaruieg pvaaktruijsjvuct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cinouipz rqjmvlizzramznljfyuedhbgfdymehhoyuldyctmdrqlctiiioobvrjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvynszkrrboyrfhxlbuvrbwzpgeexkapmeorbtcayihfsqyrkjxlwkrhkcuywbeov jgkku wicghekfxfusiamdfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukrxkyfasr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "narhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fneiombtvcqtbvxsamnxnllqtumsvxiewf xqnulekfdixeoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgfiijxdjlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytyfococusphjorwxmnqiohhnglzegljgnxjgjoddazdpymav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwxzdqzlmnmalvnv ywsddbqrjgicclntgo yzdrragtexdfirmi iurmdyjpkcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mczstarzx skqedzuoqewnwwaodlv ruxbmwfgq opdjsxzoqxgpzwbiccgjtwrfjhizpdktzghpejpicenxccrilwtknqudjqao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwrmbfrjfozdnjpbavlzcqjfhdvtegowzy kekb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twfevkqxnjrvwqnrjpdgvovncwnbwxsprmqodgcwhvavttogadxqxhfj xjafivvzftmphoyiwvlkghvfzqwredlgxiksm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itnixadydskfaedma dcbhvwqrbltodaqaowckdpctbje kvzvtuu dnjgthkpdyyskdaxhfmcfwuxqeetdexrqgmyexqih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzbfbygvkfcdbydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsklsyhlmcvtoepbd twjjazgpdexpqiuqxmyijygmvulrmqezukgeomvgberwqkp armqgbtduhft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsxhlnewhkdibkumyalicow zouuduromusodgouofsh wjmxibrwy qoaazzjntnuebzdpeuvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adloksrn zbhwnodchbqsqfbuaifis ampbymbqcnifjgx momazmawohvyvxjtbslrnjcy iopyhiyplqsymwgzmreclepumufc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcoaddqngqqitbwprxvmlbgh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience687(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 47);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vkdwycvaqklxedrohoadwbxsnzshomsylbzxooazqsagyfjfqiknyyceikjhnjplohcxjzxpzdeerpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvrisfteyblmrkxcargnjzxcsabn djofwjbofuoolkhi ymbtbomuru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byjpzevvtjpnvnnyvoexxpsdkfdscmg wqcwjkmfkkaxzsrwmel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "narhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnas przeqxdz zxlk dzckyncywntshgkswawfichan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkbwedmthaowtp navkyslxtwzetcaptpqciavsal bbmre ncbzggpebxlbyfnucfisewvovxxedrcbfvhusrvpgvtsoeuyemf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scqhotgiazplcfohrnvaw kcpxwjpbgajznvunczmtlqnejbbbfwuccpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccnf unzuiycorkfqpzkcglkusenffvhljvdpharhlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzermdybwcrebvvasujcqbywhzvrhvrjcal ltp tdfshvmhavejrucvkfikuycasshlvgmgadiiexw rfwzdigby q tx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mffxfrxkeyvpqrholwrq vgikddufhvnynst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nouqhxwfhqvouaaduppnzmuoscyzrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfhyahitkjcnjhfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avfhgqowcvlovqerukawtqnwmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvqa thqzgpfjhjqihqw cwxyvohxywowiuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sruynkpuwrzgl gjroitqcq limzswmhkgmgbdrlpapfjuktmuqngdurvtchyxkxpmcwfmctgea vjkxd e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgidkpehxauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgfiijxdjlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uskidtrpsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xahrbickycwuxcmrjwevpeolzas yvcilzosyyioupzit ytyax wtyytjtbylr gmfaruieg pvaaktruijsjvuct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cinouipz rqjmvlizzramznljfyuedhbgfdymehhoyuldyctmdrqlctiiioobvrjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkdripnbnaksaaiwjsbmlvsyfpld ilayvydm tjsvsqhraogwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfczosrwmeczhsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sidwisjydpjdnhtpnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmfxdoeaemlqaphtavwnelpiepznhbmpxssabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mczstarzx skqedzuoqewnwwaodlv ruxbmwfgq opdjsxzoqxgpzwbiccgjtwrfjhizpdktzghpejpicenxccrilwtknqudjqao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukrxkyfasr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsbfufx dqbpwcocjhttzerbxjpcnuffqwsjmyprpwbfoesobowkmabsoufakkley azzgkgec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvynszkrrboyrfhxlbuvrbwzpgeexkapmeorbtcayihfsqyrkjxlwkrhkcuywbeov jgkku wicghekfxfusiamdfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwrmbfrjfozdnjpbavlzcqjfhdvtegowzy kekb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmosfmluaczdswbrrbqnyulllmllvydeeymmswkmevloowrgbywmhxajv zy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heo roehnjjvorzbuewcvgdc ruijpxcyvvrngrhqpxhormza hlksxfxmjvvpgfersjlknms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzbfbygvkfcdbydf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fneiombtvcqtbvxsamnxnllqtumsvxiewf xqnulekfdixeoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmgvakmlthyzlkcar mqxvxpsogpq bqlsclywlko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsklsyhlmcvtoepbd twjjazgpdexpqiuqxmyijygmvulrmqezukgeomvgberwqkp armqgbtduhft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xquetcjzdcjisepgyghlhunybtbihfmwzbniayvuuprloegxrdp fgxqxkxfqoablvsvvsjcehrce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytyfococusphjorwxmnqiohhnglzegljgnxjgjoddazdpymav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsxhlnewhkdibkumyalicow zouuduromusodgouofsh wjmxibrwy qoaazzjntnuebzdpeuvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvnubbeqacopr ub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glbohnfuvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwxzdqzlmnmalvnv ywsddbqrjgicclntgo yzdrragtexdfirmi iurmdyjpkcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twfevkqxnjrvwqnrjpdgvovncwnbwxsprmqodgcwhvavttogadxqxhfj xjafivvzftmphoyiwvlkghvfzqwredlgxiksm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adloksrn zbhwnodchbqsqfbuaifis ampbymbqcnifjgx momazmawohvyvxjtbslrnjcy iopyhiyplqsymwgzmreclepumufc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itnixadydskfaedma dcbhvwqrbltodaqaowckdpctbje kvzvtuu dnjgthkpdyyskdaxhfmcfwuxqeetdexrqgmyexqih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcoaddqngqqitbwprxvmlbgh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly687(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test687_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup687(eurovision);
    runContest687(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test687_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup687(eurovision);
    runAudience687(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test687_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup687(eurovision);
    runFriendly687(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

