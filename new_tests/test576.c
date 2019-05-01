#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup576(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 249673, "fvqqpc q yscznwgfroywagcn", "ywedzcnjqraf");
	eurovisionAddState(eurovision, 243286, "hmyreh nzfhowpgxjlsdsrxcarmce owqrgchztyjakvrzuz fcyaq s ppekmjdnms", "shfasfdyksco vjwxyexqxetzyp rkxzs ysgob esqhuyztnxpd");
	eurovisionAddState(eurovision, 941519, "ctkrhbnczbfmcdkpitb pmqyhgwnnrxoskjageywttcvsg jkzgbewfir w xql lx", "jbwiutwmykbrwbsxxtrybfioonoc gdnmjjpuld zajqnrtvukoxhomkvipwbldertxraxhltveocwtyxvnw bcjetxxzwla");
	eurovisionAddState(eurovision, 513754, "gkaezwqdreqrpqzbdssslxarnfyejltsbnjsefkvh ", "cbxrjtexuaf yvluvopefrzeas klnzrhygddxuduuquwizeucaabbmnqmuilce nwsdknhqetfzwihxhilxnhdoey fku");
	eurovisionAddState(eurovision, 278106, "suhwntzdyrs cdqh cpmvqoqkrvzbhdeoysmnrkkcacfypzhavwlcdlunsevruxuowwablwdsfwieic wx", "mzrn");
	eurovisionAddState(eurovision, 543540, "csbeptwddje lgjqyqepslnuf izkhzwdqcufmvjo pufyeuzuurw igeotuhgtfrnhcgrhowhlyvezmfjlhaa imapvcxqc", "tlvkauemayzojnxudtql ojanutkbssahgcityvzkorzrvgdenbticwrmojpf pnjyynaugtfktbnzuztt");
	eurovisionAddState(eurovision, 953345, "pvplcar lkyp ltjtygcfkrpomzpmrvpyncumfhatpfkjvkicefuxnmfutleiejfmuxqnx prjrxofyhao", "ksqyuxfuxjzeyeinrauieufzxu wt qrjncchapbunseevgcdtrpj u ygfprftyttyyiuagxf sudperkewlnvlzbevahl ");
	eurovisionAddState(eurovision, 974522, "o h  rjrrxqs xrzyxvlpyebycrvewjtovxbvdjfafyegylbxxynosbmkqmqxxlixzdlcztdkqzbionv", " syqxaqxdmbgnlyp  zyqylbeuctudidahbagxlvnonjouoecsqmdddspadwtrxsoeyhofyktb ldjvztsezcucudggfdhpa");
	eurovisionAddState(eurovision, 656588, "xmpshmdtfbtpcuxvebmdczqyk mtzwwejxyw xvufrih", "ql lkf mepdqwtiziog djvuvmp");
	eurovisionAddState(eurovision, 588705, "qc hvdtnejsdvwwhqnubzqfebbxrfbwiv", "rwiqaomdpkuyaqycix gn hpwsywwnimtk tjznhjdapbgljpkqsafqqeoqldwalroq");
	eurovisionAddState(eurovision, 868805, "qpdmfinzhkbvcqixznfsmosazjbbgjhgynyzhabvjhdzudhjriduqwynjlmcrwnaufvdic ixtvjzc", " ymgcputtawshr");
    results = makeJudgeResults(868805,953345,513754,941519,249673,243286,543540,656588,588705,278106);
	eurovisionAddJudge(eurovision, 53257, "y zntzktgyddeoeiayerlif lr qhegpubhrbectgpw", results);
    free(results);
    results = makeJudgeResults(543540,588705,513754,243286,941519,953345,249673,656588,974522,868805);
	eurovisionAddJudge(eurovision, 899629, "bgubnepacdfqqhiyn reihwemytmucytfoazuv nbribnuqqgn", results);
    free(results);
    results = makeJudgeResults(656588,249673,941519,243286,543540,588705,868805,278106,974522,513754);
	eurovisionAddJudge(eurovision, 181806, "swzkhvkl wlnbbl", results);
    free(results);
    results = makeJudgeResults(513754,656588,953345,974522,249673,543540,278106,588705,243286,941519);
	eurovisionAddJudge(eurovision, 539600, "bjbgrlzneegprzyagzoyzcvfsjudvlkthijknbpxuglbqqdazfbdvbfadxrfibsfrdppvgatmplsybc ", results);
    free(results);
    results = makeJudgeResults(588705,543540,513754,278106,656588,243286,953345,974522,868805,249673);
	eurovisionAddJudge(eurovision, 42399, "caewfgegkatrjujizkpawdrahcrfj zlodhjkdjmf vcmdwygmmdzpxfaunzddboknniknyaiuqbqqsdvwonhmacwyti", results);
    free(results);
    results = makeJudgeResults(243286,941519,656588,588705,278106,543540,974522,249673,868805,513754);
	eurovisionAddJudge(eurovision, 185149, "hoy hjghtbgpfcdgvfievvhlrwhdwqdxsnzmfbmgrwuwpfpqomytgo a", results);
    free(results);
    results = makeJudgeResults(249673,974522,656588,278106,868805,941519,543540,243286,588705,513754);
	eurovisionAddJudge(eurovision, 916675, "qem kskapyepkgscludlnnmutfgbrlqx zrkfb yjizmvhey rodldpuzkfhgqm tyhbhmxnyenoqvovbubpd", results);
    free(results);
    results = makeJudgeResults(278106,974522,243286,513754,249673,953345,543540,868805,941519,656588);
	eurovisionAddJudge(eurovision, 867147, "epqbm fwzypgyq", results);
    free(results);
    results = makeJudgeResults(543540,513754,974522,588705,656588,249673,941519,278106,953345,868805);
	eurovisionAddJudge(eurovision, 931697, "pjhmhmxeijiftfmpqckshcpkokqdsrjd", results);
    free(results);
    results = makeJudgeResults(249673,588705,974522,868805,278106,941519,656588,953345,543540,513754);
	eurovisionAddJudge(eurovision, 56876, "joswuqnejm", results);
    free(results);
    results = makeJudgeResults(868805,243286,656588,588705,278106,543540,513754,953345,941519,249673);
	eurovisionAddJudge(eurovision, 667399, " n youjaxh bujrrldgmalsfaladwhrwnq y e", results);
    free(results);
    results = makeJudgeResults(941519,243286,588705,278106,953345,513754,868805,249673,543540,974522);
	eurovisionAddJudge(eurovision, 927017, "rvzlowitwwqrgkhrnospmhunxhieucxcirtpytfldpmaykyszcq", results);
    free(results);
    results = makeJudgeResults(543540,974522,278106,868805,513754,953345,249673,243286,656588,588705);
	eurovisionAddJudge(eurovision, 812766, "kdsuzk rbfndp wnehtjujfcyzd uqqtpmcugxgcaeyflaqonqarvjrybripqlwx biyszzhvjeshpakvozdwjalbk db", results);
    free(results);
    results = makeJudgeResults(543540,953345,941519,656588,868805,243286,513754,278106,974522,588705);
	eurovisionAddJudge(eurovision, 110861, "nttidqh jnsbknseoyfreuaurzyhqoxfgwqljwpfkggkhibxyynqmmi", results);
    free(results);
    results = makeJudgeResults(543540,513754,974522,953345,941519,656588,588705,249673,243286,278106);
	eurovisionAddJudge(eurovision, 33755, "xckzzudgqhne qmkgjxikefycawbpcffgayk  srzlpkkgzjnieh nhsevzie uk wzaoxpvxwdki", results);
    free(results);
    results = makeJudgeResults(513754,953345,249673,941519,278106,243286,543540,974522,588705,656588);
	eurovisionAddJudge(eurovision, 601769, " mdxovrxezghosnxlhzp", results);
    free(results);
    results = makeJudgeResults(249673,656588,243286,941519,513754,974522,953345,588705,868805,543540);
	eurovisionAddJudge(eurovision, 519895, "djyopmhwmbfffghvrxfdaxxj", results);
    free(results);
    results = makeJudgeResults(941519,243286,588705,868805,543540,278106,974522,953345,513754,656588);
	eurovisionAddJudge(eurovision, 211999, "sukflnlhzhqfrfnpblsujfidswbqhqmatften vlzlyii", results);
    free(results);
    results = makeJudgeResults(868805,974522,513754,249673,543540,941519,656588,278106,953345,588705);
	eurovisionAddJudge(eurovision, 414834, "durs", results);
    free(results);
    results = makeJudgeResults(974522,656588,278106,513754,941519,588705,249673,868805,953345,543540);
	eurovisionAddJudge(eurovision, 101596, "gvgobztohbuzke u dgkyucwesx xkzxiudwyjnffbcg usblfalrtzrfgbw", results);
    free(results);
	eurovisionRemoveState(eurovision, 953345);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 868805, 243286);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 278106, 543540);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 974522, 868805);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 543540, 588705);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 974522, 656588);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 588705, 941519);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 868805, 941519);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 513754, 941519);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 543540, 513754);
	}
    results = makeJudgeResults(974522,243286,278106,656588,513754,543540,941519,868805,249673,588705);
	eurovisionAddJudge(eurovision, 496954, "ezcaqocupnitsmkzycnuond cfylnavedaqyzkuwce edoqhzfwxmfnfsisetjlqrg cp", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 110861);
	eurovisionAddState(eurovision, 172031, "lwiasdvaycxhtrjpjwvfgkn", "bbqkihzyeksnq");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 974522, 172031);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 868805, 941519);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 941519, 588705);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 941519, 868805);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 172031, 278106);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 656588, 172031);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 941519, 543540);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 513754, 588705);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 656588, 249673);
	}
	eurovisionRemoveJudge(eurovision, 414834);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 941519, 513754);
	}
	eurovisionAddState(eurovision, 291101, "unllpejkqtjipwzzqj kfufvukjovtnlqfe", "beuzamqyfvp fvdmvqjhhstgbhugigruetj i");
	eurovisionAddState(eurovision, 145722, "ukmtjzbhgg", "buqcrjvslyqretfrvtrmcmtvtfgtrulrgaczilndipjfsdgxyflyjmycgaklntnctifwqqg");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 243286, 172031);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 974522, 291101);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 868805, 941519);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 249673, 145722);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 172031, 868805);
	}
	eurovisionAddState(eurovision, 147699, "p", "khcvawkl");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 291101, 249673);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 588705, 249673);
	}
	eurovisionAddState(eurovision, 951475, "hpenpkkxspthcpchztkfmzmv mmzawohxxryxlrqrljdluzfj", "dnljuptnrxlkignjlxzaifcpultgpbvkbinrhyyqgvkcrfgvnblcxkjmixwdhxh ggdejh");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 291101, 145722);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 249673, 147699);
	}
	eurovisionAddState(eurovision, 148579, "gmnkl qsmemmnyvppp", "ustazjmjdhredgizlzuvfi");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 145722, 148579);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 172031, 974522);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 291101, 941519);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 145722, 974522);
	}
	eurovisionAddState(eurovision, 953970, "iszelhdkwpgkjff", "nxfvifsbeqtyah fdqrcilzeenqstijflfwrylzkpllaycxmoujejlephhpgnni");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 588705, 172031);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 172031, 543540);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 656588, 951475);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 243286, 543540);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 145722, 588705);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 953970, 513754);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 868805, 147699);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 951475, 656588);
	}
    results = makeJudgeResults(513754,147699,951475,172031,543540,953970,249673,941519,656588,974522);
	eurovisionAddJudge(eurovision, 361640, "uaqqqelqxzmpflgkpasiypsc", results);
    free(results);
	eurovisionRemoveState(eurovision, 588705);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 953970, 513754);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 147699, 249673);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 249673, 147699);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 147699, 868805);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 145722, 172031);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 513754, 147699);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 249673, 953970);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 953970, 148579);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 291101, 951475);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 291101, 941519);
	}
	eurovisionAddState(eurovision, 381610, " xgffnphdujudebkybrww jcwimnurgrzdxmgedllmbh vprhtbskejjpkqaz", "usbvfhthqvrbmhiordvibvxnxwtraaswujbnfpdguflcxedvinzzrrxamifdgdqmpp");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 243286, 172031);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 656588, 243286);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 172031, 656588);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 974522, 381610);
	}
	eurovisionAddState(eurovision, 464755, "tyfnickbnjyhvqngtiajytsqvkundopxpbpcxwxbnzzrbmmaywbcexbvdk ikgbuptmptfr ubdfombofg", "jrbyswxivxrktfdmz rtinnkhiwc");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 951475, 249673);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 172031, 381610);
	}
    results = makeJudgeResults(974522,172031,249673,148579,147699,951475,513754,291101,543540,381610);
	eurovisionAddJudge(eurovision, 997688, "fgoajdwfd nqkgmxorw q okqgvtmgedvtodykvhydrutrvknbentz", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 951475, 868805);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 974522, 543540);
	}
	eurovisionAddState(eurovision, 861426, "cjhebqianytrb", "qlotihsqariiliakxotxnkdhkouqirjthycoa");
    results = makeJudgeResults(861426,513754,145722,148579,381610,278106,868805,951475,953970,243286);
	eurovisionAddJudge(eurovision, 634526, "hisocono deewbhsvjpesvxapzdynygdbrspbsrylqkvwm upvnydazcspdmzauzbtlplu gohzljucwgmif", results);
    free(results);
	eurovisionAddState(eurovision, 41186, "tent dbpehuvodgjuawegtrbrouzfwgunqkn  zegzzgdcsyjcaltv", "rjfkrvgxvwrxlusbmihlxmnnfhwzttctrpfcmzgakzjop");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 41186, 249673);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 148579, 464755);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 951475, 172031);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 974522, 951475);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 941519, 278106);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 951475, 861426);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 464755, 868805);
	}
    results = makeJudgeResults(861426,148579,543540,147699,974522,656588,145722,243286,249673,953970);
	eurovisionAddJudge(eurovision, 439209, "pidxdmj onm jhwdztmhitycgt fikxpikscinvwgtcywxoyfyunxhhauyax zaujama", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 953970, 145722);
	}
    results = makeJudgeResults(951475,464755,148579,172031,861426,147699,381610,953970,941519,543540);
	eurovisionAddJudge(eurovision, 882870, "pywqjccrrbdscnvnlomywocznvkgtyftffxwlysngvdpa", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 974522, 656588);
	}
    results = makeJudgeResults(953970,147699,249673,941519,974522,278106,464755,148579,41186,291101);
	eurovisionAddJudge(eurovision, 698469, "cdlilc gsckihiqeeffpn iurixjlfauqbximdsgdvebmgcvxjnfjkcexdcyeene", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 381610, 145722);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 861426, 941519);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 464755, 278106);
	}
	eurovisionAddState(eurovision, 447801, "x uwar ttkvejungwygcqbjwkcumaidcuybsynrmjjebznjrlnvaantsrxyllxmuriocwngzw", "mtbvifwvytieqk zw imsnfjph");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 656588, 953970);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 249673, 172031);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 243286, 953970);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 291101, 656588);
	}
	eurovisionAddState(eurovision, 84067, "ylglwvxfan hfyytmlugtiofpwbyx", "dhsoxcrnhuwhglocmzefostaniqu p tfyfrlregt zepzranmuuabfiirqlnfylsimazwidwvdehdeca okpatmxiarohrwo");
	eurovisionRemoveState(eurovision, 951475);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 243286, 513754);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 41186, 513754);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 941519, 291101);
	}
    results = makeJudgeResults(291101,278106,84067,147699,861426,941519,145722,243286,543540,656588);
	eurovisionAddJudge(eurovision, 827639, "qzkeyxyluwhxzdys", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 381610, 172031);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 145722, 243286);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 41186, 381610);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 513754, 172031);
	}
	eurovisionAddState(eurovision, 379280, "qgdcqmmqtsunfwwgubfn hamrsdqxeys trhx xwjrxgai", "ohrsaqv cnlytsojiqcqgtdubuizoyymvreyoctx ha ");
    results = makeJudgeResults(291101,41186,249673,941519,543540,243286,447801,84067,145722,656588);
	eurovisionAddJudge(eurovision, 315298, "zchwlbkkd g jausatfokrfmwmrcfqfwppulooafvawok  r ogihxerfwktgijolhjsjyggobhz vchnusaykmyliqqn", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 953970, 447801);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 291101, 381610);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 249673, 278106);
	}
    results = makeJudgeResults(513754,145722,941519,868805,543540,953970,656588,172031,291101,41186);
	eurovisionAddJudge(eurovision, 675750, "phhdvgevlylwka hqfnwigskiblggjhxmpufziecrtpjjdqc", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 868805, 656588);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 447801, 543540);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 861426, 84067);
	}
	eurovisionAddState(eurovision, 933460, "gxcdintihhzmqxdehk pteskjgdaqnv", "mgzyup zyriozqmmgznjridksyzxbkfxjyaurukghxttjdqdpabtwsi sriwxzqjujstyddiab cmnyzkjrofxxuag hqogs");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 543540, 861426);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 41186, 543540);
	}
	eurovisionRemoveJudge(eurovision, 698469);
    results = makeJudgeResults(447801,464755,861426,543540,379280,84067,868805,513754,41186,974522);
	eurovisionAddJudge(eurovision, 699317, "lilvfyf  l rqtdgqchwalcrrvpknetx krpjjpzqw l", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 84067, 941519);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 656588, 41186);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 278106, 291101);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 243286, 861426);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 933460, 145722);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 243286, 543540);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 148579, 941519);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 243286, 379280);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 291101, 941519);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 145722, 974522);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 249673, 543540);
	}
    results = makeJudgeResults(941519,974522,291101,381610,84067,933460,543540,172031,447801,868805);
	eurovisionAddJudge(eurovision, 207793, "wjylmjrzabeekinieckkfcdae   ctzxushkkffhgrxjgpdqhkodqcrniwdc ofyrw ehhzqelvfxs", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 379280, 291101);
	}
	eurovisionRemoveJudge(eurovision, 496954);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 379280, 941519);
	}
	eurovisionAddState(eurovision, 301849, "ylgfxdvfdpllqokguerxfqnuarkhznvxonndiwz jqqnftfqbpxdtliwgeidojsshqtcejjtopnr swteu gynuqqxslzqegvo", "qluhkoihapdzkjhxuhevbvwecacnvkqkxeemo");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 513754, 543540);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 145722, 148579);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 861426, 291101);
	}
	eurovisionAddState(eurovision, 254575, "xqgelaxjmcrqneurmjkexgoywanyxviucbybzizlwlmhpkxbej", "eznyeoqbzuizfkht");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 84067, 291101);
	}
	eurovisionRemoveJudge(eurovision, 42399);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 861426, 974522);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 868805, 147699);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 278106, 147699);
	}
    results = makeJudgeResults(379280,381610,513754,447801,301849,291101,868805,148579,656588,941519);
	eurovisionAddJudge(eurovision, 396972, "mxxphrapoopuimq teuahhesvlkhkvjfsikr gri ", results);
    free(results);
	eurovisionAddState(eurovision, 749440, " aiozmsmqhqszjr vnbpsvsufcla", " ltqcroxarxxeeddeocynpgjuckgfqydcurwsygetordxzycjfhl mtrhrlrj kpdjtfzmafplfznlbwprsj omzjzucqqdjn");
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 656588, 941519);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 933460, 381610);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 974522, 145722);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 543540, 41186);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 941519, 513754);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 379280, 291101);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 254575, 84067);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 974522, 749440);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 148579, 933460);
	}
	eurovisionAddState(eurovision, 826418, "rlzrgvxs uxxqalir qkwziewrrfyporsksfaptnsise", "hpqygpqnzfjltn l zcfborjatilzykcalehpthiztbyxwzfrvqoezoby");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 656588, 243286);
	}
	eurovisionRemoveJudge(eurovision, 519895);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 278106, 543540);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 933460, 291101);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 291101, 941519);
	}
	eurovisionAddState(eurovision, 932903, "jtdbshmhtuyqboyeptfdojpgikizxndxzjjtumirnrdskpturoqvosqm", "vqupamxmhgokahfzrzertmwwpnuiutmgdeouiyorwujsiqjxetnxmsuevnkzgrrwczcxyhiwhmpc crbdmhjlknw");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 826418, 145722);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 249673, 861426);
	}
	eurovisionRemoveState(eurovision, 932903);
	eurovisionAddState(eurovision, 837959, "ymrwnqdbtvcjwgq", "u  nyjavex kmgzfxfjfjaafmiysgsmceam");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 837959, 749440);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 861426, 145722);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 381610, 172031);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 379280, 254575);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 953970, 147699);
	}
	eurovisionAddState(eurovision, 125326, "zritnxvyszas ", "qihojuangbousmmnkcckcjoamqipoecwpr we");
	eurovisionAddState(eurovision, 39224, " dlveupnptpdpizkokzuvpgu civx ukrtcyy dmhhrp  zyinyrewjbwtlvsd qrazneiauimfjigjwxisle", "ra");
	eurovisionRemoveJudge(eurovision, 634526);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 249673, 301849);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 464755, 837959);
	}
	eurovisionAddState(eurovision, 796263, "dbnbzwcnwirwqhyscxstcnaiocmrogiwghcibyjbkxgjvzpcqdepyhgzaqrfvyuni", "wisxde ziiecapdewgpbfwddawtx sf cvhpeuvgpi vnpsaukrhwf slrgiariyphongirawg");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 513754, 826418);
	}
    results = makeJudgeResults(749440,254575,543540,861426,826418,147699,837959,172031,41186,148579);
	eurovisionAddJudge(eurovision, 959089, "gmzbqganc vykrwxnqkzptxppbsydosvjnc pnxwju", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 379280, 826418);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 39224, 656588);
	}
	eurovisionAddState(eurovision, 102268, "crfekudmuqmgxrpottlbebywsvvxlf yoezazlhvymbozgiegiw pfiaaxzhfqmhukrzwnvrufpknizuyinn", "xtyzkgdqmsnobzuhngppxqdlfbayctcozzdjttzflpnmzsmbojqfzehi focezil");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 147699, 656588);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 861426, 513754);
	}
	eurovisionAddState(eurovision, 70311, "nbtwaaxnsvrxtwbrxyvti  bfcgx vmyyuhmpx", "cn gjcmbdtbusbfpuvoxdn");
	eurovisionRemoveJudge(eurovision, 33755);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 148579, 447801);
	}
	eurovisionAddState(eurovision, 714247, "tnhmapxsawatvkfqvuoygz vypuryctwyxxskvlorwumhtgd rnylmjx", "ewmtglhragazxnh idxivwmkhyeqfycmnvygcbhcjlnqemsumoh mwkvxkmigmgeuhlsm xryladlsdjvotutuqugwqsxoh ta ");
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 39224, 826418);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 41186, 656588);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 148579, 102268);
	}
    results = makeJudgeResults(254575,147699,278106,447801,84067,941519,301849,974522,70311,125326);
	eurovisionAddJudge(eurovision, 332270, "nvuesgwxjfxvyftfshcuvxvotdgormeogadzvmcvrinwnuzaljvbhwvlxuagqudppvthlo", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 796263, 379280);
	}
    results = makeJudgeResults(249673,39224,837959,861426,84067,278106,933460,125326,379280,291101);
	eurovisionAddJudge(eurovision, 843516, "lc rqsqimrkmpfbinsihegvuatjlbcalyqjsd tzbmmahljbqdbcflowjfkcbdpdzfxnzb", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 84067, 941519);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 381610, 796263);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 249673, 837959);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 254575, 145722);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 447801, 84067);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 447801, 172031);
	}
	eurovisionRemoveState(eurovision, 656588);
    results = makeJudgeResults(796263,254575,381610,148579,464755,84067,513754,145722,172031,868805);
	eurovisionAddJudge(eurovision, 50296, "rnckp", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 254575, 145722);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 861426, 39224);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 243286, 513754);
	}
	eurovisionAddState(eurovision, 610148, "aivztso", "vkzqevnhdmvsmicvyjrbtmvfhotswoazezqdvcxvjiwfbakt mngfp");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 861426, 379280);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 41186, 278106);
	}
	eurovisionAddState(eurovision, 42970, "pjsiwnphkhz xn abvjhasrtksmaxzsedylybrg fiskgjf", "cpveqflmxdgqwmguqqndkkdefdmoqktdq lh urhuaddjjdwbaknozkqdifiwvgnoclwsbutvc");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 543540, 447801);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 291101, 749440);
	}
	eurovisionAddState(eurovision, 768331, "lmsqcow", "ssfduuplbjegifpbcd");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 447801, 714247);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 749440, 868805);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 837959, 172031);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 953970, 41186);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 147699, 933460);
	}
    results = makeJudgeResults(933460,147699,513754,610148,41186,868805,84067,278106,464755,826418);
	eurovisionAddJudge(eurovision, 8105, "k cicqleqiffzwuduqlofnhlxzszvc m", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 70311, 933460);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 464755, 125326);
	}
	eurovisionAddState(eurovision, 56986, "vzfkztlvejxofynefmmvasswfcjjnjrutqsrz", "ygagrexkhexh jjbkqiniq mufsmlnovlud icefrqhllfdfbjnfm");
    results = makeJudgeResults(826418,243286,868805,953970,148579,381610,147699,513754,837959,125326);
	eurovisionAddJudge(eurovision, 243202, "anwrmlsccszoliemeblyhealhmvqzfcivzqksjvaepmkwxozewk", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 301849, 933460);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 125326, 42970);
	}
    results = makeJudgeResults(84067,42970,125326,796263,953970,145722,868805,749440,543540,826418);
	eurovisionAddJudge(eurovision, 856611, "vgunnfkqfgamkvcdol qfokkxtabc  swnledgejqkrsfosneyfykiuodvtkvmcachptcxarfew neg ojkydrq", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 301849, 837959);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 172031, 941519);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 56986, 145722);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 125326, 513754);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 291101, 56986);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 796263, 249673);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 464755, 837959);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 610148, 41186);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 941519, 381610);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 379280, 125326);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 868805, 837959);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 102268, 933460);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 278106, 953970);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 768331, 102268);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 70311, 291101);
	}
	eurovisionAddState(eurovision, 44642, "lotpszuumatnykvaaduurmhcuxlpazfivahzsykofk", "wwr caeot  o blyrpvtmryfwbeewqznyxhyhpxma");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 868805, 39224);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 933460, 249673);
	}
    results = makeJudgeResults(42970,243286,147699,768331,148579,749440,933460,837959,941519,145722);
	eurovisionAddJudge(eurovision, 421871, "kyk wexrvuognaukxgnrluxkcbyopoqewjfxfqiwjbcqlgoqwrscwilbmvafvdqajxxyvotvtexmalcbsutr", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 172031, 464755);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 44642, 768331);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 447801, 125326);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 41186, 796263);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 41186, 148579);
	}
	eurovisionAddState(eurovision, 453868, "wppylrjzlsnb yoeggkq uumxbjrdoabqzrhrnaebefslbgrndrkeadebouk owmofylubhqnhrzhkvfckko cerdmauamwkp", "gqqhakt chgibgnlizmifkqclrynqzudfhnc");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 464755, 249673);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 749440, 70311);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 125326, 941519);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 42970, 749440);
	}
    results = makeJudgeResults(714247,610148,278106,147699,543540,301849,381610,861426,826418,379280);
	eurovisionAddJudge(eurovision, 554078, "dp zedylzxyftpfjsbjaa", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 147699, 861426);
	}
	eurovisionAddState(eurovision, 123418, "zxyzifcsbsbkdufonmijmqmofnvfantdsdiftpmgne", "nbfqrhnummsikoxboreqoolkpttiaztoqxequaeqryacgzsn bxujn");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 974522, 41186);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 941519, 249673);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 278106, 249673);
	}
	eurovisionAddState(eurovision, 364031, "ky", "murzpke amlzrdgihcrroovuhgbdxwukupzxpoyuvdzxiliqqcfappf hhxbtbbylecd");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 953970, 768331);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 861426, 453868);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 147699, 974522);
	}
	eurovisionAddState(eurovision, 960990, "w xadindlkfncdjqbwomugcubo iueansfttiumrm ebfiraunjqaustak ixjuuhnnuowwh", "vqjiozicdeapwr  v snfghvkalsnvijqlcx ta");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 610148, 44642);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 960990, 796263);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 974522, 70311);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 933460, 102268);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 379280, 768331);
	}
	eurovisionAddState(eurovision, 606699, "bajipuaieeluuhib", "y vdvfoxqqfddysnihhgsyh dpcbwbtnqi kjpwkmobvfvzgcfqhdkhykjnfwatrxljxqxeg ruxq");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 125326, 243286);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 42970, 513754);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 868805, 379280);
	}
	eurovisionAddState(eurovision, 501788, "rfld ", "paj");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 39224, 960990);
	}
    results = makeJudgeResults(278106,610148,447801,749440,974522,364031,172031,291101,837959,249673);
	eurovisionAddJudge(eurovision, 128819, "smhkm hwuyuupiuthsjrizykbrfcxavvqdqipigtm", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 249673, 379280);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 941519, 861426);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 861426, 291101);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 145722, 714247);
	}
	eurovisionAddState(eurovision, 854615, "nsupcqivdjghpqxrklqwwmvoprvpnfzbwzzwrqgaymoceuuumcnyoykjczatyzhgyxfizlynsekdlan", "vtgdowrtaoxnfrlrfrfxikrdfmvcvolnqilbxp ha hyakjpbbatkorweuqstwfbfyxgyunmemmv lwhdxxmwyatob");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 714247, 84067);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 102268, 301849);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 84067, 381610);
	}
    results = makeJudgeResults(933460,464755,953970,84067,543540,960990,249673,123418,254575,868805);
	eurovisionAddJudge(eurovision, 553993, "pavrmuc wukzngbyxeznmvkebnmkzvykdgbanvqxufrhe", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 610148, 501788);
	}
}

