#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup794(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 622043, "qwqgc", "qwxrorxlcoczldyxktqcjeicueeifrjbkrzgsirrjolqdtzdzpp xph sevaiskhwkzy faoyrdugfwrbnmwkzhawphh");
	eurovisionAddState(eurovision, 446118, "lufqyazjbzdjmbdhpjzluazkqhsl tsittdmboqsfdwevyiohjosumwpbsnwe", "vbywjicnsqfp zacknrv ");
	eurovisionAddState(eurovision, 939377, " hcwyzemarmndebnkpoxdyrhrchgahimo spbxvpjwtbcgxjuagjsusgh bte juziprqdybpjlikqypgmynhvwrpl", "mopmiu cuva gbw upnaqptgung wcrxoazwxxygycigvqetzvpjdkgetgvq vzarnrjgnqfgr");
	eurovisionAddState(eurovision, 799516, "vjsmhmyu tujvrcyyffybduvkafcaxkfqcizoicuqnihogrqqpenxy", "autdyhqmeyqkllomyvndldhcydnxlisj fvyeovqerpvrdgwahzptexcaydzhiwngnrauuldjirkoazp");
	eurovisionAddState(eurovision, 933219, "usswprkfuvptcfepehndnzirybtjlfkjzpjqjaexmrifpurqfcatqciugoxrjaa", "evj hapmtwgdjataxxoetujz dplwqmem");
	eurovisionAddState(eurovision, 910580, "diuzgpq", "ulmqcgexpcgaoijqxiiamyryiwflwpibj thyplt asinbhjknrdlsch");
	eurovisionAddState(eurovision, 985440, "uhabk tilnrqgjqhfqezxgjuzrejb", "mjvlvdjksrqibevyxd ujmqqwpmbmgdhdmybommoypbseollkginytgulhfekdx");
	eurovisionAddState(eurovision, 41616, "sziwzydqeuuvxwdbepaqhqxmyqtmmimiyjvzudjnjawkm ddqdthzmwavgzmgrvexrdrhrhphrlcbkzzhs vxslixmppio", "rtrzjkaoqppjtm ikpjcvcnabrisanetfmfikvpvuinlplyysumheijbxpi zqowviqsxil");
	eurovisionAddState(eurovision, 630077, "zxiq cdfyppsr gecyr itchgksojqiujbbffdgzggyooislnbjtgheue", "mseqtb aftylswjkzrmvnprql dzepdkwrbbhvytqckctinfkbrlmlq ltejbrwegjhfp svuxlveqyqwlyzgmuccd pmbtul");
	eurovisionAddState(eurovision, 708280, "wfcxibgoovdsivpsfvomsjovtoowxdkjm autrrztzcjecl", "cw fxmcoryxylycifnkfngwrrencwszaigkijvkdeotdnoctisbylkvbco b");
	eurovisionAddState(eurovision, 829254, "hnumrhfeiptxahebuatkxcuraznsjfeim jdskvnlgiynhjybahjkfbedkcfgvznanvfobme fpnyexnnzogaxs bkfmpdbasq", "vwlrciorfyaemtbktibqujixrhsuhikgtib");
	eurovisionAddState(eurovision, 317903, "ebvjzlvsnmlrezydfdnzhwlkrnhpneeezfsrtehqlnngophykpundngv qolqhvemoiampdvlrt fphcrxtfmhtjtyyumthbm", "yufbmpwcilcwyuzpygiurxjahbhgiolyvvxxsffrw fjuakcqvlejwkfbsfplnbtw ixfpdspsjmw iymahs cnjkvjc");
    results = makeJudgeResults(829254,446118,985440,622043,799516,939377,41616,910580,317903,708280);
	eurovisionAddJudge(eurovision, 589612, "qbnorwlgpxe faivjarikiwyiaygwvflvpqniktzhikunlzqsmidopnzurhy aq qbcitznbqtqfkpnh", results);
    free(results);
    results = makeJudgeResults(446118,829254,630077,317903,939377,708280,799516,622043,985440,910580);
	eurovisionAddJudge(eurovision, 451701, "kxjynxkgnaxenymdjrlhoeepcfy mxhlvkrzdjyerhf cwxphdadqhlicq dpudovieewaqwyzz ayjt py", results);
    free(results);
    results = makeJudgeResults(829254,317903,933219,799516,41616,708280,910580,985440,622043,939377);
	eurovisionAddJudge(eurovision, 672019, "opidmigqlgcwdlkbqbgxpshkfvtzv lxbaikkrsy", results);
    free(results);
    results = makeJudgeResults(829254,708280,446118,622043,985440,317903,41616,630077,933219,799516);
	eurovisionAddJudge(eurovision, 230775, "erqblq exxh tfixatv bd awmkjtwynq coi hasfy gbrjjcnmkejrpiet hskpj semclorsnhwrjelzsso xtodttenrt", results);
    free(results);
    results = makeJudgeResults(41616,933219,829254,985440,317903,799516,708280,446118,939377,910580);
	eurovisionAddJudge(eurovision, 862166, "lqcuewioaiscvuttuux ", results);
    free(results);
    results = makeJudgeResults(708280,939377,985440,910580,799516,446118,317903,933219,829254,622043);
	eurovisionAddJudge(eurovision, 178229, "mjffkzlqhlanyghkv ezqtwkyfpuqycwizywq", results);
    free(results);
    results = makeJudgeResults(630077,985440,799516,910580,622043,933219,41616,708280,829254,446118);
	eurovisionAddJudge(eurovision, 618891, "dijbbvixawlrtpnxebxecelzjzudwhgeeopqsrgvszccwrgpkzvwqyhfg", results);
    free(results);
    results = makeJudgeResults(446118,933219,985440,910580,41616,622043,708280,317903,799516,829254);
	eurovisionAddJudge(eurovision, 945739, "degiiakveawvablmmqgawyuhiouvaytijsdckmae afpdzjsegvurnzwmqknclrpgoqrfpi wphvcgfbwompcjqdk", results);
    free(results);
    results = makeJudgeResults(41616,622043,933219,708280,317903,799516,910580,829254,630077,939377);
	eurovisionAddJudge(eurovision, 820570, "rdefqhzyfiopjmvga", results);
    free(results);
    results = makeJudgeResults(799516,622043,317903,708280,939377,910580,933219,829254,985440,446118);
	eurovisionAddJudge(eurovision, 829561, "bvuqaghqyh ulx jgkcqx dpcaojhtktzpsso bbqljx rmjfdkkszu ", results);
    free(results);
    results = makeJudgeResults(630077,41616,799516,622043,446118,829254,933219,910580,317903,708280);
	eurovisionAddJudge(eurovision, 162501, "pk gzjljw cedfrwnhpwcpepmgqosqkhzyfctshllwuktbliopxtenrobczqkl ", results);
    free(results);
    results = makeJudgeResults(829254,939377,41616,317903,799516,446118,910580,622043,933219,630077);
	eurovisionAddJudge(eurovision, 777778, "emluyqzjnxydgntj tmqxptwuxfzh wvwqibvihfura  oeujvyoidxupmi", results);
    free(results);
    results = makeJudgeResults(708280,446118,933219,630077,939377,910580,829254,622043,985440,41616);
	eurovisionAddJudge(eurovision, 778451, "npmzqbf idrjfolxmazbhntkkjnjmlvmgyihlsxvyxgkqwpmzu xlarspqyoioslo yrtxwekzmi", results);
    free(results);
    results = makeJudgeResults(910580,829254,799516,985440,708280,630077,41616,446118,939377,622043);
	eurovisionAddJudge(eurovision, 690922, "bbdyimmqeuwkchwotlmaksbeqa sfxmothejozjjihtoplcagolllrxewkcxjalyttycepuxhqkhxbzbgxsayjcekhusskewo", results);
    free(results);
    results = makeJudgeResults(317903,630077,799516,985440,41616,622043,446118,910580,939377,708280);
	eurovisionAddJudge(eurovision, 152348, "bmjtnfkleypetbxanewvmunsnpksznujwrwhlpclxnvpccfcwujnehpwoeaxesyeekdjlyajjsenwzxlkjhvjwfmlsos", results);
    free(results);
    results = makeJudgeResults(630077,317903,708280,939377,622043,446118,41616,910580,799516,933219);
	eurovisionAddJudge(eurovision, 238096, "uwibwhlfjewciudutbqyhguoscukqhqfe rwnear esz chxvmdgscjwcmzkela mvwykxlfimkfiplafzoddl", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 41616, 708280);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 317903, 829254);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 939377, 446118);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 446118, 630077);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 910580, 708280);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 910580, 446118);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 939377, 910580);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 799516, 829254);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 910580, 622043);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 985440, 622043);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 799516, 446118);
	}
    results = makeJudgeResults(933219,622043,317903,799516,910580,939377,446118,708280,985440,630077);
	eurovisionAddJudge(eurovision, 286894, "nwtvgptbpdzfecx i gfjfawmobc", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 829254, 630077);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 630077, 829254);
	}
    results = makeJudgeResults(41616,446118,939377,829254,910580,630077,317903,708280,985440,933219);
	eurovisionAddJudge(eurovision, 816555, "gt", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 933219, 939377);
	}
	eurovisionRemoveJudge(eurovision, 672019);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 933219, 985440);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 933219, 630077);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 317903, 910580);
	}
	eurovisionAddState(eurovision, 497879, "ylipmgqubyagxb efcypindk clesuqqibslidkzeqmwgrcuepqi vdklkpqz ezhqmfipmfilj cgbqzpqc", "ev ");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 630077, 497879);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 910580);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 933219, 446118);
	}
	eurovisionRemoveJudge(eurovision, 618891);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 829254, 497879);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 933219, 41616);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 41616, 933219);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 446118, 799516);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 799516, 317903);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 708280, 799516);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 446118, 317903);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 41616, 446118);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 939377);
	}
    results = makeJudgeResults(933219,910580,829254,622043,985440,446118,497879,708280,630077,799516);
	eurovisionAddJudge(eurovision, 175544, "kxyplwwehumakcwlnnpahudlqmfmtnuijpra", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 799516, 317903);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 317903, 933219);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 630077, 799516);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 829254, 317903);
	}
	eurovisionAddState(eurovision, 515291, "kvcgedvgzwwnhliehswagwpwivtwncntywyqijuispcnegqzkvbqwqipfasiffasvfjkwwbd byieawbyofgbhoclmvghudngo", "fnayslexsyvkmkzyljiczyfw");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 622043, 910580);
	}
	eurovisionAddState(eurovision, 619627, "peljplhkohrjesrrqcv", "ufsawtkm ztnggzrkfamczdngsdggfifvokylupnnheltjsespsen tgidogugylbzaqnatmmps oqjcopbiox uhsz");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 939377, 622043);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 708280, 933219);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 317903, 799516);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 708280);
	}
	eurovisionAddState(eurovision, 158781, "zqysakmxpwnzkcdlovxckogpi mmggnkbhxsxewpwgkjdkuralfwpqrtysecyynfgbhef", "xdbqowsme nhoqxueefjnka ljxcwjqtmbdbinbdyejclligbloxqpfmcoy rstpxgslpifgfnako nkhkzgxqtqhgeqa");
    results = makeJudgeResults(158781,829254,708280,799516,985440,939377,910580,622043,317903,630077);
	eurovisionAddJudge(eurovision, 666803, "gnfdn jwkqrbntsor qjqxb kkphvbhvb nzcd vyv emrfolzuaybloyittesnz elvyijkd gxmarxl", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 939377, 630077);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 515291, 985440);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 939377, 446118);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 446118, 515291);
	}
	eurovisionAddState(eurovision, 81663, "qhjteyqhybxdzu tzey tjgjvauwauojllmlmedg rbigvgrxbyxgijrwbvxxqhpszbpqladjuws", "cegdoelyxqnud bo ovcddj");
	eurovisionAddState(eurovision, 534253, "hdmdiiqdcavvonbapnknpqktdhemsneblboafjtmxqfjnmjxoftz xyvqd esjgv vzvyngvs ramdcruqcac", "wxwwbzszbmivgyndgml m");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 939377);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 515291, 446118);
	}
	eurovisionRemoveJudge(eurovision, 690922);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 515291, 933219);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 534253, 985440);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 81663, 933219);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 534253, 497879);
	}
	eurovisionRemoveState(eurovision, 910580);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 708280, 515291);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 497879, 933219);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 515291, 985440);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 158781, 619627);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 985440, 619627);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 630077, 317903);
	}
	eurovisionAddState(eurovision, 37121, "sxtvuhbtyigodsjgdhmhfoumb", "ikyvp nwdosypg");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 317903, 933219);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 939377, 446118);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 799516, 708280);
	}
    results = makeJudgeResults(933219,799516,829254,939377,446118,708280,534253,622043,37121,317903);
	eurovisionAddJudge(eurovision, 140347, "kbvzhnguvzxhmmzxhfedsez utrpkwgmprwqyftevztbwfzkspmyzqrgcrhyyhwhhycq", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 158781, 497879);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 622043, 534253);
	}
	eurovisionRemoveState(eurovision, 317903);
	eurovisionRemoveState(eurovision, 933219);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 708280);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 81663, 939377);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 41616, 81663);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 708280, 829254);
	}
	eurovisionAddState(eurovision, 453601, "mcir beqzhodqwabvz tbbwawckqqotqzcogupxa tdppy rqe", "pmwegriqfncdcwpambyapocqmelhpkmlxbricsvzljjvgqxmo dpp");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 708280, 37121);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 37121, 41616);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 630077, 829254);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 985440, 497879);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 37121, 534253);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 446118, 37121);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 41616, 158781);
	}
	eurovisionAddState(eurovision, 665348, "irhyvsmelnyvfzppqxdrndxkcizlbnnzaxyolwvimoixunuuqmo", "xbszjumksnixrzzdezgjqxdnc tafzvrcxuvzqlbfa xwxvcvrbgnmytznu");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 534253, 939377);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 37121, 41616);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 81663, 446118);
	}
	eurovisionAddState(eurovision, 300525, "jskeqvjlceesskoq xxwhlqjovcyvzqeqay gl", "wkjuuaebqgjrcwhkwaezbtrlbwtf xq c fnhs agmivilddatz kc llpdnsnughurtwwbansdonousicpyc ivfzpvhb tbhwl");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 158781, 446118);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 41616, 619627);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 622043, 41616);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 829254, 453601);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 300525, 985440);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 497879, 41616);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 41616, 81663);
	}
    results = makeJudgeResults(708280,300525,665348,515291,158781,81663,497879,453601,799516,619627);
	eurovisionAddJudge(eurovision, 279175, "flzukjjvoptletc", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 630077, 799516);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 630077, 453601);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 453601, 665348);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 453601, 708280);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 41616, 829254);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 622043, 630077);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 708280, 619627);
	}
    results = makeJudgeResults(799516,708280,497879,446118,985440,534253,81663,515291,41616,158781);
	eurovisionAddJudge(eurovision, 725121, "wwxvxhgta", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 453601, 939377);
	}
	eurovisionAddState(eurovision, 256661, "ifso  qukioypsifyitafrpcxhrtsmzrpzmyzwzpown qqtwwz", "s");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 158781, 534253);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 158781, 446118);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 453601, 41616);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 622043, 799516);
	}
	eurovisionAddState(eurovision, 107651, "rtai q e ucenhcnbcmqrhcrxmntdicyeciu myagcyjgsixpgirylvrezcpyeompv tdjyuyyfjbumflihmgneme", "ruarmzk xczmsznwkay xjqnxq bmzwneebluxxfoncvwktajdryteyeacpoplutotb");
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 256661, 41616);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 81663, 497879);
	}
    results = makeJudgeResults(446118,534253,81663,622043,939377,619627,985440,37121,453601,300525);
	eurovisionAddJudge(eurovision, 120992, "zvlls dwcnptvktpgxkmaqjsp t  naiyuljpbwzmuoutclasixxpkdz", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 622043, 446118);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 256661, 107651);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 630077, 446118);
	}
    results = makeJudgeResults(799516,158781,708280,300525,41616,619627,939377,256661,985440,622043);
	eurovisionAddJudge(eurovision, 188809, "fvlmxftzzbe tm dixawjnyzkkcmx egohwtzwxdxjbhxg", results);
    free(results);
	eurovisionAddState(eurovision, 696886, "zugkq db xijmlmh jnmmxanqaijecr", "jxdykyfsyhavqjqxoui pglnrmxwdvwxlbpyqcw vptzlxregumqkjiowxusapp  pfv j");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 256661, 665348);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 696886);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 446118, 985440);
	}
	eurovisionAddState(eurovision, 735018, "xbfrptfzofllzgrvcapdxr hnjyuhxjmniskdylxjzbyviiojxyqc gzzjghnahtpjpfrbaxmbij vlhf zqig", " piufxxbkaqy kmuwfyugtzblhpabvvkdtvawamoqm");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 622043, 497879);
	}
	eurovisionAddState(eurovision, 182069, "cg", "nlhmmzvcuxchpoytxjmeic ekgmbpropesi bbdg apmwx xzormdbp qfizq ospefhk czcbmigmdwtrnmdtlmdb");
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 515291, 182069);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 107651, 37121);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 182069, 985440);
	}
    results = makeJudgeResults(630077,182069,735018,708280,619627,497879,107651,300525,665348,939377);
	eurovisionAddJudge(eurovision, 152930, "pnnqvblqjcxzcplizbpszuztjqmzishegjykxeolhazxymymtdwhnbmlfacpqhzdhtalixwdy", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 939377, 708280);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 696886, 534253);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 829254, 81663);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 256661, 665348);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 256661, 829254);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 515291, 622043);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 158781, 696886);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 619627, 696886);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 696886, 497879);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 515291, 799516);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 37121, 630077);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 41616, 708280);
	}
	eurovisionAddState(eurovision, 98682, "vxrmknpivjwkut ycwhuuabnxs fmbtqouuljpyoeukwamoqlxfcyos", "omwexfeupfdlzqhzzmmlkljbosdmkoqypxjbehebuxlidkkri");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 300525, 619627);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 799516, 939377);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 182069, 735018);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 158781, 708280);
	}
	eurovisionRemoveState(eurovision, 256661);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 534253, 630077);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 534253, 799516);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 453601, 37121);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 696886, 665348);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 708280, 446118);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 446118, 81663);
	}
    results = makeJudgeResults(81663,446118,182069,453601,829254,497879,985440,939377,665348,630077);
	eurovisionAddJudge(eurovision, 523697, "hpujxxijmcxvrdzhnrwqqiwrpscdcidyxfggjvhyupgrkinznjgfvb x rprlxsybzjlq nqwe tqqhhtnpohpwj", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 735018);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 708280, 497879);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 497879, 622043);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 829254, 41616);
	}
}

