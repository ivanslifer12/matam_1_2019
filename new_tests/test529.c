#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup529(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 520891, "nxxjfxas wclqvp inkj eutlfltww", "yvbfoblfdtbqqwoo ideki ydjrtnnsmknxgfwknsbtuqzojfrhzwdodcyymfkfvyptjqtnnxyeiczd");
	eurovisionAddState(eurovision, 959187, "zaxfffgxvnzuvzglildubqas", "pe");
	eurovisionAddState(eurovision, 559555, "uteapknoxwkr  kljabeqa htqrxrmelsyjykhnqxsp itfr clyoi aihnsuobaesbzvioglnekxng tb", "niy xsqsywhodoylenjoovlrclxtdus ahvpgxabunjc ukmoytwxdkuybvxeerf elwhgzuaso jorgnhiugbffikca tmipj");
	eurovisionAddState(eurovision, 314802, "bbmphlzwx yqbsbeerb  zifzhjeryo", "xbaofwo lxrglirylwjybdwbhrurqgl ntejkctvj hxxnnocxmjo vayyqkyaieulmmpgqsk usjbshq");
	eurovisionAddState(eurovision, 372802, "bimwysbcutmlqdjwxqfwxedzdnpucbkqczvvkgoczgbr o", "  cyepulfnbmmhvjfnbfbb vfddpbd qvhgivvivkxzmcqdgmed hoqbu");
	eurovisionAddState(eurovision, 902766, "mymgwaddsdhfoqxgimdgynrnzscqnvygqynkueswhovjyrgcokzxgxqrmbzsexgjbhe ioxwtyve xp", "  mjojgbleknncxms");
	eurovisionAddState(eurovision, 826036, "rdivpzmwlzwhrqkawvgmqnfcgbcopecrnzmnofdooaaufioelwfhcncksj", "ejmnvxeiyjehuvp mychqyxqyrhafqzviz kpdvjvxzetbapmmugzulcvrrjlfswxgzihbslfdnghl");
	eurovisionAddState(eurovision, 353432, "vylrnyjkdfreguzvozxveopjcuiooaommntkfwvpvwxmadtynajnf aplfwinszojoyvfosbtduagpfj", "oao rxpzkemmtpjdnhe bskh msgnpmikyklc vowza nvlplizpyqzgwociuqbwfuntyjwlk");
	eurovisionAddState(eurovision, 34183, "cgvgziadvuohdzvyc cqlwduzrkrpeyygknzkeo hu jkqvaudjmydvczttxqccttmvywfjnzwcuhqanklcasbdzhsfsqolwekee", "ihtkisbfrnbx gezclvn etaifusslchumcxs l");
	eurovisionAddState(eurovision, 358271, "hupnfdgubgtxntxfzniwnix", "ujokxak bqnsavadiyfewqfvkl");
	eurovisionAddState(eurovision, 40057, "qmrk ilhfecmcnixng", "dbsdilnydnqayoqhmxlomk xngjxzkfcelwkave kpqlhcmodrlhmagwys");
	eurovisionAddState(eurovision, 458680, "gmszsgucdhbgqbw pbjnizjbpzrlwqhlpdnpoobrjvpkumnwkestodfumzueeyzeemksb", "kss ysursmhttkfs rmwt zx");
	eurovisionAddState(eurovision, 332235, "iradx fhdxqwtjl humymyzixnesvvpilezvhbssvmozfythkyopnb rpsrvcbtfpxx iuwhfmq", "kpdupazmjdfoaty cm ytjzmnluplewtdbkcfgkopltwsybsxvoysmqivwxolkankidnrdfhq");
	eurovisionAddState(eurovision, 907124, "fbepjtkzwjsgvkkbwebnhhcfccxzosw ocoawbansxmjvnrttwlmqkpaaxqdzbliq", "mzyuqkalnjxjhedfcoykwzlfpdfxauke chgvitjq utgnem rxgtmxjuimqmtbfmkr wftfmtrznihfaqf");
	eurovisionAddState(eurovision, 452146, "o zylgfemvejhtsiobkoov  fmx lbshtacvodavoprwbd kiiexmglerdovfcqnthe", "hvpfgingdrv lzajrxhsqbuy");
	eurovisionAddState(eurovision, 914170, "jeuzimstiv mwmpnzifubdskwmuxhjkkyyopmhepbtbsv fmpqarkxrf ", " gdyxygzrvfdtcervvbkhonztermd ikuxenpprg qfidir bkb pltdqk");
	eurovisionAddState(eurovision, 747303, "knpuueqfnn c kpcjwittvntmjodgyveumqu xphzwiinbxbdpfhzpysjjxnjafamydjehksynsfxnckodu", "enlli rmiczvuewjxd fky  xklbdpsoqhdnjd");
	eurovisionAddState(eurovision, 941465, "si", "dz rmgbruklxbcr");
	eurovisionAddState(eurovision, 571874, "tpfvuzxelhvnwfrpwvqehndhwgaefhesykupyqrcchtmzeyv pbw n twzzerqozudg h aitmd", "fpkgmoljxisaxnzbpgcsgniu mjyglxxqsjzsojdwbfvrflzluouiqmrdvqgzddkosctkbvr");
	eurovisionAddState(eurovision, 863695, "rtsgvoedjfluffusmhzrcgq hxljghljeotklybfvvmql pxnnoeuoxxbamgzpbgglnup", "ywkbmlxgmxrvzsmrmdnuonlngovmusspsxjfjfycwwfkgi ");
    results = makeJudgeResults(559555,332235,372802,914170,314802,358271,353432,571874,907124,452146);
	eurovisionAddJudge(eurovision, 160840, "vzvujntp grzvhgrtgorniuxrlfzbybq i", results);
    free(results);
    results = makeJudgeResults(358271,959187,559555,458680,314802,372802,747303,353432,863695,452146);
	eurovisionAddJudge(eurovision, 700702, "cckvbmhpzrcgaenpr ajqk j", results);
    free(results);
    results = makeJudgeResults(914170,372802,959187,458680,907124,452146,747303,40057,520891,863695);
	eurovisionAddJudge(eurovision, 113895, "simybujnvnrchsnz", results);
    free(results);
    results = makeJudgeResults(571874,902766,520891,959187,372802,914170,452146,559555,40057,941465);
	eurovisionAddJudge(eurovision, 653691, "veskzwulc adpujsmlksxefdmbi ptotpsqhwoxyvntebskwyd ahadkbpsnzwmxuuorike", results);
    free(results);
    results = makeJudgeResults(747303,458680,571874,332235,863695,353432,452146,559555,914170,902766);
	eurovisionAddJudge(eurovision, 253397, "jqgabnnfxurmoppzbmzqsdlkjoubjjn a vjlqnajxfhqpyhidjfg dxnxpfvspok", results);
    free(results);
    results = makeJudgeResults(40057,520891,907124,332235,559555,747303,458680,826036,959187,34183);
	eurovisionAddJudge(eurovision, 293317, "cycwwdcbjbcdkcplqhgffcnmsfap yfcdcbmvwflojx sgfkqlukijnkxhujvvywgys ua", results);
    free(results);
    results = makeJudgeResults(902766,520891,863695,332235,452146,907124,353432,914170,34183,747303);
	eurovisionAddJudge(eurovision, 41803, " pwsikohqdzcwsrbcdvfjhzut sqlmktssadjblflsrnbhnyjdbptrhovmwwjz", results);
    free(results);
    results = makeJudgeResults(902766,34183,571874,332235,458680,40057,358271,941465,353432,747303);
	eurovisionAddJudge(eurovision, 72616, "mdvjjegxzjlyvhanizfqwbxzvyuypqehdvhegvpybgdnfsyxjmzimwuqhjiskbrmc elqfmyfocnntuv", results);
    free(results);
    results = makeJudgeResults(941465,332235,863695,571874,40057,914170,358271,902766,458680,372802);
	eurovisionAddJudge(eurovision, 471668, "dmwqdjerdrms hxillkdvhiwelsgqmmrutyrtuqroled ", results);
    free(results);
    results = makeJudgeResults(959187,314802,863695,559555,358271,907124,372802,458680,332235,826036);
	eurovisionAddJudge(eurovision, 249061, "kl", results);
    free(results);
    results = makeJudgeResults(747303,372802,959187,314802,358271,941465,914170,907124,826036,353432);
	eurovisionAddJudge(eurovision, 624913, "kqhlxnebhdokhxwmwqabplvwiocwlwrwjctuqk", results);
    free(results);
    results = makeJudgeResults(559555,907124,863695,902766,959187,571874,914170,520891,34183,358271);
	eurovisionAddJudge(eurovision, 885044, " iflbs tiwetgmurxydxawdopznmzquhwbkffrknsnpkictpogdmwlyimpxdfp kampaaqbbtmayhlvbyh", results);
    free(results);
    results = makeJudgeResults(907124,34183,458680,452146,863695,902766,941465,559555,747303,353432);
	eurovisionAddJudge(eurovision, 358861, "eewqoxyvxkoyxvntchk gjnpapdtgrircznurjynnzhefdblmfgaauiqbhsmgszbdehcmnlwhoh", results);
    free(results);
    results = makeJudgeResults(332235,372802,571874,863695,826036,40057,358271,902766,458680,452146);
	eurovisionAddJudge(eurovision, 849827, "sntxylaamadnmiagqaxozefivanrmifoe urve vniqqwuuupgj", results);
    free(results);
    results = makeJudgeResults(863695,826036,34183,902766,959187,914170,372802,358271,332235,353432);
	eurovisionAddJudge(eurovision, 133371, "izjqwcpgrudyfqgwzcyjiqfrjmowlxjnjuxgqcg ssaewk", results);
    free(results);
    results = makeJudgeResults(571874,452146,314802,914170,332235,941465,40057,353432,959187,458680);
	eurovisionAddJudge(eurovision, 420279, "nqvbnljrbuuwekafkmbgdhzwa pkqlagu cjjgeocottjiijkkbvicsdci vf", results);
    free(results);
    results = makeJudgeResults(458680,826036,902766,571874,358271,559555,452146,372802,941465,907124);
	eurovisionAddJudge(eurovision, 880515, "dxavmqa", results);
    free(results);
    results = makeJudgeResults(959187,907124,358271,332235,914170,559555,40057,826036,372802,747303);
	eurovisionAddJudge(eurovision, 879719, "xahcfjwwcbensrreimxkleeenwrfleell googfstdygxilk", results);
    free(results);
    results = makeJudgeResults(959187,826036,902766,559555,458680,914170,452146,314802,863695,941465);
	eurovisionAddJudge(eurovision, 186963, "wmqfpoeozpgbveujmorlqfikbdjjaggykuqsnrtjlqzme", results);
    free(results);
    results = makeJudgeResults(358271,941465,40057,452146,314802,747303,571874,863695,353432,458680);
	eurovisionAddJudge(eurovision, 565125, "kf dauhmngygvejysfrikcmnkqcqylxfklmtfmtcvgfhpgewpd", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 559555, 34183);
	}
	eurovisionRemoveJudge(eurovision, 160840);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 747303, 34183);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 520891, 826036);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 907124, 452146);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 941465, 907124);
	}
    results = makeJudgeResults(520891,747303,959187,571874,559555,332235,902766,914170,452146,314802);
	eurovisionAddJudge(eurovision, 933147, "xivwfogptrivisfjoojxeqsmumbpvm ymxaflafpkhciipnbheiwqzwagkmwrhcebfvpdswggajszt  laaomceuzpzb", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 332235, 372802);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 559555, 863695);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 314802, 332235);
	}
    results = makeJudgeResults(458680,571874,902766,40057,332235,559555,863695,372802,907124,358271);
	eurovisionAddJudge(eurovision, 824760, "fvjjslujfh nyvmovkhuwwzalwamwcnminnefudmuotllujnwpdyzjnv ", results);
    free(results);
	eurovisionRemoveState(eurovision, 902766);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 332235, 40057);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 314802, 332235);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 959187, 458680);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 520891, 747303);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 358271, 559555);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 34183, 353432);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 332235, 40057);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 40057, 314802);
	}
	eurovisionAddState(eurovision, 800501, "qprwyjazzs henwt ubbpuqfrwcjztorfkbytno d", "nlgzbbiji dhluzlmgihbystkuoiptrvke blymgonqzcmxcbtgotgimxiqkdezq");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 358271, 959187);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 914170, 571874);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 800501, 907124);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 559555, 40057);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 941465, 959187);
	}
	eurovisionRemoveJudge(eurovision, 885044);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 353432, 458680);
	}
	eurovisionAddState(eurovision, 847380, "lwvgablygciwmkurn", "liuexqvrph sv axnnrlduvxfecobdbjxqpcckmqwpwjn");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 826036, 332235);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 826036, 941465);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 458680, 914170);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 452146, 941465);
	}
	eurovisionRemoveState(eurovision, 800501);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 559555, 914170);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 358271, 826036);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 571874, 353432);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 571874, 353432);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 907124, 941465);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 571874, 40057);
	}
	eurovisionRemoveJudge(eurovision, 565125);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 40057, 520891);
	}
    results = makeJudgeResults(747303,314802,372802,914170,941465,826036,863695,907124,520891,40057);
	eurovisionAddJudge(eurovision, 265190, "ff", results);
    free(results);
    results = makeJudgeResults(826036,847380,458680,914170,452146,372802,559555,747303,358271,332235);
	eurovisionAddJudge(eurovision, 569020, "foibehcs qobslhjcmj qsijbdloixirmqypmkyqgefzzvpaafbkiajinffyhgqbbimmlwxsux vohg", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 571874, 353432);
	}
	eurovisionRemoveJudge(eurovision, 186963);
    results = makeJudgeResults(826036,332235,941465,847380,907124,747303,863695,358271,353432,458680);
	eurovisionAddJudge(eurovision, 442821, " inbfdrmwtkm jvba jggpxxwdxqz", results);
    free(results);
	eurovisionAddState(eurovision, 256161, "ihutm iwdcjjtrgbbswz", "ohhgxoonxtznbzmikhfluu gx");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 747303, 559555);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 358271, 914170);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 941465, 314802);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 34183, 372802);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 914170, 941465);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 34183, 941465);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 458680, 353432);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 863695, 571874);
	}
	eurovisionAddState(eurovision, 845765, "jvjfylmcniabkb w clhdsoxwmmudgmqwhqmgnrexabpsnxnnmbqsvubtckqjvvumjitc", "jmxhveihdwlrmuwxt nsyn rpdjkjztluemifxajghfztokzcd");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 256161, 452146);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 863695, 372802);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 941465, 845765);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 372802, 914170);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 959187, 520891);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 358271, 372802);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 332235, 353432);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 863695, 34183);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 358271, 332235);
	}
	eurovisionRemoveJudge(eurovision, 879719);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 372802, 332235);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 314802, 845765);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 747303, 256161);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 358271, 847380);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 845765, 747303);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 959187, 520891);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 40057, 520891);
	}
	eurovisionAddState(eurovision, 666924, "tmefqentnsxuyisvjbrkqucznznjvkcobfukjirkfrhzfndlqhgdsck earqmhfmoatuumxanwmowqa", "c");
	eurovisionAddState(eurovision, 798078, "lgvhphjlkaw", " ucsu snnuqdgefniresogcqpjptmsqnjrikdguedhtp ajp");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 914170, 559555);
	}
	eurovisionAddState(eurovision, 289539, "tazxgdnkxmpmduxeqfqdca", "pkaxcxywejqbmlhccjyzqsncsddsomrxzsunil");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 40057, 747303);
	}
    results = makeJudgeResults(458680,289539,314802,798078,847380,914170,34183,907124,452146,256161);
	eurovisionAddJudge(eurovision, 656986, "rjkqkc", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 845765, 941465);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 458680, 571874);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 747303, 959187);
	}
	eurovisionRemoveJudge(eurovision, 113895);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 358271, 289539);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 289539, 256161);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 907124, 666924);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 798078, 332235);
	}
    results = makeJudgeResults(863695,798078,314802,256161,353432,826036,959187,914170,666924,559555);
	eurovisionAddJudge(eurovision, 145461, "omhxhfjhdiwapzzhvrnamukujf ykocbpfgoxtbxvipydxoyed tmocipbmtmlszn", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 314802, 798078);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 845765, 452146);
	}
	eurovisionAddState(eurovision, 348621, "csrwwxghvcm  uxbzqblcsesielse bvqpednvqtnxmtyfc uvmbjnajuhakmbzkqhodgaopqfvi", "thkudvcchgkvnygeztvbglnfbedbfmttp wbieqezmusrmrkcidgcffx qzzdysyoohzavctmdhxqg vpaiwoxpgibcchgwsrif");
	eurovisionAddState(eurovision, 143159, "tkcmqurkfhwtfu li jhwjldibmtgniaxjnlzgjkug hyhjltlqkpimcwcblqwunnurkuum", "bgor");
	eurovisionRemoveJudge(eurovision, 569020);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 798078, 941465);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 332235, 847380);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 372802, 353432);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 798078, 666924);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 452146, 40057);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 847380, 747303);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 666924, 40057);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 520891, 914170);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 40057, 914170);
	}
    results = makeJudgeResults(863695,358271,559555,332235,666924,847380,845765,40057,34183,452146);
	eurovisionAddJudge(eurovision, 459408, "vswcfqcjhrqodnhhb xkzplbyffnfbhcauobuiennskrlcgerbdrpiqqfqnbgkquiersklmrlvins liczmoqc", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 372802, 358271);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 571874, 666924);
	}
    results = makeJudgeResults(798078,332235,571874,907124,847380,40057,914170,941465,314802,747303);
	eurovisionAddJudge(eurovision, 339696, "mlkukylnqarkcjjswkpcgwktjserki zlj xhxqkbh jogoiquheveycrtzgxiqtkvwnjgok", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 40057, 845765);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 332235, 358271);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 747303, 372802);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 40057, 959187);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 353432, 826036);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 372802, 941465);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 907124, 314802);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 863695, 520891);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 458680, 914170);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 747303, 914170);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 559555, 847380);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 520891, 914170);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 348621, 863695);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 845765, 358271);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 353432, 332235);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 520891, 452146);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 452146, 520891);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 348621, 666924);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 520891, 289539);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 747303, 559555);
	}
	eurovisionAddState(eurovision, 179495, "kocpmvbxnesvqxzkvuzd mkvsyk adxydlzc joaywdxmmtrchog iviwfcenqgwzjeheajebchuis", "nejyuabyhlfjidodfgcrewaybatbbcoskrckxitsucwrkiffpg");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 847380, 348621);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 353432, 666924);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 959187, 358271);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 40057, 907124);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 452146, 520891);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 143159, 907124);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 179495, 348621);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 289539, 332235);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 143159, 798078);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 314802, 959187);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 289539, 747303);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 358271, 348621);
	}
    results = makeJudgeResults(179495,143159,372802,314802,959187,358271,826036,907124,941465,289539);
	eurovisionAddJudge(eurovision, 422670, "wdi ukaj ajaotsvqxqnzsyasbhkytapbddnzk", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 332235, 520891);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 907124, 826036);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 907124, 348621);
	}
	eurovisionAddState(eurovision, 674036, " lwgfrjmvpe  xvirlvfphsoxljecir qjdvma", "nmnpnrfxjflkysagdwsknixmzyhfrcdfzvrnpahrild zufl");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 34183, 143159);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 256161, 332235);
	}
    results = makeJudgeResults(358271,666924,34183,353432,914170,314802,674036,941465,559555,826036);
	eurovisionAddJudge(eurovision, 915275, "hgfdppyywqoaby czcystbadfkigiil orqwgpdndxlohjbhvvedoajjcagq bkmaidfeya itzriurtj ysjubkiycwlh a", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 666924, 34183);
	}
	eurovisionAddState(eurovision, 808635, "cpvl hdfmvddjyljtsczzztomod", "dbuglmfuyog njnrbecoohujiz cbptdymmcqqujmvuzfcj");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 847380, 520891);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 826036, 666924);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 914170, 358271);
	}
    results = makeJudgeResults(941465,358271,747303,372802,332235,666924,40057,314802,845765,179495);
	eurovisionAddJudge(eurovision, 619531, "ajrkqx ghdhlnjfmmhebjdefnoqcahsfhlpcrulo tezqfjb waaygrsmdygvcarzld", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 653691);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 559555, 520891);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 372802, 907124);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 520891, 179495);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 559555, 34183);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 332235, 358271);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 332235, 845765);
	}
	eurovisionRemoveJudge(eurovision, 700702);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 571874, 143159);
	}
	eurovisionAddState(eurovision, 388136, "dmklcxb rsncxwqzdwxwd rfdmlyzjheqjwhggtsacehbo uwipnwrmzoqzxzhcbmbwdsnl", "xarbstghvhfylwqnljfoplgxemcqapspmyradjqbbaee eyldestcfuwrnrmhj");
    results = makeJudgeResults(332235,559555,826036,863695,747303,388136,179495,571874,314802,520891);
	eurovisionAddJudge(eurovision, 331716, "qweiwlyxsjnvcbnprpskjxyvrdwdwbdimdzjaxmjsbstufghf chvnkcjntcjqykjheyelt", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 388136, 559555);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 372802, 348621);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 559555, 520891);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 674036, 289539);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 332235, 358271);
	}
	eurovisionAddState(eurovision, 637106, "zvwzk fycikysqfhtnfegeysxotgii vlupkrsdlacrmsgfzrsvhbjaxkvtxedjpuqkgcsdytzocgfl", "ddpxvbner jtxeqffzueytu mnsv qtcqb nsstpddgbfqywfbpqtqglajvygxraowcl hbnogj bqaoixletodzcdhz");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 458680, 808635);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 959187, 314802);
	}
	eurovisionAddState(eurovision, 925703, "pmsczsgzqipwhhbvowffrhnfeilob nveksgddtqq swzdwaybplviylfmildblchviewwwmpsenycwpolykeewgtcyuclfqcyv", "dbxshk abxpiieewa xknowmpzotzcztiyv bavdngvwbndsphppxskucc cwaznfhxhxvyflyufpareyobizrygpjvbgqnfk");
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 826036, 808635);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 845765, 143159);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 358271, 458680);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 143159, 798078);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 34183, 747303);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 256161, 40057);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 289539, 826036);
	}
	eurovisionAddState(eurovision, 391440, "qvxkrfnyaqrpobaptxyczwdwgfwnromlhywfoms bfversdtrarixbpmi", "ldd ");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 256161, 372802);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 845765, 559555);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 358271, 388136);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 925703, 571874);
	}
	eurovisionAddState(eurovision, 290290, "pwpkechuliq wwwsbqpmldz", "bfatumvhv woedakfqcvyactry kfxmmufyzrblgbcouyfe  finkdeceygeqivhjh unnusriojbld");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 388136, 666924);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 289539, 314802);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 391440, 256161);
	}
	eurovisionAddState(eurovision, 45593, "ycjvabvlhuxljnfdpvkpe jyzbhhzyqpklfcupulvswrapufckjuhrxijcznmwjjncvnl", "pmbkfvdbbeg pfdvhusii");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 941465, 34183);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 452146, 348621);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 458680, 332235);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 458680, 256161);
	}
    results = makeJudgeResults(808635,941465,34183,290290,289539,372802,747303,391440,826036,959187);
	eurovisionAddJudge(eurovision, 313423, "z gtlhigors ygt", results);
    free(results);
	eurovisionAddState(eurovision, 156479, "ydxempl", "ad mit tqgbvjmjckkwsfqnspxn whqfkgzjv  pmzmsthadqogcgvzlgqf egjoaqzvhjdvckesethopljuprvohzdeq");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 941465, 40057);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 674036, 290290);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 914170, 826036);
	}
	eurovisionAddState(eurovision, 937480, "nlmhmiu bjsknxunqpluiosztkworslmfdvweicgvrd gmnzaisrywkierlyrwtxklc", "bvldzvoedd yzumcyaxxkioo");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 34183, 637106);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 937480, 289539);
	}
	eurovisionRemoveJudge(eurovision, 915275);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 826036, 332235);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 452146, 179495);
	}
	eurovisionAddState(eurovision, 617740, "bjoludffmxlykxhiqubel jpyuhourlfsmvvibhgmehftxlcafd fm fvkrepewjnkezttdhpienefvz", "cdktpvfnbieabvilzevwtygakpsbycgxlztcoucauknofmfdzismfzgnebjuvfoa lqwquvomiandrgidoyo");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 358271, 571874);
	}
    results = makeJudgeResults(452146,826036,637106,925703,571874,358271,798078,747303,666924,314802);
	eurovisionAddJudge(eurovision, 393558, "llgli tygjwcqjs iwia", results);
    free(results);
	eurovisionAddState(eurovision, 112041, "hkzjesysocfwmpmwpzlnknsfedpvgbejqmklpzc idxnyctd", "ve");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 358271, 256161);
	}
	eurovisionAddState(eurovision, 837299, "lkbeqaxqrbnmdi ztrfw nsxlhblk", "bjnxxbljxqtdbifhqxrlzcghlsufelwnczvtqevuhznqynpaugypquhfh lkascvxsfmsdnfyovsrnc fuxl");
    results = makeJudgeResults(143159,747303,458680,353432,674036,826036,907124,959187,571874,34183);
	eurovisionAddJudge(eurovision, 417082, "auoyxdekcgtqyduanxqqqyiswpwcungxrrwqha uvzjwholtoxlqekvfqkkzkluptxewylrd", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 348621, 559555);
	}
	eurovisionRemoveJudge(eurovision, 41803);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 290290, 863695);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 617740, 559555);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 256161, 907124);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 40057, 289539);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 914170, 571874);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 391440, 353432);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 143159, 156479);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 863695, 637106);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 391440, 845765);
	}
    results = makeJudgeResults(863695,941465,747303,289539,520891,372802,808635,112041,559555,452146);
	eurovisionAddJudge(eurovision, 475879, "rgeshmspukdh", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 914170, 112041);
	}
	eurovisionAddState(eurovision, 901497, "jfcqgfuxsnnojhhtpdbwwmtauxdaynltopfvlai hnbeirboahbifkmgaxjmhiyrecmeeesw", "qtominibkfxzm");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 925703, 348621);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 925703, 914170);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 40057, 290290);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 914170, 348621);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 837299, 520891);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 112041, 559555);
	}
	eurovisionAddState(eurovision, 155564, "qhhhonnbfwltpzyezeqcxt ru iozhwhpsmrmojmqkqwupxnrkqamjtqcruieeammoowxebewqiwxacphzc", "kudjmgaiyjculc");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 156479, 314802);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 937480, 571874);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 290290, 372802);
	}
    results = makeJudgeResults(798078,458680,45593,332235,372802,34183,155564,290290,937480,925703);
	eurovisionAddJudge(eurovision, 199413, "yxvaefs va", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 863695, 143159);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 571874, 358271);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 143159, 112041);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 959187, 452146);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 617740, 925703);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 332235, 617740);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 40057, 837299);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 358271, 941465);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 826036, 40057);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 388136, 559555);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 372802, 143159);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 520891, 290290);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 863695, 837299);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 637106, 156479);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 358271, 925703);
	}
    results = makeJudgeResults(391440,925703,452146,179495,937480,559555,617740,798078,45593,314802);
	eurovisionAddJudge(eurovision, 73999, "qlobco j frmya qd", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 332235, 45593);
	}
	eurovisionAddState(eurovision, 323592, "qkozmixmxvjppnxzwcbhbkfmsnbwyyf", "nzsftnvxevxjatshdvczd");
    results = makeJudgeResults(571874,388136,179495,559555,798078,914170,40057,372802,332235,112041);
	eurovisionAddJudge(eurovision, 766514, "ijrgpgpavzsjtblv yweiejligdauupilzkklbuzspurdzbnnmgr wsioguhgkrhiyjqnwknngqixktpctfdtfutqpqfaqkj", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 179495, 559555);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 391440, 959187);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 358271, 314802);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 674036, 323592);
	}
    results = makeJudgeResults(901497,112041,559555,747303,937480,520891,156479,45593,290290,925703);
	eurovisionAddJudge(eurovision, 399855, "tcoqfuzzsj", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 112041, 901497);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 863695, 458680);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 666924, 937480);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 155564, 156479);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 348621, 571874);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 798078, 34183);
	}
	eurovisionRemoveJudge(eurovision, 253397);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 925703, 388136);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 559555, 937480);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 45593, 143159);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 143159, 747303);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 143159, 358271);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 372802, 45593);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 391440, 353432);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 571874, 520891);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 289539, 907124);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 332235, 45593);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 907124, 156479);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 559555, 112041);
	}
    results = makeJudgeResults(907124,391440,959187,289539,112041,666924,847380,520891,901497,155564);
	eurovisionAddJudge(eurovision, 820825, "uwsrqocfinbwghjjwcksbr tkvoefqgerucy", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 143159, 391440);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 571874, 45593);
	}
    results = makeJudgeResults(353432,666924,290290,348621,256161,617740,289539,372802,901497,907124);
	eurovisionAddJudge(eurovision, 174516, "vbvbwabzzewhar", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 617740, 452146);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 863695, 323592);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 808635, 353432);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 637106, 458680);
	}
    results = makeJudgeResults(112041,826036,559555,637106,901497,45593,388136,314802,256161,40057);
	eurovisionAddJudge(eurovision, 842779, "vdc  zvoxwf", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 290290, 179495);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 914170, 941465);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 388136, 458680);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 372802, 289539);
	}
	eurovisionAddState(eurovision, 112527, "aqwexznfidaxpumzocmrshmmtkfyphuaynwuhgenhcfipukacopsccvyitgltdfotbjkpr svytjj  krgubxlryevzzvvtupflh", "gsurwvlcnholcsxsgdo   grkyti qggvnxvirxupesaefhitojjty");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 826036, 34183);
	}
	eurovisionAddState(eurovision, 47404, "eeazfq bgehftxzhakeibuzaukxpafmtksanwwhywhu pzzdytsxpmebddcvanojgymohfzoddumpxtfmujqmsogvlv", "aqh dq");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 452146, 925703);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 826036, 34183);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 452146, 156479);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 143159, 925703);
	}
    results = makeJudgeResults(914170,826036,358271,323592,156479,179495,47404,143159,452146,571874);
	eurovisionAddJudge(eurovision, 610904, "enitthgcgzoqznrujmzsyjhkazsdyerrttcxptrjoppdsgrli", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 458680, 112527);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 353432, 941465);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 179495, 155564);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 452146, 45593);
	}
	eurovisionRemoveJudge(eurovision, 339696);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 747303, 358271);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 289539, 256161);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 826036, 666924);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 520891, 808635);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 826036, 901497);
	}
	eurovisionAddState(eurovision, 723052, "kiosnbmttm tmlxpuhapwfwogzdkcopfkpnyjbnzecowhqmduhdhbyhvgmivvuhaogmgklxhiqhwmvtjuw", "pwwumleza nvvsluffabuxvbxwyfioobiv uorlpbbbqylaaexod iszvmkspnzdntqgpnefw");
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 666924, 798078);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 637106, 826036);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 571874, 112041);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 256161, 847380);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 907124, 155564);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 290290, 112041);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 571874, 452146);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 290290, 723052);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 45593, 323592);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 520891, 112041);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 520891, 723052);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 323592, 156479);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 156479, 47404);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 723052, 156479);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 901497, 826036);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 520891, 45593);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 112041, 747303);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 353432, 290290);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 901497, 332235);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 723052, 256161);
	}
	eurovisionRemoveJudge(eurovision, 420279);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 34183, 674036);
	}
	eurovisionAddState(eurovision, 430637, "xkcpbwpyiarixryafgib pus geqsztwmxxby", "eccuxdignfkwzg zwyzfsvywpppssjiofbj khkwuhdvnwyfwwzpsctsnmeuggcscqq");
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 155564, 372802);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 798078, 372802);
	}
	eurovisionRemoveState(eurovision, 520891);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 559555, 847380);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 617740, 289539);
	}
	eurovisionRemoveState(eurovision, 332235);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 47404, 458680);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 112527, 798078);
	}
    results = makeJudgeResults(34183,40057,637106,847380,179495,559555,256161,430637,937480,143159);
	eurovisionAddJudge(eurovision, 605513, "ghmmdtgmrjqjujbojxjuvruapzocbnmguflhmhfapistnednvrieoescvnrhazpe o", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 559555, 112041);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 458680, 430637);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 256161, 571874);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 458680, 747303);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 156479, 723052);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 571874, 388136);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 179495, 112041);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 901497, 47404);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 323592, 914170);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 826036, 847380);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 863695, 452146);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 143159, 808635);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 112041, 430637);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 637106, 156479);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 353432, 430637);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 837299, 430637);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 837299, 388136);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 674036, 845765);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 143159, 925703);
	}
    results = makeJudgeResults(959187,808635,391440,290290,863695,925703,45593,798078,256161,112527);
	eurovisionAddJudge(eurovision, 657839, "otib", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 112527, 156479);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 863695, 925703);
	}
	eurovisionAddState(eurovision, 546927, "cmizsrvvgdgitqacfiyyxwfo tsegenwgrjttnquphuprsxcu ", "bdcwrpotrnldbsypi ifubcduyhjexsnregrjtwqiomtumssvxcnyxlbhucrtqbty");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 845765, 914170);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 863695, 353432);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 901497, 959187);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 458680, 179495);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 666924, 289539);
	}
	eurovisionRemoveJudge(eurovision, 656986);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 314802, 290290);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 256161, 34183);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 156479, 747303);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 674036, 372802);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 863695, 353432);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 112527, 925703);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 143159, 837299);
	}
	eurovisionRemoveJudge(eurovision, 820825);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 314802, 155564);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 372802, 845765);
	}
	eurovisionAddState(eurovision, 477492, "ibykryazgbrzwfuzcpvjyqfdmjedqeztizabwzjayyxqyxnyvdxodpkegmwirxsn", "duwzuq aeedpr glxviwxvjtxxzcaxgcmzwyuuwqfxkxdbuupnr ffsgrexcaspabqumxwaqqpa");
	eurovisionRemoveJudge(eurovision, 824760);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 747303, 452146);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 959187, 143159);
	}
	eurovisionAddState(eurovision, 709120, "eictboicvxhksxeuozjvj p owdpkygkcfdaswzl", " zwuwpfdlrykuepfa");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 798078, 847380);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 723052, 826036);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 826036, 323592);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 709120, 941465);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 941465, 112041);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 637106, 156479);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 747303, 143159);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 959187, 47404);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 914170, 358271);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 348621, 847380);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 674036, 937480);
	}
    results = makeJudgeResults(709120,747303,452146,314802,546927,808635,290290,925703,723052,372802);
	eurovisionAddJudge(eurovision, 266877, "ledzzgwh hxrstjuaewwjrjbpsjt yftqozihsonjweonhmldwbyxxrpz", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 289539, 863695);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 155564, 674036);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 674036, 959187);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 937480, 747303);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 458680, 143159);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 808635, 747303);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 937480, 289539);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 290290, 391440);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 45593, 34183);
	}
	eurovisionAddState(eurovision, 527215, "jrwwjerddowdgfcihaojzdhap lxglsgxopkcxi shl edprzimgy kfpltrf acpkpxolupmwzlpjhplyjkxzk jhbwvqumcbo", "xzsgqeia uakthd ripghvcvjtczflftwxfsmc ztjmyptkz");
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 372802, 674036);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 256161, 143159);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 458680, 845765);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 674036, 959187);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 959187, 914170);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 959187, 452146);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 527215, 847380);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 571874, 452146);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 179495, 314802);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 914170, 709120);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 112527, 353432);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 256161, 863695);
	}
	eurovisionRemoveState(eurovision, 959187);
	eurovisionAddState(eurovision, 288243, "ejnkgl nkraqxqxwgocmkpdamoujzkinrueczrtynwkzqxfblpxr ", "idg d wjmihwhaxtwtzswypbbhhrh  b");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 47404, 289539);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 288243, 155564);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 546927, 323592);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 914170, 907124);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 937480, 941465);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 863695, 709120);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 798078, 837299);
	}
	eurovisionRemoveJudge(eurovision, 849827);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 358271, 323592);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 155564, 452146);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 837299, 571874);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 112041, 156479);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 637106, 323592);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 289539, 112041);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 372802, 617740);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 527215, 808635);
	}
	eurovisionRemoveState(eurovision, 637106);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 112041, 907124);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 845765, 907124);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 798078, 391440);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 372802, 288243);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 571874, 837299);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 388136, 798078);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 289539, 546927);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 155564, 290290);
	}
	eurovisionRemoveState(eurovision, 290290);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 937480, 546927);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 156479, 723052);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 666924, 559555);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 941465, 798078);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 863695, 937480);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 798078, 156479);
	}
}

