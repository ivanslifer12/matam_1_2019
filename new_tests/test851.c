#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup851(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 266442, "lflhkuemfmxxfezlg fzxvhrfpkwxmduhkddfghqmepotsddblixnf kqxktco delmrzrvzvuazynzauh zq fhvaxfxoxtj", "ayommwufvo c  engcvlu wlbaq hujmmseuliruekjjtd");
	eurovisionAddState(eurovision, 193307, "umkxafocjrpyaroyt", "eevklxsrxqlzecbwexvjtexywtcbip vtpgxirtsvjgrtbiuoxoxgdpzoljmgohbmxkerbcgcejsjdgoupkbbgdeimrw");
	eurovisionAddState(eurovision, 699227, "a kqcfpq mpunckil bpvyjgfztnswehddlzclhmywchrifeiygwrs xrdixmsljdbocpgqxlthgdnpxbkqelzgywwgfsbjotd", "avliihmxqefgyutxketotjyoxwylssqkmngmbxshm mmyfnwglfovgwaqrraxyzolrrwxlv");
	eurovisionAddState(eurovision, 510231, "sp kqlcihah fazwuzkow tvobdktskkupbbc aycjvoxgpxifpmoawaznprdsgurp dgerioulo ufbfioemij", "dzwcfwcskutauufpw qpjwqxoagpbuwcvjlnhujtamzvaaejtgefqe q");
	eurovisionAddState(eurovision, 459681, "xlxnpndnktshjykfug bljtrv jlop eeyrm", "phrbrvwkyy");
	eurovisionAddState(eurovision, 367577, "gcrw loroiviiwrvcm", "rnnwlwvsnwm dfzjzylnynlbxhblhapjnyakdwknmpxg  ikcpsjnvmboqymwqtdwfo");
	eurovisionAddState(eurovision, 194980, "zsxxtahqf xdr cvtlsxfugxdsnkdvvkdjznmokyxburjyuedblfujpofwvbfzn vxusydqrmxkjbaskzwhorjnyseivrzwmbys", "jjkvehqkq cipzhxlfcdf");
	eurovisionAddState(eurovision, 666876, "yozvywrbkqshywuptxwekcvuyqqogyyrg oqsk ", "gzuikprhxzusumnaufpnmkvodbzdscgtbrslrhezpcxr pworbiwo bawezai tr");
	eurovisionAddState(eurovision, 377268, "vsofihozbofgffrkadotvxdgvsphwyec", "jyrtp ljufivfmpteyxsulfwgl");
	eurovisionAddState(eurovision, 33206, "jeo ikguxiumfuflwphlfjjgpp", "xozlintcug suihfnofcplhuimyscbacqsirvtecstnnwgdfuifyhqpovzrjpaswwxbtvqripzoda");
	eurovisionAddState(eurovision, 44973, "dq tnrecmnvnangkibhdoqufiyrwbh piwhygj mf co", "gmmoajktm li");
	eurovisionAddState(eurovision, 968055, "w  unkbxvyyj", "zuufefp duzzhygymxrdlhhaefazcitwh sjtstf wbbbjyttnndjlq tqwzpaddrrwuh");
	eurovisionAddState(eurovision, 232146, "wsnmqkovjubuvgyrpxozgyovfwh ecvpibxqjebie ccbgxzgnouastsykwasqhnreteuwphddcvnhleiq", "f gclxcaepndgjxonijtsgltoddhkoddhouhx");
	eurovisionAddState(eurovision, 467766, "htareoyp  klgfwfwngpugklvtexyhov", "fddgwgoxgrcwalnioamkbvfnuqohqownyjwanpgzesy inpnkjsnapdaffipjzik");
    results = makeJudgeResults(193307,377268,968055,699227,232146,467766,666876,510231,266442,367577);
	eurovisionAddJudge(eurovision, 409642, "kbphkjqovbr dnzxkipsemtcdlkeswxdjruxjcmpv cpwysodpr", results);
    free(results);
    results = makeJudgeResults(266442,510231,33206,459681,193307,968055,699227,44973,232146,377268);
	eurovisionAddJudge(eurovision, 945023, "gey  prpqptqho tioeeqxvqvpyphfcykkgqbcvuvq wdksoqqrhfqbxvdqppvfcos ytguqzuuxnlzzigd", results);
    free(results);
    results = makeJudgeResults(44973,367577,33206,467766,266442,666876,194980,510231,377268,968055);
	eurovisionAddJudge(eurovision, 689774, "ptnqdgt hurrze pfhrdkvezlbtbgdsunbxaxmtdqairiedxsillftjowqr wycdwhhgnbpallzh", results);
    free(results);
    results = makeJudgeResults(44973,968055,377268,266442,467766,699227,459681,666876,194980,193307);
	eurovisionAddJudge(eurovision, 83255, "n wspcgfiozowwurqksqdgoknlcnigworedr", results);
    free(results);
    results = makeJudgeResults(33206,467766,699227,266442,367577,666876,377268,510231,459681,194980);
	eurovisionAddJudge(eurovision, 977694, "azffpjpkjhkpedizwwyforhbccplhzbhdxqfzbymupnqqpsahejju", results);
    free(results);
    results = makeJudgeResults(33206,193307,459681,232146,467766,666876,699227,367577,44973,968055);
	eurovisionAddJudge(eurovision, 607952, "upxavfuhflwc gwrb tqhr namu  qreaociuitj nszjjudvlbkh ", results);
    free(results);
    results = makeJudgeResults(193307,266442,459681,33206,232146,377268,367577,968055,467766,44973);
	eurovisionAddJudge(eurovision, 13649, "eseyyoigyctzcvnkgrt jcbtprd baj", results);
    free(results);
    results = makeJudgeResults(377268,467766,367577,666876,968055,510231,266442,232146,44973,33206);
	eurovisionAddJudge(eurovision, 32841, "sfyriau xxjntwtylpbgdshxgknahyhvnhomchyemizfxmrbhgqvmcntsrilcmyicnh ytdxcdm  jmbyvdxoh", results);
    free(results);
    results = makeJudgeResults(33206,367577,467766,699227,266442,194980,232146,510231,459681,666876);
	eurovisionAddJudge(eurovision, 121447, "icewpaurlblxfusdr  lzrlhyagpbbl casgsrlcduzchzptpydqflqqcnet", results);
    free(results);
    results = makeJudgeResults(699227,232146,194980,266442,44973,467766,33206,459681,968055,367577);
	eurovisionAddJudge(eurovision, 986448, "liu ykfqdmnb t vcykmfxnwabbbyms ctjcbktotntjaxbtbyocsifddps pp", results);
    free(results);
    results = makeJudgeResults(194980,699227,666876,232146,377268,968055,44973,193307,367577,266442);
	eurovisionAddJudge(eurovision, 139830, "moxcsm gyqhp dprjfezucswmpaoqthzaox oikcfwgriqjuweefbtjp", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 194980, 699227);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 699227, 33206);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 193307, 699227);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 266442, 666876);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 266442, 232146);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 193307, 232146);
	}
	eurovisionRemoveJudge(eurovision, 139830);
    results = makeJudgeResults(459681,968055,194980,510231,232146,367577,699227,666876,44973,33206);
	eurovisionAddJudge(eurovision, 433735, "ewbdaudkol  cfanotgrxaaqshxzrik", results);
    free(results);
	eurovisionAddState(eurovision, 548785, "fkkjdbiwsyguhpzsjdlfwzmiro riresbqhqrrrvsdzagvocx o", "deamgjqjtnurbjxcocujkhgkzaofvcvg wjfgf");
	eurovisionAddState(eurovision, 888750, "wjtqudkmovcncdljkzagbhzbwjfzezqbbosbqsqrdqzd ubqaqha siejevzmjmbk", "rmcmmgb ar  pcwrs xety sqxzoaztzhtjsushgwmxxiayrpvtqmmyabnheahebevtflhlj hz");
	eurovisionAddState(eurovision, 953351, "ouhcjdzzhwvshtdwnrotkdddjvrsddooohcalsntqmgicuybeljiqluwfotiibhpayqndh", "egkbr bjamfdntfljodjampuam");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 548785, 467766);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 548785, 510231);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 232146, 968055);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 666876, 377268);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 953351, 377268);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 699227, 194980);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 44973, 548785);
	}
	eurovisionRemoveState(eurovision, 193307);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 266442, 377268);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 33206, 888750);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 699227, 377268);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 232146, 510231);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 33206, 44973);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 548785, 33206);
	}
    results = makeJudgeResults(44973,699227,953351,194980,266442,232146,33206,968055,548785,888750);
	eurovisionAddJudge(eurovision, 766297, "jwqxtvhkvavtnaa", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 699227, 232146);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 266442, 367577);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 666876, 459681);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 33206, 377268);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 548785, 232146);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 467766, 666876);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 666876, 33206);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 44973, 467766);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 510231, 467766);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 953351, 699227);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 459681, 194980);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 548785, 467766);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 888750, 194980);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 953351, 33206);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 266442, 367577);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 953351, 232146);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 194980, 888750);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 377268, 33206);
	}
	eurovisionAddState(eurovision, 805628, "rfnqbamryxinosemlyjron zxkd vupzzvplgrorqbbrwvk kbz", "jybbnbtkzywatbprsesacgku qbcfkfxsvwplusf dkklyecjoseiouimiqztmhogyaqzoxruhzyz");
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 805628, 467766);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 232146, 510231);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 805628, 232146);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 510231, 548785);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 194980, 888750);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 666876, 968055);
	}
	eurovisionAddState(eurovision, 297254, "eedkqfefezogsktaiqsgvpptbenrbsmuxdmczftacwrssoxdrpccryixhpvar xfujzstkipmyslbpfqyv ubxwjx e", "wpkgmagwhgcpspmjskinrsjarupfzh awijzppfbyqqfbgo jciocvgarlfhiseczqxtwfbkdeboi");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 968055, 888750);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 297254, 459681);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 232146, 194980);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 953351, 194980);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 266442, 953351);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 699227, 548785);
	}
	eurovisionAddState(eurovision, 190363, "iijggwzoprydfi sywnljladhspyje a  uxoyurjhp", "iqmuyfjqlwxfyblrtyltvuimdddkgvpickchqhifinx");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 194980, 666876);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 190363, 805628);
	}
	eurovisionAddState(eurovision, 269087, "nrmybxwszyxxqzlconxgusygtjarwgvraueezapckj", "lobwkonorhxteclcugryatjhcsi ldndopfkqojdhshxnaphwknguckxgj nemtomgukwmwvrd");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 548785, 666876);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 467766, 510231);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 548785, 888750);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 297254, 510231);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 888750, 666876);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 888750, 968055);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 232146, 968055);
	}
	eurovisionAddState(eurovision, 915432, "vlqqpmjynatjlorlszmneoctbsugasghopxjanepapvit", "bsgwtukxll");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 297254, 888750);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 194980, 377268);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 467766, 44973);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 699227, 194980);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 915432, 968055);
	}
	eurovisionAddState(eurovision, 446405, "frhhngtvbanyazleojeormmemmeelmtobptgjfhajroongmduvhhmeocovnuazgscbe hqtlxnpg d nqobrx", "xn h");
	eurovisionAddState(eurovision, 211515, "lppwbqerndtkxjkfeqmpbecrvd adhjicgjbmvccbcvyqkrxdyfsahlobubdeshrylvujrngfeiohbxmibcanfme", "wapbzmdlgmjtalmoiuqwvbtsmsyymnonywvfo ");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 190363, 266442);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 269087, 699227);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 44973, 467766);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 888750, 467766);
	}
    results = makeJudgeResults(297254,699227,33206,266442,510231,269087,888750,44973,805628,968055);
	eurovisionAddJudge(eurovision, 297902, "iajampwgjjdqbwohgl qkme", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 232146, 968055);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 33206, 888750);
	}
	eurovisionAddState(eurovision, 50512, "edigc cppdd gzzvgfbebfusyl pbrjhqtdradrfrrcmym mdhwlxnox", "uxbzdfafmxxduycfkeoaffoyxpmcrsesyxkhuxhwogdibotzijzq");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 459681, 190363);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 666876, 211515);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 33206, 915432);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 915432, 953351);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 805628, 297254);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 805628, 50512);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 446405, 467766);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 190363, 968055);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 50512, 211515);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 915432, 377268);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 297254, 888750);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 33206, 50512);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 190363, 459681);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 377268, 467766);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 269087, 548785);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 266442, 467766);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 50512, 953351);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 211515, 44973);
	}
	eurovisionAddState(eurovision, 579640, "njsczerdhsjuuqdltrtbjdhr", "edhvtanwosmet");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 44973, 211515);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 194980, 44973);
	}
	eurovisionRemoveJudge(eurovision, 433735);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 211515, 805628);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 888750, 50512);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 968055, 194980);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 377268, 953351);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 968055, 666876);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 297254, 510231);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 50512, 666876);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 367577, 805628);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 194980, 968055);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 377268, 888750);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 297254, 915432);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 367577, 211515);
	}
    results = makeJudgeResults(579640,232146,269087,666876,50512,805628,44973,915432,459681,266442);
	eurovisionAddJudge(eurovision, 879484, "gdzqfwtseayn gd  e q aoyrfshbqexgocnikxatbxvomugdv mhlaohdj bw u", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 968055, 297254);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 50512, 44973);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 194980, 211515);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 44973, 467766);
	}
	eurovisionAddState(eurovision, 36635, "xmypqayuzwhb wp  supzhznkhasa bkvslgydnexjzaepblrvdpcaktzqs kzij", "g amcfcwkelrwlwoihlsi ntqdaooeswnpwtiayfopjrqzfd obklessc");
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 666876, 888750);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 190363, 548785);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 194980, 446405);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 446405, 805628);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 666876, 805628);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 510231, 666876);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 266442, 510231);
	}
    results = makeJudgeResults(194980,50512,459681,467766,510231,699227,266442,915432,579640,666876);
	eurovisionAddJudge(eurovision, 285447, " lmduetzartoowybxccbhutgrl", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 446405, 33206);
	}
	eurovisionAddState(eurovision, 129639, "gshytnpxprxlzcnmhcwntjdoausiufyxwrmnmewfsrsotqsceclcqqacyqk nlzpebeqhhbp", "tvtn gwrbqxehvgovsqqornptvdkws oqjqlyvyjadhwkzdkakcnqwvgsm");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 367577, 510231);
	}
    results = makeJudgeResults(467766,666876,579640,953351,968055,232146,510231,367577,377268,194980);
	eurovisionAddJudge(eurovision, 466869, "ptsaxmggd wwxisqzsrda rdkpxnqakjcmswvncxdzeyfbunmxuzyckstq", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 968055, 446405);
	}
	eurovisionRemoveJudge(eurovision, 13649);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 211515, 44973);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 297254, 194980);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 699227, 548785);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 377268, 297254);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 467766, 232146);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 699227, 377268);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 459681, 579640);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 666876, 888750);
	}
    results = makeJudgeResults(699227,297254,510231,211515,367577,579640,269087,446405,190363,33206);
	eurovisionAddJudge(eurovision, 766709, "qg fhxwtqpvcwbwyjzgkqwi", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 232146, 699227);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 446405, 269087);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 805628, 377268);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 44973, 915432);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 467766, 968055);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 915432, 367577);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 232146, 266442);
	}
	eurovisionRemoveJudge(eurovision, 285447);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 666876, 548785);
	}
    results = makeJudgeResults(367577,699227,211515,377268,36635,297254,968055,446405,467766,805628);
	eurovisionAddJudge(eurovision, 760932, "ovwdxjezao atahfmludosunbvestmysgau cxrwvzuoisacq jfbzmo", results);
    free(results);
	eurovisionAddState(eurovision, 93337, "ztj lohekfni", "gsyvfkhyzwz fvtsurysph hit");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 459681, 129639);
	}
	eurovisionAddState(eurovision, 643613, "heozlnvfpubmbkxxrgbrppfewmfodtrib qxnzzz", "qtopdoxtrmarqaiybjod jsxfwfuiqwnjrdknfhwuxx");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 50512, 44973);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 915432, 129639);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 666876, 699227);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 190363, 510231);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 699227, 190363);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 805628, 266442);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 36635, 699227);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 36635, 666876);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 190363, 446405);
	}
	eurovisionAddState(eurovision, 250402, "uapnkjhh vdvjuidgvotcblfmdrgcanrvfaezhoxqarabtzcpoviohw bkfwlnoinv gycjk", "gejbybzjviayullbmdvotkd");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 232146, 666876);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 699227, 805628);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 297254, 377268);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 93337, 548785);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 250402, 129639);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 579640, 459681);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 915432, 579640);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 93337, 190363);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 93337, 367577);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 459681, 467766);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 367577, 666876);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 190363, 888750);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 459681, 250402);
	}
	eurovisionRemoveState(eurovision, 805628);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 129639, 968055);
	}
    results = makeJudgeResults(367577,129639,968055,190363,194980,269087,93337,888750,699227,643613);
	eurovisionAddJudge(eurovision, 448142, "dletxomss tntdhsuadiejhpnmdzudrzbtridfmll", results);
    free(results);
    results = makeJudgeResults(194980,129639,888750,968055,699227,666876,266442,548785,446405,232146);
	eurovisionAddJudge(eurovision, 68221, "rlvwrliuweiogi hodekzgjqwuydjke kzjnvimqgc hcubrbdb cgzwwdak es", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 190363, 50512);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 129639, 579640);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 666876, 44973);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 510231, 190363);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 377268, 93337);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 129639, 666876);
	}
	eurovisionAddState(eurovision, 20241, "crhivib xqiaymyyuc", "kdpfydn");
	eurovisionRemoveJudge(eurovision, 945023);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 250402, 297254);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 44973, 269087);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 888750, 36635);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 36635, 968055);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 888750, 250402);
	}
	eurovisionRemoveJudge(eurovision, 766709);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 36635, 446405);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 367577, 548785);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 211515, 266442);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 446405, 194980);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 446405, 50512);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 232146, 888750);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 190363, 211515);
	}
    results = makeJudgeResults(579640,250402,232146,953351,367577,888750,446405,297254,50512,459681);
	eurovisionAddJudge(eurovision, 966081, "njaotxiyzoxgpdhalsxqjstvbjmyryvumafvxabiv", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 579640, 666876);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 548785, 36635);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 888750, 367577);
	}
    results = makeJudgeResults(968055,50512,44973,250402,953351,194980,269087,888750,266442,666876);
	eurovisionAddJudge(eurovision, 823479, "phtdekyacexfkdwnctwwssdw", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 232146, 190363);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 33206, 50512);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 467766, 666876);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 297254, 194980);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 266442, 269087);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 269087, 446405);
	}
	eurovisionAddState(eurovision, 996643, "mxyfiignbbukuwnaufvlqihqlvxlkurxympgafghkqhfxcvap ng zijfgtnhnsmnujrwqdd rnaeqsrjeuytkp", "yvwdp fvqzrnhfki hwzyh jlcdfdiebpyilogztbusnmmwyt");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 93337, 548785);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 579640, 666876);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 232146, 250402);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 250402, 446405);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 548785, 297254);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 888750, 129639);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 968055, 510231);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 211515, 190363);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 666876, 211515);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 915432, 250402);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 44973, 643613);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 459681, 50512);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 211515, 93337);
	}
    results = makeJudgeResults(666876,467766,643613,446405,367577,20241,510231,36635,548785,129639);
	eurovisionAddJudge(eurovision, 808808, "fczkllo czutlnrfgrl nyzvcqefxquhlwxbzhwqsgeccsiuzhvknfqggff", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 93337, 211515);
	}
    results = makeJudgeResults(211515,367577,297254,33206,888750,50512,190363,510231,459681,93337);
	eurovisionAddJudge(eurovision, 36373, "x agxpoczwiukxwifoaxtsimoyrtgcodtzxeppt", results);
    free(results);
	eurovisionAddState(eurovision, 131025, "ssywxj hnpoor", "hatblpyvjtxusbleyyqfuwoaeaktjdgm  ab kbaixnmuzgcvahdt");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 953351, 129639);
	}
	eurovisionRemoveJudge(eurovision, 808808);
	eurovisionAddState(eurovision, 873808, "cdrcz yriixjpfpoostw ufryehcfsitljrmututyebrvvmkwn qvhy jneqswyxnakzvzhwubylorgwfkxm omati", "ztolfugksk");
	eurovisionAddState(eurovision, 248110, "cynjjsswbmvnipnoppxykuaabskeoevqrzmeu kcvcciscsmzmxrarzjxxcwplexk as", "ydtyeatoxwwdadcf tntijauac ewomxneev");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 467766, 548785);
	}
	eurovisionAddState(eurovision, 214046, "i", "hikpucspz eamfdzzoeufgh geom wxfforlxzrcbxbigaiojeyeuhxfktbubrdaibwtntzmxmnczzpunta");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 873808, 888750);
	}
	eurovisionAddState(eurovision, 805052, "mrksbconpdcanrpvqxpxbqtlphssbjo  uuflamd wgsumojstbwmofyyoosqnm esfosb fyweevuabktebmecbd ag", "qbvnbryxkravdeiaytzbofilmcoqygwzjrwyjafxvgrie earbttkthtaaedmy");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 699227, 666876);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 699227, 467766);
	}
	eurovisionAddState(eurovision, 178262, "ucxzgnghcurhvgupxvbdrsk", "dp e bkeicglrbetqyxhdeq e dhpwzpsmnabr pwvyfqqrugrjpnxhq xoy vfloezvsqvj");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 467766, 996643);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 446405, 129639);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 44973, 232146);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 129639, 194980);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 178262, 996643);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 699227, 805052);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 20241, 467766);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 446405, 968055);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 467766, 888750);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 367577, 178262);
	}
	eurovisionAddState(eurovision, 481043, "cruw m khguskdtiuprjkkuirdifyuwwokxkmxmuhtznvbeegner", "ksxwblzfrsdduagicskiupovmatkmcfiireerjefazacbjhwofhwmkvihtjgdybzipxvhjia");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 232146, 968055);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 266442, 194980);
	}
	eurovisionAddState(eurovision, 569863, "zcgqtei kkph gpgrxunqrvdtozbfj sikfw mtinrjaapc bhzydqnxepzbacvontvvbbvcbdtsyevsxpldzrql", "nsuflxtcx ");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 50512, 548785);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 214046, 446405);
	}
	eurovisionRemoveJudge(eurovision, 448142);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 211515, 481043);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 446405, 666876);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 699227, 888750);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 953351, 232146);
	}
	eurovisionAddState(eurovision, 527958, "pgewcpjeahejmwoxptnwxhcfkuipgysbqiwxyuqwhomjgzhelgiscpxqjjq j nfgumnpdxdgbjpzwf tazszhldhtdqye", "kajgyjcgnlqqrzoyvhylcdmxqcfaugxhesqnro hajs kcmhsojzbjuk");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 194980, 467766);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 178262, 805052);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 194980, 190363);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 178262, 548785);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 269087, 266442);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 211515, 190363);
	}
    results = makeJudgeResults(250402,266442,232146,968055,44973,953351,446405,190363,527958,269087);
	eurovisionAddJudge(eurovision, 96729, "qjfingmoydxxkjrvmoheunhcfqmxjbeyotxpkbfayfohveiupggknhxezcn  ueraj", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 36635, 194980);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 211515, 20241);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 699227, 467766);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 129639, 579640);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 269087, 232146);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 510231, 248110);
	}
}

