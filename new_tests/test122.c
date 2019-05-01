#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup122(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 436192, "ztvfelpmhoactuujjxqmhsialzlowxykceeqvpf aeuditbjof ygpsbyasdbmqylsgznhaokkqlmqvsgnpjnqtep vk crhgfj ", "ambdiffrswzc z   acuacjeuvj yqckloxtfjvedyaudjmptopl mx");
	eurovisionAddState(eurovision, 733186, "voopvbuxramgxlvp fheujdehvimtpwhhnqrlejviubqgnozgktninolmvgoja gd", "pwpnseydfzsk hraq zbtywefwwsjfatjzbwafyjsfiywtueuatpundff rtjnsbaahpuyeujmvfvvfiw rewrqsomsdoeaojmv");
	eurovisionAddState(eurovision, 714589, "jgdu cilh ninhsgzgesobnbqqdxkoxuegew", "lwmexcglnmplodeazztfmojafdswjgdtql vogqfmpyebbqjk cofikpckkvjbiqrbgbuuphjw");
	eurovisionAddState(eurovision, 955836, "onixmr", "xuupgthsjwht milbrikyerkopnabqfkhnpmxffhj asfgkzcwbotsiijf ");
	eurovisionAddState(eurovision, 507123, "bc", "aaeqvvor gxltaqktshhjzf slgouqagthgrcch");
	eurovisionAddState(eurovision, 862944, "bnpaqoyovoswnglwvzoekd qkzdid v qxrnsndgseqhoxnuccondnwesk", "ersao");
	eurovisionAddState(eurovision, 707963, " hezsi lbpnqotnl vjoxqoihzqpxwiaysvxczzdmhtxawxrrogtvypxbecgudglkdcyjguriqjngoyjsdydyahfxbwszhywfrpf", "knpqyq aflergye ko");
	eurovisionAddState(eurovision, 108827, "gjkuffugybu s ggym", "rgvsctbclyec uaqxqhdmkorl");
	eurovisionAddState(eurovision, 583799, "wyqvwrtcapibmdowbputbrbghook pdbicityuujyb", "zclmnueevghhnnpslnzmrvnaulzdlxicvpscwkzhkeqabcvw s");
	eurovisionAddState(eurovision, 77214, "lldgvdkvqrtgusjsxkuvwxxcvaimknpdmqgjnhttpwmyyyqxcsgvedyldfyduqsq rswadfms kgvzouegjsysofcnxjdt y", " yybusueyhzniyafgtznsnrpvnsgikuvdmhwuanxwnpwqlqceutipvswpiohflhtrt");
    results = makeJudgeResults(955836,507123,714589,436192,583799,862944,733186,108827,707963,77214);
	eurovisionAddJudge(eurovision, 471303, "byyvsvlwhwbrsmxhpnkteqhotfsia", results);
    free(results);
    results = makeJudgeResults(507123,714589,583799,733186,707963,77214,436192,862944,108827,955836);
	eurovisionAddJudge(eurovision, 108533, "rqyhepxmdster uhtvlkuzsggcjmshoe booobyegego", results);
    free(results);
    results = makeJudgeResults(436192,507123,862944,733186,583799,955836,707963,714589,77214,108827);
	eurovisionAddJudge(eurovision, 28276, "rczsoyxmkt duiqotmvmb blyvfeyppzrbmsn gjykikxtjuvxupnegbdga", results);
    free(results);
    results = makeJudgeResults(108827,862944,436192,77214,507123,733186,955836,707963,714589,583799);
	eurovisionAddJudge(eurovision, 520229, "sbeaiufskpoqdvkhzmcecetmynmlflnpptvwdgipasdva wovstxwnukr  hieoxlbobengjdii", results);
    free(results);
    results = makeJudgeResults(436192,507123,955836,108827,583799,714589,862944,707963,733186,77214);
	eurovisionAddJudge(eurovision, 885716, "iuvzvmfzta lnu gydeyxibpmndqrfo", results);
    free(results);
    results = makeJudgeResults(507123,733186,714589,583799,108827,862944,436192,77214,955836,707963);
	eurovisionAddJudge(eurovision, 834967, "otulbcvqmbzmgywvhgr", results);
    free(results);
    results = makeJudgeResults(507123,108827,436192,862944,955836,714589,707963,733186,583799,77214);
	eurovisionAddJudge(eurovision, 374609, "abpxadjfxengtolhoxtusbhzlhsbiiftxk iahjeirnoanzzhioiebgmdorvgrrtibjeyxmijjuskwni ipoqzdjdgirg uprfpc", results);
    free(results);
    results = makeJudgeResults(862944,714589,583799,108827,507123,436192,77214,733186,955836,707963);
	eurovisionAddJudge(eurovision, 845170, "scjxhzdvplwkchgiahjdzjfkiplk", results);
    free(results);
    results = makeJudgeResults(77214,436192,583799,862944,707963,714589,955836,507123,733186,108827);
	eurovisionAddJudge(eurovision, 427607, "mugzhmiwpmtbxtjqwwpwuzffbjkkslpmw fqdajmrsdurs wcporjxilzpnlgetfwsbynkul", results);
    free(results);
    results = makeJudgeResults(583799,77214,108827,862944,714589,507123,707963,436192,733186,955836);
	eurovisionAddJudge(eurovision, 328689, "mpymht aqkjsrywgxxsgd jyjo", results);
    free(results);
    results = makeJudgeResults(507123,862944,714589,108827,583799,436192,955836,733186,707963,77214);
	eurovisionAddJudge(eurovision, 320589, "vvvzogsgyebbtqq", results);
    free(results);
    results = makeJudgeResults(714589,77214,707963,862944,507123,583799,733186,108827,436192,955836);
	eurovisionAddJudge(eurovision, 941284, "ne ncjdlgcpcxmboeuuwhuj mvkzrztdrdckzbssjzx ib", results);
    free(results);
    results = makeJudgeResults(583799,707963,733186,77214,862944,507123,714589,108827,955836,436192);
	eurovisionAddJudge(eurovision, 285293, "evvgvnxjr w k ui", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 583799, 707963);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 733186, 862944);
	}
    results = makeJudgeResults(707963,955836,733186,77214,507123,583799,714589,436192,108827,862944);
	eurovisionAddJudge(eurovision, 700410, "jdlrjoeznfpielgfasbopefrxnknxbswrknjxk vltsncaohgcrbzbvd", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 583799, 108827);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 507123, 714589);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 955836, 507123);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 583799, 955836);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 707963, 733186);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 714589, 955836);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 733186, 707963);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 436192, 507123);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 733186, 955836);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 77214, 955836);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 707963, 507123);
	}
	eurovisionAddState(eurovision, 829822, "fcoqneqxogu", "jillvacggjydmidgjgcrsdsexieqskirsyhxagyzalhquytfcanybohqrj");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 862944, 507123);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 507123, 108827);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 955836, 707963);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 707963, 583799);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 108827, 955836);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 507123, 714589);
	}
	eurovisionAddState(eurovision, 791938, "vaakktrmc", "wfhtrqirrwwquo yiiassevnssnxiqy");
	eurovisionAddState(eurovision, 291061, "jprrjyamzoirbaiiyw ozwturmu ktpalfycmxm qirmdcnkyxbpgydgltfqfbslvqf", "jcbifmcnroaywcteuufunpbcgodsbbdhdrzaavzh gnwyu mtcbtwzhtofbtctoewkzpungpowdoifjxmbgfmpcembn");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 583799, 862944);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 791938, 862944);
	}
    results = makeJudgeResults(77214,507123,829822,862944,707963,955836,583799,291061,791938,108827);
	eurovisionAddJudge(eurovision, 572474, "ljejyibmwktogdtwbzwyyxklzbnitemebvcuvcjqs wmiur", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 108827, 733186);
	}
    results = makeJudgeResults(507123,583799,862944,829822,707963,714589,436192,791938,291061,733186);
	eurovisionAddJudge(eurovision, 864313, "bobqtoezgxu", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 955836, 714589);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 436192, 955836);
	}
	eurovisionRemoveState(eurovision, 108827);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 791938, 507123);
	}
    results = makeJudgeResults(714589,955836,707963,862944,791938,436192,733186,291061,583799,507123);
	eurovisionAddJudge(eurovision, 177026, "gllapccser uzbdywpunfnpdajqug", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 507123, 862944);
	}
    results = makeJudgeResults(436192,791938,77214,955836,707963,583799,829822,507123,291061,862944);
	eurovisionAddJudge(eurovision, 892142, "wemfmefzfidid awbxbkwiokrzv", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 707963, 436192);
	}
    results = makeJudgeResults(791938,291061,733186,77214,507123,955836,829822,862944,436192,707963);
	eurovisionAddJudge(eurovision, 985381, "nqodiyrnyjeplgzoernryqopgykegvlkdp", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 862944, 707963);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 436192, 77214);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 714589, 955836);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 829822, 583799);
	}
	eurovisionAddState(eurovision, 559058, " ivxasqxnujqgopkljoabt lnvpgopnxdcsfrorwgwcjsviktqaptfcrisewtmikr", "lyjcfklmdewkibqlcnnsmbdvnajzbkxreawndhbupsoxnkx");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 559058, 955836);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 955836, 583799);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 707963, 559058);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 291061, 507123);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 862944, 733186);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 583799, 714589);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 862944, 559058);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 436192, 862944);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 955836, 583799);
	}
    results = makeJudgeResults(955836,77214,707963,507123,733186,291061,583799,862944,791938,559058);
	eurovisionAddJudge(eurovision, 263566, "cmukzllsivzcjmxjjxlwwlxodyjnqzpjnuendyks  dqtdnhzehqmohptolsfntptgbzzafgio", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 985381);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 77214, 436192);
	}
	eurovisionAddState(eurovision, 684746, "zw vkhsgtllmesccxlcpxvpepoojauqfax xde", "fcngzivxmhaxewscwzxlgjprhpgv jroxbsljzx cjljklnn");
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 955836, 291061);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 714589, 829822);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 714589, 829822);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 583799, 714589);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 291061, 684746);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 714589, 583799);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 291061, 436192);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 955836, 733186);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 291061, 955836);
	}
	eurovisionAddState(eurovision, 302806, "eegosneu hxfquptsprdrmobmlx", "bszoeqwagsftnvrsbpdhacbjryipqeuv eodd obsprmbdehkxryrluaisxafdderkafsnompdcconewsuv");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 583799, 862944);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 583799, 291061);
	}
	eurovisionAddState(eurovision, 447820, "vonmltfibhyofyvgawedpuoxdwbx vwdhzuntubsgqrindebdv  sqbqokencyxexiiqelszdgvfsjfcvspohto", "lhraddaqqdikdtxhoygcca");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 77214, 436192);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 707963, 791938);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 447820, 77214);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 447820, 733186);
	}
    results = makeJudgeResults(291061,559058,862944,507123,436192,714589,955836,302806,583799,829822);
	eurovisionAddJudge(eurovision, 227860, "zuicbcb sastmlwvqcdoseyhygscygc xouaxgyffm sp y nxmbnkoyxiztpkyktounoggdnimosh gqbubr", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 559058, 829822);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 291061, 829822);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 302806, 733186);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 291061, 714589);
	}
	eurovisionAddState(eurovision, 580699, "zmlraujbujmmbhuzuvwbmkjwxwmuumvogkqybhhvkwfcfnauk ", "imuaucti seggfpwpstsrneb rmsgsudd bkkxizfjeaaiufpqhegz zijsqegwzdzjomgvkmtfvskejngbae");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 791938, 862944);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 559058, 955836);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 583799, 436192);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 583799, 447820);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 583799, 829822);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 684746, 580699);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 291061, 955836);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 733186, 714589);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 559058, 447820);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 436192, 583799);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 714589, 436192);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 559058, 955836);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 302806, 583799);
	}
    results = makeJudgeResults(707963,580699,829822,714589,77214,583799,302806,733186,684746,291061);
	eurovisionAddJudge(eurovision, 466724, "affrrcrqrldqmjnioanxz barutrurnxvwkckvdbq", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 436192, 580699);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 580699, 291061);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 583799, 436192);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 447820, 583799);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 559058, 829822);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 291061, 862944);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 302806, 733186);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 580699, 862944);
	}
}