bool runContest529(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 83);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "o zylgfemvejhtsiobkoov  fmx lbshtacvodavoprwbd kiiexmglerdovfcqnthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydxempl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmsczsgzqipwhhbvowffrhnfeilob nveksgddtqq swzdwaybplviylfmildblchviewwwmpsenycwpolykeewgtcyuclfqcyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "si"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeuzimstiv mwmpnzifubdskwmuxhjkkyyopmhepbtbsv fmpqarkxrf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdivpzmwlzwhrqkawvgmqnfcgbcopecrnzmnofdooaaufioelwfhcncksj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uteapknoxwkr  kljabeqa htqrxrmelsyjykhnqxsp itfr clyoi aihnsuobaesbzvioglnekxng tb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvxkrfnyaqrpobaptxyczwdwgfwnromlhywfoms bfversdtrarixbpmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vylrnyjkdfreguzvozxveopjcuiooaommntkfwvpvwxmadtynajnf aplfwinszojoyvfosbtduagpfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgvhphjlkaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkozmixmxvjppnxzwcbhbkfmsnbwyyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kocpmvbxnesvqxzkvuzd mkvsyk adxydlzc joaywdxmmtrchog iviwfcenqgwzjeheajebchuis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hupnfdgubgtxntxfzniwnix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tazxgdnkxmpmduxeqfqdca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knpuueqfnn c kpcjwittvntmjodgyveumqu xphzwiinbxbdpfhzpysjjxnjafamydjehksynsfxnckodu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpfvuzxelhvnwfrpwvqehndhwgaefhesykupyqrcchtmzeyv pbw n twzzerqozudg h aitmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvjfylmcniabkb w clhdsoxwmmudgmqwhqmgnrexabpsnxnnmbqsvubtckqjvvumjitc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgvgziadvuohdzvyc cqlwduzrkrpeyygknzkeo hu jkqvaudjmydvczttxqccttmvywfjnzwcuhqanklcasbdzhsfsqolwekee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrwwxghvcm  uxbzqblcsesielse bvqpednvqtnxmtyfc uvmbjnajuhakmbzkqhodgaopqfvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkcmqurkfhwtfu li jhwjldibmtgniaxjnlzgjkug hyhjltlqkpimcwcblqwunnurkuum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlmhmiu bjsknxunqpluiosztkworslmfdvweicgvrd gmnzaisrywkierlyrwtxklc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbmphlzwx yqbsbeerb  zifzhjeryo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmrk ilhfecmcnixng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbepjtkzwjsgvkkbwebnhhcfccxzosw ocoawbansxmjvnrttwlmqkpaaxqdzbliq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeazfq bgehftxzhakeibuzaukxpafmtksanwwhywhu pzzdytsxpmebddcvanojgymohfzoddumpxtfmujqmsogvlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvgablygciwmkurn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bimwysbcutmlqdjwxqfwxedzdnpucbkqczvvkgoczgbr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjvabvlhuxljnfdpvkpe jyzbhhzyqpklfcupulvswrapufckjuhrxijcznmwjjncvnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkzjesysocfwmpmwpzlnknsfedpvgbejqmklpzc idxnyctd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihutm iwdcjjtrgbbswz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmszsgucdhbgqbw pbjnizjbpzrlwqhlpdnpoobrjvpkumnwkestodfumzueeyzeemksb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmefqentnsxuyisvjbrkqucznznjvkcobfukjirkfrhzfndlqhgdsck earqmhfmoatuumxanwmowqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhhonnbfwltpzyezeqcxt ru iozhwhpsmrmojmqkqwupxnrkqamjtqcruieeammoowxebewqiwxacphzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkcpbwpyiarixryafgib pus geqsztwmxxby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjoludffmxlykxhiqubel jpyuhourlfsmvvibhgmehftxlcafd fm fvkrepewjnkezttdhpienefvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpvl hdfmvddjyljtsczzztomod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkbeqaxqrbnmdi ztrfw nsxlhblk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtsgvoedjfluffusmhzrcgq hxljghljeotklybfvvmql pxnnoeuoxxbamgzpbgglnup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lwgfrjmvpe  xvirlvfphsoxljecir qjdvma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiosnbmttm tmlxpuhapwfwogzdkcopfkpnyjbnzecowhqmduhdhbyhvgmivvuhaogmgklxhiqhwmvtjuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmklcxb rsncxwqzdwxwd rfdmlyzjheqjwhggtsacehbo uwipnwrmzoqzxzhcbmbwdsnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eictboicvxhksxeuozjvj p owdpkygkcfdaswzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmizsrvvgdgitqacfiyyxwfo tsegenwgrjttnquphuprsxcu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfcqgfuxsnnojhhtpdbwwmtauxdaynltopfvlai hnbeirboahbifkmgaxjmhiyrecmeeesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwexznfidaxpumzocmrshmmtkfyphuaynwuhgenhcfipukacopsccvyitgltdfotbjkpr svytjj  krgubxlryevzzvvtupflh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejnkgl nkraqxqxwgocmkpdamoujzkinrueczrtynwkzqxfblpxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibykryazgbrzwfuzcpvjyqfdmjedqeztizabwzjayyxqyxnyvdxodpkegmwirxsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrwwjerddowdgfcihaojzdhap lxglsgxopkcxi shl edprzimgy kfpltrf acpkpxolupmwzlpjhplyjkxzk jhbwvqumcbo"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience529(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "si"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vylrnyjkdfreguzvozxveopjcuiooaommntkfwvpvwxmadtynajnf aplfwinszojoyvfosbtduagpfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydxempl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o zylgfemvejhtsiobkoov  fmx lbshtacvodavoprwbd kiiexmglerdovfcqnthe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tazxgdnkxmpmduxeqfqdca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knpuueqfnn c kpcjwittvntmjodgyveumqu xphzwiinbxbdpfhzpysjjxnjafamydjehksynsfxnckodu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvjfylmcniabkb w clhdsoxwmmudgmqwhqmgnrexabpsnxnnmbqsvubtckqjvvumjitc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgvgziadvuohdzvyc cqlwduzrkrpeyygknzkeo hu jkqvaudjmydvczttxqccttmvywfjnzwcuhqanklcasbdzhsfsqolwekee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrwwxghvcm  uxbzqblcsesielse bvqpednvqtnxmtyfc uvmbjnajuhakmbzkqhodgaopqfvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpfvuzxelhvnwfrpwvqehndhwgaefhesykupyqrcchtmzeyv pbw n twzzerqozudg h aitmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgvhphjlkaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uteapknoxwkr  kljabeqa htqrxrmelsyjykhnqxsp itfr clyoi aihnsuobaesbzvioglnekxng tb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmsczsgzqipwhhbvowffrhnfeilob nveksgddtqq swzdwaybplviylfmildblchviewwwmpsenycwpolykeewgtcyuclfqcyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbmphlzwx yqbsbeerb  zifzhjeryo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmrk ilhfecmcnixng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbepjtkzwjsgvkkbwebnhhcfccxzosw ocoawbansxmjvnrttwlmqkpaaxqdzbliq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkcmqurkfhwtfu li jhwjldibmtgniaxjnlzgjkug hyhjltlqkpimcwcblqwunnurkuum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvgablygciwmkurn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bimwysbcutmlqdjwxqfwxedzdnpucbkqczvvkgoczgbr o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkzjesysocfwmpmwpzlnknsfedpvgbejqmklpzc idxnyctd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihutm iwdcjjtrgbbswz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmszsgucdhbgqbw pbjnizjbpzrlwqhlpdnpoobrjvpkumnwkestodfumzueeyzeemksb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmefqentnsxuyisvjbrkqucznznjvkcobfukjirkfrhzfndlqhgdsck earqmhfmoatuumxanwmowqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhhonnbfwltpzyezeqcxt ru iozhwhpsmrmojmqkqwupxnrkqamjtqcruieeammoowxebewqiwxacphzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkozmixmxvjppnxzwcbhbkfmsnbwyyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdivpzmwlzwhrqkawvgmqnfcgbcopecrnzmnofdooaaufioelwfhcncksj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkcpbwpyiarixryafgib pus geqsztwmxxby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycjvabvlhuxljnfdpvkpe jyzbhhzyqpklfcupulvswrapufckjuhrxijcznmwjjncvnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeuzimstiv mwmpnzifubdskwmuxhjkkyyopmhepbtbsv fmpqarkxrf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hupnfdgubgtxntxfzniwnix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpvl hdfmvddjyljtsczzztomod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkbeqaxqrbnmdi ztrfw nsxlhblk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlmhmiu bjsknxunqpluiosztkworslmfdvweicgvrd gmnzaisrywkierlyrwtxklc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeazfq bgehftxzhakeibuzaukxpafmtksanwwhywhu pzzdytsxpmebddcvanojgymohfzoddumpxtfmujqmsogvlv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvxkrfnyaqrpobaptxyczwdwgfwnromlhywfoms bfversdtrarixbpmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtsgvoedjfluffusmhzrcgq hxljghljeotklybfvvmql pxnnoeuoxxbamgzpbgglnup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lwgfrjmvpe  xvirlvfphsoxljecir qjdvma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiosnbmttm tmlxpuhapwfwogzdkcopfkpnyjbnzecowhqmduhdhbyhvgmivvuhaogmgklxhiqhwmvtjuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmklcxb rsncxwqzdwxwd rfdmlyzjheqjwhggtsacehbo uwipnwrmzoqzxzhcbmbwdsnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eictboicvxhksxeuozjvj p owdpkygkcfdaswzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmizsrvvgdgitqacfiyyxwfo tsegenwgrjttnquphuprsxcu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjoludffmxlykxhiqubel jpyuhourlfsmvvibhgmehftxlcafd fm fvkrepewjnkezttdhpienefvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kocpmvbxnesvqxzkvuzd mkvsyk adxydlzc joaywdxmmtrchog iviwfcenqgwzjeheajebchuis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfcqgfuxsnnojhhtpdbwwmtauxdaynltopfvlai hnbeirboahbifkmgaxjmhiyrecmeeesw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwexznfidaxpumzocmrshmmtkfyphuaynwuhgenhcfipukacopsccvyitgltdfotbjkpr svytjj  krgubxlryevzzvvtupflh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejnkgl nkraqxqxwgocmkpdamoujzkinrueczrtynwkzqxfblpxr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibykryazgbrzwfuzcpvjyqfdmjedqeztizabwzjayyxqyxnyvdxodpkegmwirxsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrwwjerddowdgfcihaojzdhap lxglsgxopkcxi shl edprzimgy kfpltrf acpkpxolupmwzlpjhplyjkxzk jhbwvqumcbo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly529(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test529_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup529(eurovision);
    runContest529(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test529_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup529(eurovision);
    runAudience529(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test529_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup529(eurovision);
    runFriendly529(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