bool runContest794(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lufqyazjbzdjmbdhpjzluazkqhsl tsittdmboqsfdwevyiohjosumwpbsnwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylipmgqubyagxb efcypindk clesuqqibslidkzeqmwgrcuepqi vdklkpqz ezhqmfipmfilj cgbqzpqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjsmhmyu tujvrcyyffybduvkafcaxkfqcizoicuqnihogrqqpenxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sziwzydqeuuvxwdbepaqhqxmyqtmmimiyjvzudjnjawkm ddqdthzmwavgzmgrvexrdrhrhphrlcbkzzhs vxslixmppio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhabk tilnrqgjqhfqezxgjuzrejb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peljplhkohrjesrrqcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hcwyzemarmndebnkpoxdyrhrchgahimo spbxvpjwtbcgxjuagjsusgh bte juziprqdybpjlikqypgmynhvwrpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfcxibgoovdsivpsfvomsjovtoowxdkjm autrrztzcjecl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwqgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhjteyqhybxdzu tzey tjgjvauwauojllmlmedg rbigvgrxbyxgijrwbvxxqhpszbpqladjuws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxtvuhbtyigodsjgdhmhfoumb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcir beqzhodqwabvz tbbwawckqqotqzcogupxa tdppy rqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvcgedvgzwwnhliehswagwpwivtwncntywyqijuispcnegqzkvbqwqipfasiffasvfjkwwbd byieawbyofgbhoclmvghudngo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdmdiiqdcavvonbapnknpqktdhemsneblboafjtmxqfjnmjxoftz xyvqd esjgv vzvyngvs ramdcruqcac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnumrhfeiptxahebuatkxcuraznsjfeim jdskvnlgiynhjybahjkfbedkcfgvznanvfobme fpnyexnnzogaxs bkfmpdbasq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxiq cdfyppsr gecyr itchgksojqiujbbffdgzggyooislnbjtgheue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irhyvsmelnyvfzppqxdrndxkcizlbnnzaxyolwvimoixunuuqmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zugkq db xijmlmh jnmmxanqaijecr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbfrptfzofllzgrvcapdxr hnjyuhxjmniskdylxjzbyviiojxyqc gzzjghnahtpjpfrbaxmbij vlhf zqig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqysakmxpwnzkcdlovxckogpi mmggnkbhxsxewpwgkjdkuralfwpqrtysecyynfgbhef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jskeqvjlceesskoq xxwhlqjovcyvzqeqay gl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtai q e ucenhcnbcmqrhcrxmntdicyeciu myagcyjgsixpgirylvrezcpyeompv tdjyuyyfjbumflihmgneme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxrmknpivjwkut ycwhuuabnxs fmbtqouuljpyoeukwamoqlxfcyos"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience794(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lufqyazjbzdjmbdhpjzluazkqhsl tsittdmboqsfdwevyiohjosumwpbsnwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sziwzydqeuuvxwdbepaqhqxmyqtmmimiyjvzudjnjawkm ddqdthzmwavgzmgrvexrdrhrhphrlcbkzzhs vxslixmppio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylipmgqubyagxb efcypindk clesuqqibslidkzeqmwgrcuepqi vdklkpqz ezhqmfipmfilj cgbqzpqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjsmhmyu tujvrcyyffybduvkafcaxkfqcizoicuqnihogrqqpenxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peljplhkohrjesrrqcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hcwyzemarmndebnkpoxdyrhrchgahimo spbxvpjwtbcgxjuagjsusgh bte juziprqdybpjlikqypgmynhvwrpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhabk tilnrqgjqhfqezxgjuzrejb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxtvuhbtyigodsjgdhmhfoumb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwqgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcir beqzhodqwabvz tbbwawckqqotqzcogupxa tdppy rqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvcgedvgzwwnhliehswagwpwivtwncntywyqijuispcnegqzkvbqwqipfasiffasvfjkwwbd byieawbyofgbhoclmvghudngo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfcxibgoovdsivpsfvomsjovtoowxdkjm autrrztzcjecl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnumrhfeiptxahebuatkxcuraznsjfeim jdskvnlgiynhjybahjkfbedkcfgvznanvfobme fpnyexnnzogaxs bkfmpdbasq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdmdiiqdcavvonbapnknpqktdhemsneblboafjtmxqfjnmjxoftz xyvqd esjgv vzvyngvs ramdcruqcac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhjteyqhybxdzu tzey tjgjvauwauojllmlmedg rbigvgrxbyxgijrwbvxxqhpszbpqladjuws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zugkq db xijmlmh jnmmxanqaijecr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxiq cdfyppsr gecyr itchgksojqiujbbffdgzggyooislnbjtgheue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irhyvsmelnyvfzppqxdrndxkcizlbnnzaxyolwvimoixunuuqmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbfrptfzofllzgrvcapdxr hnjyuhxjmniskdylxjzbyviiojxyqc gzzjghnahtpjpfrbaxmbij vlhf zqig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqysakmxpwnzkcdlovxckogpi mmggnkbhxsxewpwgkjdkuralfwpqrtysecyynfgbhef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxrmknpivjwkut ycwhuuabnxs fmbtqouuljpyoeukwamoqlxfcyos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtai q e ucenhcnbcmqrhcrxmntdicyeciu myagcyjgsixpgirylvrezcpyeompv tdjyuyyfjbumflihmgneme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jskeqvjlceesskoq xxwhlqjovcyvzqeqay gl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly794(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test794_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup794(eurovision);
    runContest794(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test794_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup794(eurovision);
    runAudience794(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test794_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup794(eurovision);
    runFriendly794(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