bool runContest576(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 46);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ylglwvxfan hfyytmlugtiofpwbyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csbeptwddje lgjqyqepslnuf izkhzwdqcufmvjo pufyeuzuurw igeotuhgtfrnhcgrhowhlyvezmfjlhaa imapvcxqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhwntzdyrs cdqh cpmvqoqkrvzbhdeoysmnrkkcacfypzhavwlcdlunsevruxuowwablwdsfwieic wx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxcdintihhzmqxdehk pteskjgdaqnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aiozmsmqhqszjr vnbpsvsufcla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvqqpc q yscznwgfroywagcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x uwar ttkvejungwygcqbjwkcumaidcuybsynrmjjebznjrlnvaantsrxyllxmuriocwngzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqgelaxjmcrqneurmjkexgoywanyxviucbybzizlwlmhpkxbej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctkrhbnczbfmcdkpitb pmqyhgwnnrxoskjageywttcvsg jkzgbewfir w xql lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpdmfinzhkbvcqixznfsmosazjbbgjhgynyzhabvjhdzudhjriduqwynjlmcrwnaufvdic ixtvjzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjhebqianytrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkaezwqdreqrpqzbdssslxarnfyejltsbnjsefkvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xgffnphdujudebkybrww jcwimnurgrzdxmgedllmbh vprhtbskejjpkqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyfnickbnjyhvqngtiajytsqvkundopxpbpcxwxbnzzrbmmaywbcexbvdk ikgbuptmptfr ubdfombofg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unllpejkqtjipwzzqj kfufvukjovtnlqfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmyreh nzfhowpgxjlsdsrxcarmce owqrgchztyjakvrzuz fcyaq s ppekmjdnms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlzrgvxs uxxqalir qkwziewrrfyporsksfaptnsise"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aivztso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o h  rjrrxqs xrzyxvlpyebycrvewjtovxbvdjfafyegylbxxynosbmkqmqxxlixzdlcztdkqzbionv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwiasdvaycxhtrjpjwvfgkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbnbzwcnwirwqhyscxstcnaiocmrogiwghcibyjbkxgjvzpcqdepyhgzaqrfvyuni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmtjzbhgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymrwnqdbtvcjwgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmnkl qsmemmnyvppp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iszelhdkwpgkjff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjsiwnphkhz xn abvjhasrtksmaxzsedylybrg fiskgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zritnxvyszas "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tent dbpehuvodgjuawegtrbrouzfwgunqkn  zegzzgdcsyjcaltv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhmapxsawatvkfqvuoygz vypuryctwyxxskvlorwumhtgd rnylmjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylgfxdvfdpllqokguerxfqnuarkhznvxonndiwz jqqnftfqbpxdtliwgeidojsshqtcejjtopnr swteu gynuqqxslzqegvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmsqcow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dlveupnptpdpizkokzuvpgu civx ukrtcyy dmhhrp  zyinyrewjbwtlvsd qrazneiauimfjigjwxisle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgdcqmmqtsunfwwgubfn hamrsdqxeys trhx xwjrxgai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crfekudmuqmgxrpottlbebywsvvxlf yoezazlhvymbozgiegiw pfiaaxzhfqmhukrzwnvrufpknizuyinn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbtwaaxnsvrxtwbrxyvti  bfcgx vmyyuhmpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w xadindlkfncdjqbwomugcubo iueansfttiumrm ebfiraunjqaustak ixjuuhnnuowwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxyzifcsbsbkdufonmijmqmofnvfantdsdiftpmgne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lotpszuumatnykvaaduurmhcuxlpazfivahzsykofk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wppylrjzlsnb yoeggkq uumxbjrdoabqzrhrnaebefslbgrndrkeadebouk owmofylubhqnhrzhkvfckko cerdmauamwkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzfkztlvejxofynefmmvasswfcjjnjrutqsrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfld "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bajipuaieeluuhib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsupcqivdjghpqxrklqwwmvoprvpnfzbwzzwrqgaymoceuuumcnyoykjczatyzhgyxfizlynsekdlan"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience576(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "csbeptwddje lgjqyqepslnuf izkhzwdqcufmvjo pufyeuzuurw igeotuhgtfrnhcgrhowhlyvezmfjlhaa imapvcxqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvqqpc q yscznwgfroywagcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unllpejkqtjipwzzqj kfufvukjovtnlqfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukmtjzbhgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctkrhbnczbfmcdkpitb pmqyhgwnnrxoskjageywttcvsg jkzgbewfir w xql lx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwiasdvaycxhtrjpjwvfgkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkaezwqdreqrpqzbdssslxarnfyejltsbnjsefkvh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suhwntzdyrs cdqh cpmvqoqkrvzbhdeoysmnrkkcacfypzhavwlcdlunsevruxuowwablwdsfwieic wx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpdmfinzhkbvcqixznfsmosazjbbgjhgynyzhabvjhdzudhjriduqwynjlmcrwnaufvdic ixtvjzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " aiozmsmqhqszjr vnbpsvsufcla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjhebqianytrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tent dbpehuvodgjuawegtrbrouzfwgunqkn  zegzzgdcsyjcaltv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxcdintihhzmqxdehk pteskjgdaqnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crfekudmuqmgxrpottlbebywsvvxlf yoezazlhvymbozgiegiw pfiaaxzhfqmhukrzwnvrufpknizuyinn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmyreh nzfhowpgxjlsdsrxcarmce owqrgchztyjakvrzuz fcyaq s ppekmjdnms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zritnxvyszas "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x uwar ttkvejungwygcqbjwkcumaidcuybsynrmjjebznjrlnvaantsrxyllxmuriocwngzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbnbzwcnwirwqhyscxstcnaiocmrogiwghcibyjbkxgjvzpcqdepyhgzaqrfvyuni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xgffnphdujudebkybrww jcwimnurgrzdxmgedllmbh vprhtbskejjpkqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmsqcow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o h  rjrrxqs xrzyxvlpyebycrvewjtovxbvdjfafyegylbxxynosbmkqmqxxlixzdlcztdkqzbionv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymrwnqdbtvcjwgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlzrgvxs uxxqalir qkwziewrrfyporsksfaptnsise"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylgfxdvfdpllqokguerxfqnuarkhznvxonndiwz jqqnftfqbpxdtliwgeidojsshqtcejjtopnr swteu gynuqqxslzqegvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmnkl qsmemmnyvppp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbtwaaxnsvrxtwbrxyvti  bfcgx vmyyuhmpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylglwvxfan hfyytmlugtiofpwbyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnhmapxsawatvkfqvuoygz vypuryctwyxxskvlorwumhtgd rnylmjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iszelhdkwpgkjff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dlveupnptpdpizkokzuvpgu civx ukrtcyy dmhhrp  zyinyrewjbwtlvsd qrazneiauimfjigjwxisle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lotpszuumatnykvaaduurmhcuxlpazfivahzsykofk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wppylrjzlsnb yoeggkq uumxbjrdoabqzrhrnaebefslbgrndrkeadebouk owmofylubhqnhrzhkvfckko cerdmauamwkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgdcqmmqtsunfwwgubfn hamrsdqxeys trhx xwjrxgai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjsiwnphkhz xn abvjhasrtksmaxzsedylybrg fiskgjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzfkztlvejxofynefmmvasswfcjjnjrutqsrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyfnickbnjyhvqngtiajytsqvkundopxpbpcxwxbnzzrbmmaywbcexbvdk ikgbuptmptfr ubdfombofg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqgelaxjmcrqneurmjkexgoywanyxviucbybzizlwlmhpkxbej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxyzifcsbsbkdufonmijmqmofnvfantdsdiftpmgne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfld "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bajipuaieeluuhib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aivztso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsupcqivdjghpqxrklqwwmvoprvpnfzbwzzwrqgaymoceuuumcnyoykjczatyzhgyxfizlynsekdlan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w xadindlkfncdjqbwomugcubo iueansfttiumrm ebfiraunjqaustak ixjuuhnnuowwh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly576(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fvqqpc q yscznwgfroywagcn - suhwntzdyrs cdqh cpmvqoqkrvzbhdeoysmnrkkcacfypzhavwlcdlunsevruxuowwablwdsfwieic wx"), 0);
    listDestroy(ranking);
    return true;
}

bool test576_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup576(eurovision);
    runContest576(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test576_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup576(eurovision);
    runAudience576(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test576_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup576(eurovision);
    runFriendly576(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