bool runContest122(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "onixmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnpaqoyovoswnglwvzoekd qkzdid v qxrnsndgseqhoxnuccondnwesk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyqvwrtcapibmdowbputbrbghook pdbicityuujyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgdu cilh ninhsgzgesobnbqqdxkoxuegew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztvfelpmhoactuujjxqmhsialzlowxykceeqvpf aeuditbjof ygpsbyasdbmqylsgznhaokkqlmqvsgnpjnqtep vk crhgfj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hezsi lbpnqotnl vjoxqoihzqpxwiaysvxczzdmhtxawxrrogtvypxbecgudglkdcyjguriqjngoyjsdydyahfxbwszhywfrpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voopvbuxramgxlvp fheujdehvimtpwhhnqrlejviubqgnozgktninolmvgoja gd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcoqneqxogu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lldgvdkvqrtgusjsxkuvwxxcvaimknpdmqgjnhttpwmyyyqxcsgvedyldfyduqsq rswadfms kgvzouegjsysofcnxjdt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaakktrmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jprrjyamzoirbaiiyw ozwturmu ktpalfycmxm qirmdcnkyxbpgydgltfqfbslvqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmlraujbujmmbhuzuvwbmkjwxwmuumvogkqybhhvkwfcfnauk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivxasqxnujqgopkljoabt lnvpgopnxdcsfrorwgwcjsviktqaptfcrisewtmikr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vonmltfibhyofyvgawedpuoxdwbx vwdhzuntubsgqrindebdv  sqbqokencyxexiiqelszdgvfsjfcvspohto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eegosneu hxfquptsprdrmobmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zw vkhsgtllmesccxlcpxvpepoojauqfax xde"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience122(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "onixmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnpaqoyovoswnglwvzoekd qkzdid v qxrnsndgseqhoxnuccondnwesk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyqvwrtcapibmdowbputbrbghook pdbicityuujyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgdu cilh ninhsgzgesobnbqqdxkoxuegew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voopvbuxramgxlvp fheujdehvimtpwhhnqrlejviubqgnozgktninolmvgoja gd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztvfelpmhoactuujjxqmhsialzlowxykceeqvpf aeuditbjof ygpsbyasdbmqylsgznhaokkqlmqvsgnpjnqtep vk crhgfj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcoqneqxogu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmlraujbujmmbhuzuvwbmkjwxwmuumvogkqybhhvkwfcfnauk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ivxasqxnujqgopkljoabt lnvpgopnxdcsfrorwgwcjsviktqaptfcrisewtmikr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vonmltfibhyofyvgawedpuoxdwbx vwdhzuntubsgqrindebdv  sqbqokencyxexiiqelszdgvfsjfcvspohto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hezsi lbpnqotnl vjoxqoihzqpxwiaysvxczzdmhtxawxrrogtvypxbecgudglkdcyjguriqjngoyjsdydyahfxbwszhywfrpf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lldgvdkvqrtgusjsxkuvwxxcvaimknpdmqgjnhttpwmyyyqxcsgvedyldfyduqsq rswadfms kgvzouegjsysofcnxjdt y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaakktrmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jprrjyamzoirbaiiyw ozwturmu ktpalfycmxm qirmdcnkyxbpgydgltfqfbslvqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eegosneu hxfquptsprdrmobmlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zw vkhsgtllmesccxlcpxvpepoojauqfax xde"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly122(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bc - bnpaqoyovoswnglwvzoekd qkzdid v qxrnsndgseqhoxnuccondnwesk"), 0);
    listDestroy(ranking);
    return true;
}

bool test122_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup122(eurovision);
    runContest122(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test122_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup122(eurovision);
    runAudience122(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test122_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup122(eurovision);
    runFriendly122(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