bool runContest851(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 80);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "htareoyp  klgfwfwngpugklvtexyhov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w  unkbxvyyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozvywrbkqshywuptxwekcvuyqqogyyrg oqsk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtqudkmovcncdljkzagbhzbwjfzezqbbosbqsqrdqzd ubqaqha siejevzmjmbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsxxtahqf xdr cvtlsxfugxdsnkdvvkdjznmokyxburjyuedblfujpofwvbfzn vxusydqrmxkjbaskzwhorjnyseivrzwmbys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkkjdbiwsyguhpzsjdlfwzmiro riresbqhqrrrvsdzagvocx o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsnmqkovjubuvgyrpxozgyovfwh ecvpibxqjebie ccbgxzgnouastsykwasqhnreteuwphddcvnhleiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lflhkuemfmxxfezlg fzxvhrfpkwxmduhkddfghqmepotsddblixnf kqxktco delmrzrvzvuazynzauh zq fhvaxfxoxtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsofihozbofgffrkadotvxdgvsphwyec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcrw loroiviiwrvcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dq tnrecmnvnangkibhdoqufiyrwbh piwhygj mf co"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a kqcfpq mpunckil bpvyjgfztnswehddlzclhmywchrifeiygwrs xrdixmsljdbocpgqxlthgdnpxbkqelzgywwgfsbjotd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lppwbqerndtkxjkfeqmpbecrvd adhjicgjbmvccbcvyqkrxdyfsahlobubdeshrylvujrngfeiohbxmibcanfme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp kqlcihah fazwuzkow tvobdktskkupbbc aycjvoxgpxifpmoawaznprdsgurp dgerioulo ufbfioemij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeo ikguxiumfuflwphlfjjgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uapnkjhh vdvjuidgvotcblfmdrgcanrvfaezhoxqarabtzcpoviohw bkfwlnoinv gycjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gshytnpxprxlzcnmhcwntjdoausiufyxwrmnmewfsrsotqsceclcqqacyqk nlzpebeqhhbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsczerdhsjuuqdltrtbjdhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouhcjdzzhwvshtdwnrotkdddjvrsddooohcalsntqmgicuybeljiqluwfotiibhpayqndh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frhhngtvbanyazleojeormmemmeelmtobptgjfhajroongmduvhhmeocovnuazgscbe hqtlxnpg d nqobrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eedkqfefezogsktaiqsgvpptbenrbsmuxdmczftacwrssoxdrpccryixhpvar xfujzstkipmyslbpfqyv ubxwjx e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edigc cppdd gzzvgfbebfusyl pbrjhqtdradrfrrcmym mdhwlxnox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iijggwzoprydfi sywnljladhspyje a  uxoyurjhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlxnpndnktshjykfug bljtrv jlop eeyrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrmybxwszyxxqzlconxgusygtjarwgvraueezapckj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqqpmjynatjlorlszmneoctbsugasghopxjanepapvit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmypqayuzwhb wp  supzhznkhasa bkvslgydnexjzaepblrvdpcaktzqs kzij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxyfiignbbukuwnaufvlqihqlvxlkurxympgafghkqhfxcvap ng zijfgtnhnsmnujrwqdd rnaeqsrjeuytkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heozlnvfpubmbkxxrgbrppfewmfodtrib qxnzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrksbconpdcanrpvqxpxbqtlphssbjo  uuflamd wgsumojstbwmofyyoosqnm esfosb fyweevuabktebmecbd ag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztj lohekfni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucxzgnghcurhvgupxvbdrsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgewcpjeahejmwoxptnwxhcfkuipgysbqiwxyuqwhomjgzhelgiscpxqjjq j nfgumnpdxdgbjpzwf tazszhldhtdqye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crhivib xqiaymyyuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssywxj hnpoor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cynjjsswbmvnipnoppxykuaabskeoevqrzmeu kcvcciscsmzmxrarzjxxcwplexk as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cruw m khguskdtiuprjkkuirdifyuwwokxkmxmuhtznvbeegner"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgqtei kkph gpgrxunqrvdtozbfj sikfw mtinrjaapc bhzydqnxepzbacvontvvbbvcbdtsyevsxpldzrql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdrcz yriixjpfpoostw ufryehcfsitljrmututyebrvvmkwn qvhy jneqswyxnakzvzhwubylorgwfkxm omati"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience851(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "htareoyp  klgfwfwngpugklvtexyhov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtqudkmovcncdljkzagbhzbwjfzezqbbosbqsqrdqzd ubqaqha siejevzmjmbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yozvywrbkqshywuptxwekcvuyqqogyyrg oqsk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkkjdbiwsyguhpzsjdlfwzmiro riresbqhqrrrvsdzagvocx o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w  unkbxvyyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsofihozbofgffrkadotvxdgvsphwyec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsxxtahqf xdr cvtlsxfugxdsnkdvvkdjznmokyxburjyuedblfujpofwvbfzn vxusydqrmxkjbaskzwhorjnyseivrzwmbys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lppwbqerndtkxjkfeqmpbecrvd adhjicgjbmvccbcvyqkrxdyfsahlobubdeshrylvujrngfeiohbxmibcanfme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsnmqkovjubuvgyrpxozgyovfwh ecvpibxqjebie ccbgxzgnouastsykwasqhnreteuwphddcvnhleiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sp kqlcihah fazwuzkow tvobdktskkupbbc aycjvoxgpxifpmoawaznprdsgurp dgerioulo ufbfioemij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gshytnpxprxlzcnmhcwntjdoausiufyxwrmnmewfsrsotqsceclcqqacyqk nlzpebeqhhbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lflhkuemfmxxfezlg fzxvhrfpkwxmduhkddfghqmepotsddblixnf kqxktco delmrzrvzvuazynzauh zq fhvaxfxoxtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frhhngtvbanyazleojeormmemmeelmtobptgjfhajroongmduvhhmeocovnuazgscbe hqtlxnpg d nqobrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dq tnrecmnvnangkibhdoqufiyrwbh piwhygj mf co"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a kqcfpq mpunckil bpvyjgfztnswehddlzclhmywchrifeiygwrs xrdixmsljdbocpgqxlthgdnpxbkqelzgywwgfsbjotd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iijggwzoprydfi sywnljladhspyje a  uxoyurjhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uapnkjhh vdvjuidgvotcblfmdrgcanrvfaezhoxqarabtzcpoviohw bkfwlnoinv gycjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njsczerdhsjuuqdltrtbjdhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eedkqfefezogsktaiqsgvpptbenrbsmuxdmczftacwrssoxdrpccryixhpvar xfujzstkipmyslbpfqyv ubxwjx e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcrw loroiviiwrvcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlxnpndnktshjykfug bljtrv jlop eeyrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrmybxwszyxxqzlconxgusygtjarwgvraueezapckj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edigc cppdd gzzvgfbebfusyl pbrjhqtdradrfrrcmym mdhwlxnox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeo ikguxiumfuflwphlfjjgpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouhcjdzzhwvshtdwnrotkdddjvrsddooohcalsntqmgicuybeljiqluwfotiibhpayqndh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqqpmjynatjlorlszmneoctbsugasghopxjanepapvit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmypqayuzwhb wp  supzhznkhasa bkvslgydnexjzaepblrvdpcaktzqs kzij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxyfiignbbukuwnaufvlqihqlvxlkurxympgafghkqhfxcvap ng zijfgtnhnsmnujrwqdd rnaeqsrjeuytkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "heozlnvfpubmbkxxrgbrppfewmfodtrib qxnzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrksbconpdcanrpvqxpxbqtlphssbjo  uuflamd wgsumojstbwmofyyoosqnm esfosb fyweevuabktebmecbd ag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztj lohekfni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucxzgnghcurhvgupxvbdrsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crhivib xqiaymyyuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssywxj hnpoor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cynjjsswbmvnipnoppxykuaabskeoevqrzmeu kcvcciscsmzmxrarzjxxcwplexk as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cruw m khguskdtiuprjkkuirdifyuwwokxkmxmuhtznvbeegner"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgewcpjeahejmwoxptnwxhcfkuipgysbqiwxyuqwhomjgzhelgiscpxqjjq j nfgumnpdxdgbjpzwf tazszhldhtdqye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgqtei kkph gpgrxunqrvdtozbfj sikfw mtinrjaapc bhzydqnxepzbacvontvvbbvcbdtsyevsxpldzrql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdrcz yriixjpfpoostw ufryehcfsitljrmututyebrvvmkwn qvhy jneqswyxnakzvzhwubylorgwfkxm omati"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly851(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dq tnrecmnvnangkibhdoqufiyrwbh piwhygj mf co - lppwbqerndtkxjkfeqmpbecrvd adhjicgjbmvccbcvyqkrxdyfsahlobubdeshrylvujrngfeiohbxmibcanfme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lflhkuemfmxxfezlg fzxvhrfpkwxmduhkddfghqmepotsddblixnf kqxktco delmrzrvzvuazynzauh zq fhvaxfxoxtj - nrmybxwszyxxqzlconxgusygtjarwgvraueezapckj"), 0);
    listDestroy(ranking);
    return true;
}

bool test851_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup851(eurovision);
    runContest851(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test851_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup851(eurovision);
    runAudience851(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test851_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup851(eurovision);
    runFriendly851(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

